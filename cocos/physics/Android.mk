LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := cocos2dx_physics_static

LOCAL_MODULE_FILENAME := libcocos2dxphysics

LOCAL_SRC_FILES := \
        $(LOCAL_PATH)/CCPhysicsBody.cpp \
        $(LOCAL_PATH)/CCPhysicsContact.cpp \
        $(LOCAL_PATH)/CCPhysicsJoint.cpp \
        $(LOCAL_PATH)/CCPhysicsShape.cpp \
        $(LOCAL_PATH)/CCPhysicsWorld.cpp \
        $(LOCAL_PATH)/chipmunk/CCPhysicsBodyInfo_chipmunk.cpp \
        $(LOCAL_PATH)/chipmunk/CCPhysicsContactInfo_chipmunk.cpp \
        $(LOCAL_PATH)/chipmunk/CCPhysicsJointInfo_chipmunk.cpp \
        $(LOCAL_PATH)/chipmunk/CCPhysicsShapeInfo_chipmunk.cpp \
        $(LOCAL_PATH)/chipmunk/CCPhysicsWorldInfo_chipmunk.cpp \
        

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

LOCAL_WHOLE_STATIC_LIBRARIES += chipmunk_static

# define the macro to compile through support/zip_support/ioapi.c
LOCAL_CFLAGS   :=  -DUSE_FILE32API
LOCAL_CPPFLAGS := -Wno-deprecated-declarations -Wno-extern-c-compat
LOCAL_EXPORT_CFLAGS   := -DUSE_FILE32API
LOCAL_EXPORT_CPPFLAGS := -Wno-deprecated-declarations -Wno-extern-c-compat

include $(BUILD_STATIC_LIBRARY)

$(call import-module,chipmunk)