LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := cocos2dx_ui_static

LOCAL_MODULE_FILENAME := libcocos2dxui

LOCAL_SRC_FILES := \
    $(LOCAL_PATH)/CocosGUI.cpp \
    $(LOCAL_PATH)/UILayout.cpp \
    $(LOCAL_PATH)/UILayoutManager.cpp \
    $(LOCAL_PATH)/UIRichText.cpp \
    $(LOCAL_PATH)/UIWidget.cpp \
    $(LOCAL_PATH)/UIHelper.cpp \
    $(LOCAL_PATH)/UILayoutComponent.cpp \
    $(LOCAL_PATH)/UILayoutParameter.cpp \
    $(LOCAL_PATH)/UIScale9Sprite.cpp \

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/.

LOCAL_C_INCLUDES := $(LOCAL_PATH) \
                    $(LOCAL_PATH)/.. \
                    $(LOCAL_PATH)/../platform/android \
                    $(LOCAL_PATH)/../base \
                    $(QUICK_V3_LIB) \


LOCAL_WHOLE_STATIC_LIBRARIES := cocos2dx_ui_static

LOCAL_CFLAGS   :=  -DUSE_FILE32API
LOCAL_CPPFLAGS := -Wno-deprecated-declarations -Wno-extern-c-compat
LOCAL_EXPORT_CFLAGS   := -DUSE_FILE32API
LOCAL_EXPORT_CPPFLAGS := -Wno-deprecated-declarations -Wno-extern-c-compat

include $(BUILD_STATIC_LIBRARY)
