#include "TDGAJniHelper.h"
#include "TDGALog.h"
#include <string.h>

#define JAVAVM    TDGAJniHelper::getJavaVM()

using namespace std;

#define JAVA_CLASS_VIRTUAL      "com/tendcloud/tenddata/TDGAVirtualCurrency"
#define JAVA_CLASS_TDGA         "com/tendcloud/tenddata/TalkingDataGA"
#define JAVA_CLASS_MISSION      "com/tendcloud/tenddata/TDGAMission"
#define JAVA_CLASS_ITEM         "com/tendcloud/tenddata/TDGAItem"
#define JAVA_CLASS_ACCOUNT      "com/tendcloud/tenddata/TDGAAccount"
#define JAVA_CLASS_ACCOUNT_TYPE "com/tendcloud/tenddata/TDGAAccount$AccountType"
#define JAVA_CLASS_GENDER       "com/tendcloud/tenddata/TDGAAccount$Gender"

jclass gClass_Virtual;
jclass gClass_TalkingDtatGA;
jclass gClass_Mission;
jclass gClass_Item;
jclass gClass_Account;
jclass gClass_AccountType;
jclass gClass_Gender;

extern "C" {
    static bool getEnv(JNIEnv **env) {

        bool bRet = false;
        do {
        	if (JAVAVM) {
//        		LOGD("JAVAVM->GetEnv");
				jint ret = JAVAVM->GetEnv((void**) env, JNI_VERSION_1_4);
				if (ret != JNI_OK) {
//					LOGD("AttachCurrentThread env");
					jint status = JAVAVM->AttachCurrentThread(env, NULL);
					if (status < 0) {
						LOGE("getEnv: failed to attach current thread");
						env = NULL;
						break;
					}
//					LOGD("AttachCurrentThread env success");
				}
//				LOGD("JAVAVM->GetEnv return true");
			} else {
        		LOGE("!!!!!! Not set javavm. Please Call TDGAJniHelper::setJavaVM() in JNI_OnLoad.");
        		break;
        	}
            bRet = true;
        } while (0);        

        return bRet;
    }

    static bool getStaticMethodInfo_(TDGAJniMethodInfo &methodinfo, jclass classID, const char *methodName, const char *paramCode)
    {
        jmethodID methodID = 0;
        JNIEnv *pEnv = 0;
        bool bRet = false;
        do {
            if (! getEnv(&pEnv)) {
                break;
            }

            methodID = pEnv->GetStaticMethodID(classID, methodName, paramCode);
            if (! methodID) {
                LOGD("Failed to find static method id of %s", methodName);
                break;
            }

            methodinfo.env = pEnv;
            methodinfo.methodID = methodID;
            bRet = true;
        } while (0);

        return bRet;
    }

    static bool getMethodInfo_(TDGAJniMethodInfo &methodinfo, jclass classID, const char *methodName, const char *paramCode)
    {
        jmethodID methodID = 0;
        JNIEnv *pEnv = 0;
        bool bRet = false;

        do {
            if (! getEnv(&pEnv)) {
                break;
            }

            methodID = pEnv->GetMethodID(classID, methodName, paramCode);
            if (! methodID) {
                LOGD("Failed to find method id of %s", methodName);
                break;
            }

            methodinfo.env = pEnv;
            methodinfo.methodID = methodID;

            bRet = true;
        } while (0);

        return bRet;
    }

    static string jstring2string_(jstring jstr) {
        if (jstr == NULL) {
            return "";
        }
        
        JNIEnv *env = 0;

        if (! getEnv(&env)) {
            return 0;
        }

        const char* chars = env->GetStringUTFChars(jstr, NULL);
        string ret(chars);
        env->ReleaseStringUTFChars(jstr, chars);

        return ret;
    }
}


JavaVM* TDGAJniHelper::m_psJavaVM = NULL;

bool TDGAJniHelper::getJNIEnv(JNIEnv **env) {
	return getEnv(env);
}

void TDGAJniHelper::detachEnv() {
	if (JAVAVM) {
		JAVAVM->DetachCurrentThread();
	}
}

JavaVM* TDGAJniHelper::getJavaVM() {
    return m_psJavaVM;
}

void TDGAJniHelper::globalDeInit() {
	JNIEnv *env = 0;
	getEnv(&env);

	env->DeleteGlobalRef(gClass_Virtual);
	gClass_Virtual = NULL;

	env->DeleteGlobalRef(gClass_TalkingDtatGA);
	gClass_TalkingDtatGA = NULL;

	env->DeleteGlobalRef(gClass_Mission);
	gClass_Mission = NULL;

	env->DeleteGlobalRef(gClass_Item);
	gClass_Item = NULL;

	env->DeleteGlobalRef(gClass_Account);
	gClass_Account = NULL;

	env->DeleteGlobalRef(gClass_AccountType);
	gClass_AccountType = NULL;

	env->DeleteGlobalRef(gClass_Gender);
	gClass_Gender = NULL;
}

void TDGAJniHelper::setJavaVM(JavaVM *javaVM) {
    m_psJavaVM = javaVM;

    JNIEnv *env = 0;
    getEnv(&env);

    jclass c = env->FindClass(JAVA_CLASS_VIRTUAL);
    gClass_Virtual = (jclass)env->NewGlobalRef(c);

    c = env->FindClass(JAVA_CLASS_TDGA);
    gClass_TalkingDtatGA = (jclass)env->NewGlobalRef(c);

    c = env->FindClass(JAVA_CLASS_MISSION);
    gClass_Mission = (jclass)env->NewGlobalRef(c);

    c = env->FindClass(JAVA_CLASS_ITEM);
    gClass_Item = (jclass)env->NewGlobalRef(c);

    c = env->FindClass(JAVA_CLASS_ACCOUNT);
    gClass_Account = (jclass)env->NewGlobalRef(c);

    c = env->FindClass(JAVA_CLASS_ACCOUNT_TYPE);
    gClass_AccountType = (jclass)env->NewGlobalRef(c);

    c = env->FindClass(JAVA_CLASS_GENDER);
    gClass_Gender = (jclass)env->NewGlobalRef(c);
}

string TDGAJniHelper::m_externalAssetPath;

const char* TDGAJniHelper::getExternalAssetPath() {
    return m_externalAssetPath.c_str();
}

void TDGAJniHelper::setExternalAssetPath(const char * externalAssetPath) {
    m_externalAssetPath = externalAssetPath;
}

bool TDGAJniHelper::getStaticMethodInfo(TDGAJniMethodInfo &methodinfo, jclass classID, const char *methodName, const char *paramCode)
{
    return getStaticMethodInfo_(methodinfo, classID, methodName, paramCode);
}

bool TDGAJniHelper::getMethodInfo(TDGAJniMethodInfo &methodinfo, jclass classID, const char *methodName, const char *paramCode)
{
    return getMethodInfo_(methodinfo, classID, methodName, paramCode);
}

string TDGAJniHelper::jstring2string(jstring str)
{
    return jstring2string_(str);
}

