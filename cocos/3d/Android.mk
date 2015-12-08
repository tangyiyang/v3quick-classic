LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := cocos2dx_3d_static

LOCAL_MODULE_FILENAME := libcocos3d

LOCAL_SRC_FILES := \
CCRay.cpp \
CCAABB.cpp \
CCOBB.cpp \
CCAnimate3D.cpp \
CCAnimation3D.cpp \
CCAttachNode.cpp \
CCBillBoard.cpp \
CCBundle3D.cpp \
CCBundleReader.cpp \
CCMesh.cpp \
CCMeshSkin.cpp \
CCMeshVertexIndexData.cpp \
CCSprite3DMaterial.cpp \
CCObjLoader.cpp \
CCSkeleton3D.cpp \
CCSprite3D.cpp

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/..

LOCAL_C_INCLUDES := $(LOCAL_PATH)/.. \
					$(COCOS2DX_ROOT)/external \
					$(QUICK_V3_LIB) \

LOCAL_STATIC_LIBRARIES := cocos2dx_internal_static

include $(BUILD_STATIC_LIBRARY)
