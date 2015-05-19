LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE    := cocos_extension_static

LOCAL_MODULE_FILENAME := libextension

LOCAL_SRC_FILES := \
$(LOCAL_PATH)/GUI/CCControlExtension/CCControl.cpp \
$(LOCAL_PATH)/GUI/CCControlExtension/CCControlButton.cpp \
$(LOCAL_PATH)/GUI/CCControlExtension/CCControlUtils.cpp \
$(LOCAL_PATH)/GUI/CCControlExtension/CCInvocation.cpp \
$(LOCAL_PATH)/GUI/CCControlExtension/CCScale9Sprite.cpp \
$(LOCAL_PATH)/GUI/CCEditBox/CCEditBox.cpp \
$(LOCAL_PATH)/GUI/CCEditBox/CCEditBoxImplAndroid.cpp \
$(LOCAL_PATH)/GUI/CCTextField/UITextField.cpp \
$(LOCAL_PATH)/GUI/CCScrollView/CCScrollView.cpp \
$(LOCAL_PATH)/GUI/CCScrollView/CCTableView.cpp \
$(LOCAL_PATH)/GUI/CCScrollView/CCTableViewCell.cpp \

#$(LOCAL_PATH)/GUI/CCEditBox/CCEditBoxImplNone.cpp \
#$(LOCAL_PATH)/GUI/CCEditBox/CCEditBoxImplWin.cpp \


LOCAL_WHOLE_STATIC_LIBRARIES := cocos2dx_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocosdenshion_static

LOCAL_CXXFLAGS += -fexceptions

LOCAL_C_INCLUDES := $(LOCAL_PATH)/.. \
				    $(QUICK_V3_LIB)

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH) \
						   $(LOCAL_PATH)/.. \
                           $(LOCAL_PATH)/GUI/CCControlExtension \
                           $(LOCAL_PATH)/GUI/CCScrollView \
						   $(QUICK_V3_LIB)
                    
include $(BUILD_STATIC_LIBRARY)

$(call import-module,.)
$(call import-module,audio/android)