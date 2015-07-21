#include "TDCCMission.h"
#include "TDGAJniHelper.h"
#include "TDGALog.h"

extern jclass gClass_Mission;

void TDCCMission::onBegin(const char* missionId) {
	TDGAJniMethodInfo t;
	if (TDGAJniHelper::getStaticMethodInfo(t
		, gClass_Mission
		, "onBegin"
		, "(Ljava/lang/String;)V")) {
		jstring jmissionId = t.env->NewStringUTF(missionId);
		t.env->CallStaticVoidMethod(gClass_Mission, t.methodID, jmissionId);
		t.env->DeleteLocalRef(jmissionId);
	}
}
    
void TDCCMission::onCompleted(const char* missionId) {
	TDGAJniMethodInfo t;
	if (TDGAJniHelper::getStaticMethodInfo(t
		, gClass_Mission
		, "onCompleted"
		, "(Ljava/lang/String;)V")) {
		jstring jmissionId = t.env->NewStringUTF(missionId);
		t.env->CallStaticVoidMethod(gClass_Mission, t.methodID, jmissionId);
		t.env->DeleteLocalRef(jmissionId);
	}
}

void TDCCMission::onFailed(const char* missionId, const char* failedCause) {
	TDGAJniMethodInfo t;
	if (TDGAJniHelper::getStaticMethodInfo(t
		, gClass_Mission
		, "onFailed"
		, "(Ljava/lang/String;Ljava/lang/String;)V")) {
		jstring jmissionId = t.env->NewStringUTF(missionId);
		jstring jfailedCause = t.env->NewStringUTF(failedCause);
		t.env->CallStaticVoidMethod(gClass_Mission, t.methodID, jmissionId, jfailedCause);
		t.env->DeleteLocalRef(jmissionId);
		t.env->DeleteLocalRef(jfailedCause);
	}
}
