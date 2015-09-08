#include "PomeloClient.h"
USING_NS_CC;

#define MSG_ERROR "{\"error\":true}"

#define INVALID_SCRIPT_HANDLER (-1)
void requestCallBack(pc_request_t *req, int status, json_t *resp) {
	const char* event = req->route;
    
    // msg::create will new a Msg Object, after processed the msg, message will be freed by the consumer
    if (!status) {
        char* m = json_dumps(resp, 0);
        Msg* msg = new Msg(Msg::MSG_REQUEST, req->id, event, m);
        PomeloClient::getInstance()->pushMsg(msg);
        
        free(m);
    } else {
        PomeloClient::getInstance()->pushMsg(Msg::create(Msg::MSG_REQUEST, req->id, event, MSG_ERROR));
    }
    
//    json_decref(resp);
    pc_request_destroy(req);
}

void notifyCallBack(pc_notify_t *req, int status) {
	const char* event = req->route;
    if (!status) {
        char* m = json_dumps(req->msg, 0);
        PomeloClient::getInstance()->pushMsg(Msg::create(Msg::MSG_NOTIFY, 0, event, m));
        
        free(m);
    } else {
        PomeloClient::getInstance()->pushMsg(Msg::create(Msg::MSG_NOTIFY, 0, event, MSG_ERROR));
    }
    
	json_t *msg = req->msg;
	json_decref(msg);
	pc_notify_destroy(req);
}

void eventCallBack(pc_client_t *client, const char *event, void *data) {
    if(data) {
        json_t* jsondata = (json_t*)data;
		char* msg = json_dumps(jsondata, 0);
        PomeloClient::getInstance()->pushMsg(Msg::create(Msg::MSG_EVENT, 0, event, msg));
        
        json_decref(jsondata);
        free(msg);
    } else {
        PomeloClient::getInstance()->pushMsg(Msg::create(Msg::MSG_EVENT, 0, event, ""));
    }
}

static PomeloClient *s_PomeloClient = NULL; // pointer to singleton
PomeloClient::PomeloClient() {
    Director::getInstance()->getScheduler()->schedule(schedule_selector(PomeloClient::dispatchCallbacks), this, 0, false);
    Director::getInstance()->getScheduler()->pauseTarget(this);

#ifdef _WINDOWS_
	reponse_queue_mutex = CreateMutex(
		NULL,              // default security attributes
		false,             // initially not owned
		L"response_queue_mutex");

	task_count_mutex = CreateMutex(
		NULL,              // default security attributes
		false,             // initially not owned
		L"task_count_mutex");
#else 
	pthread_mutex_init(&reponse_queue_mutex, NULL);
	pthread_mutex_init(&task_count_mutex, NULL);
#endif
}

PomeloClient::~PomeloClient() {
    Director::getInstance()->getScheduler()->unschedule(schedule_selector(PomeloClient::dispatchCallbacks), this);
#ifdef _WINDOWS_
#else
    pthread_mutex_destroy(&reponse_queue_mutex);
    pthread_mutex_destroy(&task_count_mutex);
#endif
}

void PomeloClient::dispatchRequest() {
    Msg* m = NULL;
#ifdef _WINDOWS_
	WaitForSingleObject(reponse_queue_mutex, INFINITE);
#else
    pthread_mutex_lock(&reponse_queue_mutex);
#endif
    if (msgQueue.size()>0) {
        m = msgQueue.front();
        msgQueue.pop();
    }
    
#ifdef _WINDOWS_
	ReleaseMutex(reponse_queue_mutex);
#else
	pthread_mutex_unlock(&reponse_queue_mutex);
#endif
    if (m) {
        // consumer release the message object
        callScriptHandler(m);
        delete m;
        m = NULL;
    }
}

void PomeloClient::dispatchCallbacks(float delta) {
    dispatchRequest();
#ifdef _WINDOWS_
	WaitForSingleObject(task_count_mutex, INFINITE);
#else
	pthread_mutex_lock(&task_count_mutex);
#endif
    if (msgQueue.size() ==0) {
        Director::getInstance()->getScheduler()->pauseTarget(this);
    }
#ifdef _WINDOWS_
	ReleaseMutex(task_count_mutex);
#else
    pthread_mutex_unlock(&task_count_mutex);
#endif
}

