LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := cocos2dx_base_static

LOCAL_MODULE_FILENAME := libcocos2dxbase

LOCAL_SRC_FILES := \
                $(LOCAL_PATH)/CCAutoreleasePool.cpp \
                $(LOCAL_PATH)/CCConfiguration.cpp \
                $(LOCAL_PATH)/CCConsole.cpp \
                $(LOCAL_PATH)/CCData.cpp \
                $(LOCAL_PATH)/CCDirector.cpp \
                $(LOCAL_PATH)/CCEvent.cpp \
                $(LOCAL_PATH)/CCEventAcceleration.cpp \
                $(LOCAL_PATH)/CCEventCustom.cpp \
                $(LOCAL_PATH)/CCEventDispatcher.cpp \
                $(LOCAL_PATH)/CCEventFocus.cpp \
                $(LOCAL_PATH)/CCEventKeyboard.cpp \
                $(LOCAL_PATH)/CCEventController.cpp \
                $(LOCAL_PATH)/CCEventListener.cpp \
                $(LOCAL_PATH)/CCEventListenerController.cpp \
                $(LOCAL_PATH)/CCEventListenerAcceleration.cpp \
                $(LOCAL_PATH)/CCEventListenerCustom.cpp \
                $(LOCAL_PATH)/CCEventListenerFocus.cpp \
                $(LOCAL_PATH)/CCEventListenerKeyboard.cpp \
                $(LOCAL_PATH)/CCEventListenerMouse.cpp \
                $(LOCAL_PATH)/CCEventListenerTouch.cpp \
                $(LOCAL_PATH)/CCEventMouse.cpp \
                $(LOCAL_PATH)/CCEventTouch.cpp \
                $(LOCAL_PATH)/CCIMEDispatcher.cpp \
                $(LOCAL_PATH)/CCNS.cpp \
                $(LOCAL_PATH)/CCProfiling.cpp \
                $(LOCAL_PATH)/CCRef.cpp \
                $(LOCAL_PATH)/CCScheduler.cpp \
                $(LOCAL_PATH)/CCScriptSupport.cpp \
                $(LOCAL_PATH)/CCTouch.cpp \
                $(LOCAL_PATH)/CCUserDefault.cpp \
                $(LOCAL_PATH)/CCUserDefaultAndroid.cpp \
                $(LOCAL_PATH)/CCValue.cpp \
                $(LOCAL_PATH)/ZipUtils.cpp \
                $(LOCAL_PATH)/atitc.cpp \
                $(LOCAL_PATH)/base64.cpp \
                $(LOCAL_PATH)/ccCArray.cpp \
                $(LOCAL_PATH)/ccFPSImages.c \
                $(LOCAL_PATH)/ccTypes.cpp \
                $(LOCAL_PATH)/ccUTF8.cpp \
                $(LOCAL_PATH)/ccUtils.cpp \
                $(LOCAL_PATH)/etc1.cpp \
                $(LOCAL_PATH)/s3tc.cpp \
                $(LOCAL_PATH)/CCController.cpp \
                $(LOCAL_PATH)/CCController-android.cpp \
                $(LOCAL_PATH)/ObjectFactory.cpp

# ifeq ($(CC_USE_TGA),1)
    LOCAL_SRC_FILES += $(LOCAL_PATH)/TGAlib.cpp
# endif                

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/.

LOCAL_C_INCLUDES := $(LOCAL_PATH) \
                    $(LOCAL_PATH)/.. \
                    $(LOCAL_PATH)/../platform/android \
                    $(LOCAL_PATH)/../../external/tinyxml2 \
                    $(LOCAL_PATH)/../../external/unzip \
                    $(LOCAL_PATH)/../../external/chipmunk/include/chipmunk \
                    $(LOCAL_PATH)/../../external/edtaa3func \
                    $(LOCAL_PATH)/../../external/xxhash \
                    $(LOCAL_PATH)/../../external/ConvertUTF \
                    $(LOCAL_PATH)/../../external/freetype2/include/android/freetype2 \
                    $(LOCAL_PATH)/../../external \
                    $(LOCAL_PATH)/../base \
                    $(QUICK_V3_LIB) \
                    $(LOCAL_PATH)/../../external/nslog

LOCAL_WHOLE_STATIC_LIBRARIES := cocos_freetype2_static

# define the macro to compile through support/zip_support/ioapi.c
LOCAL_CFLAGS   :=  -DUSE_FILE32API
LOCAL_CPPFLAGS := -Wno-deprecated-declarations -Wno-extern-c-compat
LOCAL_EXPORT_CFLAGS   := -DUSE_FILE32API
LOCAL_EXPORT_CPPFLAGS := -Wno-deprecated-declarations -Wno-extern-c-compat

include $(BUILD_STATIC_LIBRARY)

$(call import-module,freetype2/prebuilt/android)