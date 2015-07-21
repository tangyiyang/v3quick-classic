#ifndef __TDGA_JNI_HELPER_H__
#define __TDGA_JNI_HELPER_H__

#include <jni.h>
#include <string>

typedef struct TDGAJniMethodInfo_ {
    JNIEnv *    env;
    jmethodID   methodID;
} TDGAJniMethodInfo;

class TDGAJniHelper {
public:
	static bool getJNIEnv(JNIEnv **env);
	static void detachEnv();
	static void globalDeInit();
    static JavaVM* getJavaVM();
    static void setJavaVM(JavaVM *javaVM);
    static const char* getExternalAssetPath();
    static void setExternalAssetPath(const char* externalAssetPath);
    static bool getStaticMethodInfo(TDGAJniMethodInfo &methodinfo, jclass classID, const char *methodName, const char *paramCode);
    static bool getMethodInfo      (TDGAJniMethodInfo &methodinfo, jclass classID, const char *methodName, const char *paramCode);
    static std::string jstring2string(jstring str);

private:
    static JavaVM *m_psJavaVM;
    static std::string m_externalAssetPath;
};

#endif // __TDGA_JNI_HELPER_H__
