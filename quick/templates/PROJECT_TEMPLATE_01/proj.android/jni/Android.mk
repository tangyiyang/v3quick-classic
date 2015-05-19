LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := game_shared

LOCAL_MODULE_FILENAME := libgame

LOCAL_SRC_FILES := hellocpp/main.cpp \
    ../../native/AppDelegate.cpp \
    $(QUICK_V3_LIB)/ProjectConfig/ProjectConfig.cpp \
    $(QUICK_V3_LIB)/ProjectConfig/SimulatorConfig.cpp

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../native

LOCAL_LDLIBS := -lGLESv2 \
                -llog \
                -lz \
                -landroid

LOCAL_EXPORT_LDLIBS := -lGLESv1_CM \
                       -lGLESv2 \
                       -lEGL \
                       -llog \
                       -lz \
                       -landroid

LOCAL_WHOLE_STATIC_LIBRARIES := libquickcocos2dx

include $(BUILD_SHARED_LIBRARY)

$(call import-module,proj.android)
