#include "PomeloClient.h"
USING_NS_CC;


void requestCallBack(pc_request_t *req, int status, json_t *resp) {
	const char* event = req->route;
	if(status == -1) {
		PomeloClient::getInstance()->pushMsg(std::string(event), std::string("{\"error\":true}"));
		PomeloClient::getInstance()->pushMsg(std::string(PC_EVENT_REQUESTFAIL), std::string(""));
	} else if(status == 0) {
		char* msg = json_dumps(resp, 0);
		PomeloClient::getInstance()->pushMsg(std::string(event), std::string(msg));
		free(msg);
	}
	json_t *msg = req->msg;
	json_decref(msg);
	pc_request_destroy(req);
}

void notifyCallBack(pc_notify_t *req, int status)
{
	const char* event = req->route;
	if(status == -1)
	{
		PomeloClient::getInstance()->pushMsg(std::string(event), std::string("{\"error\":true}"));
		PomeloClient::getInstance()->pushMsg(std::string(PC_EVENT_NOTIFYFAIL), std::string(""));
	}
	else
	{
		PomeloClient::getInstance()->pushMsg(std::string(event), std::string(""));
	}
	json_t *msg = req->msg;
	json_decref(msg);
	pc_notify_destroy(req);
}



void eventCallBack(pc_client_t *client, const char *event, void *data)
{
	char nullStr[] = "";
	void *msg = data ? data : (void*)nullStr;
	if(data)
	{
		msg = json_dumps((const json_t*)data, 0);
	}
	
	PomeloClient::getInstance()->pushMsg(std::string(event), std::string((const char*)msg));
	if(data)
	{
		free(msg);
	}
}

static PomeloClient *s_PomeloClient = NULL; // pointer to singleton
PomeloClient::PomeloClient(){
    Director::getInstance()->getScheduler()->schedule(schedule_selector(PomeloClient::dispatchCallbacks), this, 0, false);
    Director::getInstance()->getScheduler()->pauseTarget(this);
//    client = pc_client_new();
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
	//    pthread_mutex_init(&event_queue_mutex, NULL);
	//    pthread_mutex_init(&notify_queue_mutex, NULL);
	pthread_mutex_init(&task_count_mutex, NULL);
#endif
//    pthread_mutex_init(&connect_mutex, NULL);
    task_count = 0;
//    connect_status = 0;
//    connect_content = NULL;
}
PomeloClient::~PomeloClient(){
    Director::getInstance()->getScheduler()->unschedule(schedule_selector(PomeloClient::dispatchCallbacks), this);
#ifdef _WINDOWS_
#else
    pthread_mutex_destroy(&reponse_queue_mutex);
    pthread_mutex_destroy(&task_count_mutex);
#endif
}

void PomeloClient::dispatchRequest(){
    std::map<std::string, std::string> m;
#ifdef _WINDOWS_
	WaitForSingleObject(reponse_queue_mutex, INFINITE);
#else
    pthread_mutex_lock(&reponse_queue_mutex);
#endif
    if (msgQueue.size()>0) {
        m = msgQueue.front();
        msgQueue.pop();
        decTaskCount();
    }
#ifdef _WINDOWS_
	ReleaseMutex(reponse_queue_mutex);
#else
	pthread_mutex_unlock(&reponse_queue_mutex);
#endif
    if (!m.empty()) {
        CCLOG("event: %s, msg: %s", m["event"].c_str(), m["msg"].c_str());
        callScriptHandler(m["event"].c_str(), m["msg"].c_str());
    }
}
void PomeloClient::dispatchCallbacks(float delta){
    dispatchRequest();
#ifdef _WINDOWS_
	WaitForSingleObject(task_count_mutex, INFINITE);
#else
	pthread_mutex_lock(&task_count_mutex);
#endif
    if (task_count==0) {
        Director::getInstance()->getScheduler()->pauseTarget(this);
    }
#ifdef _WINDOWS_
	ReleaseMutex(task_count_mutex);
#else
    pthread_mutex_unlock(&task_count_mutex);
#endif
}