void PomeloClient::destroyInstance() {
    if (s_PomeloClient) {
        s_PomeloClient->release();
    }
}

PomeloClient* PomeloClient::getInstance() {
    if (s_PomeloClient == NULL) {
        s_PomeloClient = new PomeloClient();
    }
    return s_PomeloClient;
}

int PomeloClient::connect(const char* addr,int port) {
    struct sockaddr_in address;
    memset(&address, 0, sizeof(struct sockaddr_in));
    address.sin_family = AF_INET;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = inet_addr(addr);
    
    client = pc_client_new();
    
    int ret = pc_client_connect(client, &address);
    if(ret) {
        CCLOG("pc_client_connect error:%d", ret);
        pc_client_destroy(client);
    }
    return ret;
}

void PomeloClient::disconnect() {
    if(client) {
        pc_client_destroy(client);
    }
}

void PomeloClient::request(const char *route, const char *str, LUA_FUNCTION handler) {
	pc_request_t *request = pc_request_new();
	json_error_t error;
	json_t *msg = json_loads(str, JSON_DECODE_ANY, &error);
    
    CCASSERT(msg, "json_loads failed");
	if(msg) {
        pc_request(client, request, route, msg, requestCallBack);
        requestCallbacks[request->id] = handler;

	}
}


void PomeloClient::notify(const char *route, const char *str, LUA_FUNCTION handler /* = 0*/) {
	pc_notify_t *notify = pc_notify_new();
	json_error_t error;
    json_t *msg = json_loads(str, JSON_DECODE_ANY, &error);
    
    CCASSERT(msg, "json_loads failed");
	if(msg) {
        // notify often don't need callbacks. so handler has a default value (0)
        if (handler != 0) {
            notifyCallbacks[route] = handler;
        }
		pc_notify(client, notify, route, msg, notifyCallBack);
	}
}


int PomeloClient::addListener(const char* event, cocos2d::LUA_FUNCTION handler){
    if (eventCallbacks[event]) {
        CCLOG("Already add listener to event = %s", event);
    }
    eventCallbacks[event] = handler;
    return pc_add_listener(client, event, eventCallBack);
}

void PomeloClient::removeListener(const char *event){
    pc_remove_listener(client, event, eventCallBack);
    
    size_t n = eventCallbacks.erase(event);
    if (n != 1) {
        CCLOG("Not found listener for event = %s", event);
    }
}

void PomeloClient::pushMsg(Msg* msg) {
    
#ifdef _WINDOWS_
	WaitForSingleObject(reponse_queue_mutex, INFINITE);
#else
	pthread_mutex_lock(&reponse_queue_mutex);
#endif
    
    msgQueue.push(msg);

#ifdef _WINDOWS_
	ReleaseMutex(reponse_queue_mutex);
#else
	pthread_mutex_unlock(&reponse_queue_mutex);
#endif
    
    Director::getInstance()->getScheduler()->resumeTarget(s_PomeloClient);
}

void PomeloClient::callScriptHandler(Msg* msg) {
    
    LuaEngine* engine = (LuaEngine*)ScriptEngineManager::getInstance()->getScriptEngine();
    
    LuaStack *pStack = engine->getLuaStack();
    lua_State *state = pStack->getLuaState();
    cocos2d::LUA_FUNCTION handler = -1;

    if (msg->type == Msg::MSG_REQUEST) {
        int reqId = msg->reqId;
        CCASSERT(reqId >= 0, "invalid reqId");
        if (requestCallbacks.find(reqId) != requestCallbacks.end()) {
            handler = requestCallbacks[reqId];
        } else {
            handler = -1;
        }
    } else if  (msg->type == Msg::MSG_NOTIFY) {
        if (notifyCallbacks.find(msg->event) != notifyCallbacks.end()) {
            handler = notifyCallbacks[msg->event];
        } else {
            handler = -1;
        }
    } else if (msg->type == Msg::MSG_EVENT) {
        if (eventCallbacks.find(msg->event) != eventCallbacks.end()) {
            handler = eventCallbacks[msg->event];
        } else {
            handler = -1;
        }
    }
    
    // if handler == -1 do nothing for safety
    // s_function_ref_id will never be 0
    if (handler != -1) {
        lua_pushstring(state, msg->event.c_str());
        lua_pushstring(state, msg->msg.c_str());
        pStack->executeFunctionByHandler(handler, 2);
    }
}