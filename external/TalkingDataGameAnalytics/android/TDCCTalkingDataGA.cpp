#include "TDCCTalkingDataGA.h"
#include "TDGAJniHelper.h"
#include "TDGALog.h"

extern jclass gClass_TalkingDtatGA;

using namespace std;

extern "C"
{
	static jobject createJavaMapObject(JNIEnv *env, std::map<std::string, std::string>* map) {
		jclass class_Hashtable = env->FindClass("java/util/HashMap");
		jmethodID construct_method = env->GetMethodID( class_Hashtable, "<init>","()V");
		jobject obj_Map = env->NewObject( class_Hashtable, construct_method, "");
		if (map != NULL) {
			jmethodID add_method= env->GetMethodID( class_Hashtable,"put","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
			for (std::map<std::string, std::string>::const_iterator it = map->begin(); it != map->end(); ++it) {
				env->CallObjectMethod(obj_Map, add_method, env->NewStringUTF(it->first.c_str()), env->NewStringUTF(it->second.c_str()));
			}
		}
		env->DeleteLocalRef(class_Hashtable);
		return obj_Map;
	}
}

void TDCCTalkingDataGA::onStart(const char* appId, const char* channelId) {
	// for ios. do nothing on android
}
    
void TDCCTalkingDataGA::onEvent(const char* eventId, EventParamMap* map) {
    if (NULL == eventId || strlen(eventId) == 0) {
        return;
    }
    TDGAJniMethodInfo t;
    if (TDGAJniHelper::getStaticMethodInfo(t
    		, gClass_TalkingDtatGA
    		, "onEvent"
    		, "(Ljava/lang/String;Ljava/util/Map;)V")) {
    	jobject jparamMap = createJavaMapObject(t.env, map);
    	jstring jeventId = t.env->NewStringUTF(eventId);
		t.env->CallStaticVoidMethod(gClass_TalkingDtatGA, t.methodID, jeventId, jparamMap);
		t.env->DeleteLocalRef(jeventId);
		t.env->DeleteLocalRef(jparamMap);
	}
}
    
void TDCCTalkingDataGA::setLatitude(double latitude ,double longitude) {
	// for ios. do nothing on android
}
    
const char* TDCCTalkingDataGA::getDeviceId() {
	static std::string ret = "";

	TDGAJniMethodInfo t;
	if (TDGAJniHelper::getStaticMethodInfo(t
		, gClass_TalkingDtatGA
		, "getDeviceId"
		, "()Ljava/lang/String;")) {
		jstring jstr = (jstring)t.env->CallStaticObjectMethod(gClass_TalkingDtatGA, t.methodID);
		ret = TDGAJniHelper::jstring2string(jstr);
	}
	return ret.c_str();
}

void TDCCTalkingDataGA::onKill() {
	TDGAJniMethodInfo t;
	if (TDGAJniHelper::getStaticMethodInfo(t
		, gClass_TalkingDtatGA
		, "onKill"
		, "()V")) {
		t.env->CallStaticVoidMethod(gClass_TalkingDtatGA, t.methodID);
	}
	TDGAJniHelper::globalDeInit();
	LOGD("on kill");
}
void TDCCTalkingDataGA::setVerboseLogDisabled(){

}

void TDCCTalkingDataGA::setVerboseLogEnabled() {
	TDGAJniMethodInfo t;
	if (TDGAJniHelper::getStaticMethodInfo(t
		, gClass_TalkingDtatGA
		, "setVerboseLogEnabled"
		, "()V")) {
		t.env->CallStaticVoidMethod(gClass_TalkingDtatGA, t.methodID);
	}
}
