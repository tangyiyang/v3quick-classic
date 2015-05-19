LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := cocostudio_armature_static

LOCAL_MODULE_FILENAME := libcocostudioarmature

ifeq ($(CC_USE_CCS_ARMATURE),1)

LOCAL_SRC_FILES := \
$(LOCAL_PATH)/CCArmature.cpp \
$(LOCAL_PATH)/CCArmatureAnimation.cpp \
$(LOCAL_PATH)/CCArmatureDataManager.cpp \
$(LOCAL_PATH)/CCArmatureDefine.cpp \
$(LOCAL_PATH)/CCBone.cpp \
$(LOCAL_PATH)/CCColliderDetector.cpp \
$(LOCAL_PATH)/CCDataReaderHelper.cpp \
$(LOCAL_PATH)/CCDatas.cpp \
$(LOCAL_PATH)/CCDecorativeDisplay.cpp \
$(LOCAL_PATH)/CCDisplayFactory.cpp \
$(LOCAL_PATH)/CCDisplayManager.cpp \
$(LOCAL_PATH)/CCProcessBase.cpp \
$(LOCAL_PATH)/CCSkin.cpp \
$(LOCAL_PATH)/CCSpriteFrameCacheHelper.cpp \
$(LOCAL_PATH)/CCTransformHelp.cpp \
$(LOCAL_PATH)/CCTween.cpp \
$(LOCAL_PATH)/CCUtilMath.cpp \
$(LOCAL_PATH)/CocoLoader.cpp \
$(LOCAL_PATH)/DictionaryHelper.cpp \

else

LOCAL_SRC_FILES :=

endif

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/.. \
$(LOCAL_PATH)/../../../external

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../.. \
$(LOCAL_PATH)/../../../external \
$(LOCAL_PATH)/.. \
$(LOCAL_PATH)/../..

LOCAL_CFLAGS += -fexceptions


LOCAL_WHOLE_STATIC_LIBRARIES := cocos2dx_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocosdenshion_static
#LOCAL_WHOLE_STATIC_LIBRARIES += cocos_ui_static

include $(BUILD_STATIC_LIBRARY)

$(call import-module,.)
$(call import-module,audio/android)
#$(call import-module,ui)

