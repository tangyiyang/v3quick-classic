LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := cocos2dx_2d_static

LOCAL_MODULE_FILENAME := libcocos2dx2d

LOCAL_SRC_FILES := \
    $(LOCAL_PATH)/CCAction.cpp \
    $(LOCAL_PATH)/CCActionCamera.cpp \
    $(LOCAL_PATH)/CCActionCatmullRom.cpp \
    $(LOCAL_PATH)/CCActionEase.cpp \
    $(LOCAL_PATH)/CCActionGrid.cpp \
    $(LOCAL_PATH)/CCActionGrid3D.cpp \
    $(LOCAL_PATH)/CCActionInstant.cpp \
    $(LOCAL_PATH)/CCActionInterval.cpp \
    $(LOCAL_PATH)/CCActionManager.cpp \
    $(LOCAL_PATH)/CCActionPageTurn3D.cpp \
    $(LOCAL_PATH)/CCActionProgressTimer.cpp \
    $(LOCAL_PATH)/CCActionTiledGrid.cpp \
    $(LOCAL_PATH)/CCActionTween.cpp \
    $(LOCAL_PATH)/CCAnimation.cpp \
    $(LOCAL_PATH)/CCAnimationCache.cpp \
    $(LOCAL_PATH)/CCAtlasNode.cpp \
    $(LOCAL_PATH)/CCClippingNode.cpp \
    $(LOCAL_PATH)/CCClippingRectangleNode.cpp \
    $(LOCAL_PATH)/CCComponent.cpp \
    $(LOCAL_PATH)/CCComponentContainer.cpp \
    $(LOCAL_PATH)/CCDrawNode.cpp \
    $(LOCAL_PATH)/CCDrawingPrimitives.cpp \
    $(LOCAL_PATH)/CCGLBufferedNode.cpp \
    $(LOCAL_PATH)/CCGrabber.cpp \
    $(LOCAL_PATH)/CCGrid.cpp \
    $(LOCAL_PATH)/CCLayer.cpp \
    $(LOCAL_PATH)/CCMotionStreak.cpp \
    $(LOCAL_PATH)/CCNode.cpp \
    $(LOCAL_PATH)/CCNodeGrid.cpp \
    $(LOCAL_PATH)/CCParallaxNode.cpp \
    $(LOCAL_PATH)/CCParticleBatchNode.cpp \
    $(LOCAL_PATH)/CCParticleExamples.cpp \
    $(LOCAL_PATH)/CCParticleSystem.cpp \
    $(LOCAL_PATH)/CCParticleSystemQuad.cpp \
    $(LOCAL_PATH)/CCProgressTimer.cpp \
    $(LOCAL_PATH)/CCRenderTexture.cpp \
    $(LOCAL_PATH)/CCScene.cpp \
    $(LOCAL_PATH)/CCSprite.cpp \
    $(LOCAL_PATH)/CCSpriteBatchNode.cpp \
    $(LOCAL_PATH)/CCSpriteFrame.cpp \
    $(LOCAL_PATH)/CCSpriteFrameCache.cpp \
    $(LOCAL_PATH)/CCFileCache.cpp \
    $(LOCAL_PATH)/CCTMXLayer.cpp \
    $(LOCAL_PATH)/CCFastTMXLayer.cpp \
    $(LOCAL_PATH)/CCTMXObjectGroup.cpp \
    $(LOCAL_PATH)/CCTMXTiledMap.cpp \
    $(LOCAL_PATH)/CCFastTMXTiledMap.cpp \
    $(LOCAL_PATH)/CCTMXXMLParser.cpp \
    $(LOCAL_PATH)/CCTransition.cpp \
    $(LOCAL_PATH)/CCTransitionPageTurn.cpp \
    $(LOCAL_PATH)/CCTransitionProgress.cpp \
    $(LOCAL_PATH)/CCTweenFunction.cpp \
    $(LOCAL_PATH)/CCMenu.cpp \
    $(LOCAL_PATH)/CCMenuItem.cpp \
    $(LOCAL_PATH)/CCCamera.cpp \
    $(LOCAL_PATH)/CCProtectedNode.cpp \


# ifeq ($(CC_USE_TGA),1)
    LOCAL_SRC_FILES += $(LOCAL_PATH)/CCTileMapAtlas.cpp
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
                    $(LOCAL_PATH)/../../external \
                    $(LOCAL_PATH)/../base \
                    $(QUICK_V3_LIB) \
                    $(LOCAL_PATH)/../../external/nslog


LOCAL_WHOLE_STATIC_LIBRARIES := cocos2dx_label_static

# define the macro to compile through support/zip_support/ioapi.c
LOCAL_CFLAGS   :=  -DUSE_FILE32API
LOCAL_CPPFLAGS := -Wno-deprecated-declarations -Wno-extern-c-compat
LOCAL_EXPORT_CFLAGS   := -DUSE_FILE32API
LOCAL_EXPORT_CPPFLAGS := -Wno-deprecated-declarations -Wno-extern-c-compat

include $(BUILD_STATIC_LIBRARY)

$(call import-module,2d/label)
