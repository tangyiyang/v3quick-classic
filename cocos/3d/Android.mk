LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := cocos2dx_3d_static

LOCAL_MODULE_FILENAME := libcocos2dx3d

LOCAL_SRC_FILES := \
        $(LOCAL_PATH)/CCAnimate3D.cpp \
        $(LOCAL_PATH)/CCAnimation3D.cpp \
        $(LOCAL_PATH)/CCBundle3D.cpp \
        $(LOCAL_PATH)/CCBundleReader.cpp \
        $(LOCAL_PATH)/CCMesh.cpp \
        $(LOCAL_PATH)/CCMeshSkin.cpp \
        $(LOCAL_PATH)/CCSprite3DMaterial.cpp \
        $(LOCAL_PATH)/CCObjLoader.cpp \
        $(LOCAL_PATH)/CCSprite3D.cpp

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
                    $(LOCAL_PATH)/../../external \
                    $(LOCAL_PATH)/../base \
                    $(QUICK_V3_LIB) \
                    $(LOCAL_PATH)/../../external/nslog


# define the macro to compile through support/zip_support/ioapi.c
LOCAL_CFLAGS   :=  -DUSE_FILE32API
LOCAL_CPPFLAGS := -Wno-deprecated-declarations -Wno-extern-c-compat
LOCAL_EXPORT_CFLAGS   := -DUSE_FILE32API
LOCAL_EXPORT_CPPFLAGS := -Wno-deprecated-declarations -Wno-extern-c-compat

include $(BUILD_STATIC_LIBRARY)