void PomeloClient::destroyInstance()
{
    if (s_PomeloClient) {
        
        s_PomeloClient->release();
    }
}

PomeloClient* PomeloClient::getInstance()
{
    if (s_PomeloClient == NULL) {
        s_PomeloClient = new PomeloClient();
    }
    return s_PomeloClient;
}

int PomeloClient::connect(const char* addr,int port){
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
    return  ret;
}

void PomeloClient::disconnect() {
    if(client){
//              pc_client_stop(client);
        pc_client_destroy(client);
    }
}

void PomeloClient::request(const char *route, const char *str)
{
	pc_request_t *request = pc_request_new();
	json_error_t error;
	json_t *msg = json_loads(str, JSON_DECODE_ANY, &error);
	if(!msg)
	{
		pushMsg(std::string(route), std::string("{\"error\":true}"));
		pushMsg(std::string(PC_EVENT_REQUESTERR), std::string(""));
	}
	else
	{
		pc_request(client, request, route, msg, requestCallBack);
		//json_decref(msg);
	}
}


void PomeloClient::notify(const char *route, const char *str)
{
	pc_notify_t *notify = pc_notify_new();
	json_error_t error;
	json_t *msg = json_loads(str, JSON_DECODE_ANY, &error);
	if(!msg)
	{
		pushMsg(std::string(route), std::string("{\"error\":true}"));
		pushMsg(std::string(PC_EVENT_NOTIFYERR), std::string(""));
	}
	else
	{
		pc_notify(client, notify, route, msg, notifyCallBack);
		//json_decref(msg);
	}
}


int PomeloClient::addListener(const char* event){
    return pc_add_listener(client, event, eventCallBack);
}
void PomeloClient::removeListener(const char *event){
    pc_remove_listener(client, event, eventCallBack);
}

void PomeloClient::pushMsg(std::string event, std::string msg)
{
	std::map<std::string, std::string> m;
	m["event"] = event;
	m["msg"] = msg;
#ifdef _WINDOWS_
	WaitForSingleObject(reponse_queue_mutex, INFINITE);
#else
	pthread_mutex_lock(&reponse_queue_mutex);
#endif
    
    msgQueue.push(m);

#ifdef _WINDOWS_
	ReleaseMutex(reponse_queue_mutex);
#else
	pthread_mutex_unlock(&reponse_queue_mutex);
#endif

	incTaskCount();
}

void PomeloClient::incTaskCount(){
#ifdef _WINDOWS_
	WaitForSingleObject(task_count_mutex, INFINITE);
#else
	pthread_mutex_lock(&task_count_mutex);
#endif

    task_count++;

#ifdef _WINDOWS_
	ReleaseMutex(task_count_mutex);
#else
	pthread_mutex_unlock(&task_count_mutex);
#endif
    Director::getInstance()->getScheduler()->resumeTarget(s_PomeloClient);
}
void PomeloClient::decTaskCount(){

#ifdef _WINDOWS_
	WaitForSingleObject(task_count_mutex, INFINITE);
#else
	pthread_mutex_lock(&task_count_mutex);
#endif

    task_count--;

#ifdef _WINDOWS_
	ReleaseMutex(task_count_mutex);
#else
	pthread_mutex_unlock(&task_count_mutex);
#endif

}
void PomeloClient::registerScriptHandler(LUA_FUNCTION funcID)
{
	this->scriptHandler = funcID;
}

void PomeloClient::unregisterScriptHandler(void)
{
	this->scriptHandler = 0;
}
void PomeloClient::callScriptHandler(const char* event, const char* msg) {
	// Calling lua handler function
	if (this->scriptHandler) {
		LuaEngine* engine = (LuaEngine*)ScriptEngineManager::getInstance()->getScriptEngine();
        
        LuaStack *pStack = engine->getLuaStack();
        lua_State *state = pStack->getLuaState();
        
		lua_pushstring(state, event);
        lua_pushstring(state, msg);
        pStack->executeFunctionByHandler(this->scriptHandler, 2);
		
	}
}