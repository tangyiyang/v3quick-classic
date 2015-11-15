#ifndef __PomeloClient_H__
#define __PomeloClient_H__

#include "cocos2d.h"
#include "CCLuaEngine.h"
#include "jansson.h"
#include "pomelo.h"
//#include "ThreadSafeQueue.h"
#include<queue>

#ifdef _WINDOWS_
#include <Windows.h>
#endif

class Msg {
public:
    enum MessageType {
        MSG_REQUEST = 0,
        MSG_NOTIFY = 1,
        MSG_EVENT = 2,
    };
public:
    Msg(int t, int r, const char* e, const char* m) {
        type = t;
        reqId = r;
        event = e;
        msg = m;
    }
    
    virtual ~Msg() {
    
    }
    
    static Msg* create(int type, const char* event) { return new Msg(type, -1, event, ""); }
    static Msg* create(int type, int reqId, const char* event, const char* msg) { return new Msg(type, reqId, event, msg); }
        
public:
    int type;
    int reqId;
    std::string event;
    std::string msg;
};
 

class PomeloClient :public cocos2d::Ref{
public:
    static PomeloClient *getInstance();
    static void destroyInstance();
    
public:
    PomeloClient();
    virtual ~PomeloClient();
     
    int connect(const char *ip, int port);
    void disconnect();
    
	void request(const char *route, const char *str, cocos2d::LUA_FUNCTION handler);
    
    int  addListener(const char* event, cocos2d::LUA_FUNCTION handler);
    
    void removeListener(const char* event);
    
    void notify(const char *route, const char *str, cocos2d::LUA_FUNCTION handler = 0);
    
public:
    void pushMsg(Msg* msg);
    
private:
    void dispatchCallbacks(float delta);
    void dispatchRequest();
    void callScriptHandler(Msg* msg);
        
private:
    std::map<int, cocos2d::LUA_FUNCTION> requestCallbacks;          // "int" means reqId
    std::map<std::string, cocos2d::LUA_FUNCTION> notifyCallbacks;   // "std::string" means route
    std::map<std::string, cocos2d::LUA_FUNCTION> eventCallbacks;    //  "std::string" means route

    volatile int task_count;
    pc_client_t *client;
#ifdef _WINDOWS_
	void* reponse_queue_mutex;
	void* task_count_mutex;
#else
    pthread_mutex_t reponse_queue_mutex;
    pthread_mutex_t task_count_mutex;
#endif
    std::queue<Msg*> msgQueue;
};

#endif /* defined(__PomeloClient_H__) */
