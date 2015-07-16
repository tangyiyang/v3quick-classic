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


#define PC_EVENT_CONNECTED "connected"
#define PC_EVENT_CONNECTEFAIL "connectFailed"
#define PC_EVENT_NOTIFYERR "notifyError"
#define PC_EVENT_NOTIFYFAIL "notifyFailed"
#define PC_EVENT_NOTIFYSUCCESS "notifySuccess"
#define PC_EVENT_REQUESTERR "requestError"
#define PC_EVENT_REQUESTFAIL "requestFailed"

class PomeloClient :public cocos2d::Ref{
public:
    static PomeloClient *getInstance();
    static void destroyInstance();
    
    int connect(const char *ip, int port);
    void disconnect();
	int addListener(const char* event);
	void removeListener(const char* event);
	void notify(const char *route, const char *str);
	void request(const char *route, const char *str);
    void registerScriptHandler(cocos2d::LUA_FUNCTION funcID);
	void unregisterScriptHandler(void);

    PomeloClient();
    virtual ~PomeloClient();
    
    
    
public:
    void pushMsg(std::string event, std::string msg);
    
private:
    cocos2d::LUA_FUNCTION scriptHandler;
    int task_count;
    pc_client_t *client;
#ifdef _WINDOWS_
	void* reponse_queue_mutex;
	void* task_count_mutex;
#else
    pthread_mutex_t reponse_queue_mutex;
    pthread_mutex_t task_count_mutex;
#endif
    std::queue< std::map<std::string, std::string> > msgQueue;
    
    void incTaskCount();
    void decTaskCount();
    void dispatchCallbacks(float delta);
    void dispatchRequest();
    void callScriptHandler(const char* event, const char* msg);

};

#endif /* defined(__PomeloClient_H__) */
