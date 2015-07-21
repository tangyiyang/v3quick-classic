#ifndef __TDGALog_h__
#define __TDGALog_h__

#if ANDROID
	#include <android/log.h>
#elif IOS
	#import <Foundation/Foundation.h>
#endif

#undef LOG_TAG
#undef LOGD
#undef LOGW
#undef LOGE
#define LOG_TAG "libtalkingdata"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN,LOG_TAG,__VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)

#endif // __TDGALog_h__
