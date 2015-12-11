LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := cocos2dx_static

LOCAL_MODULE_FILENAME := libcocos2d

LOCAL_SRC_FILES := \
$(LOCAL_PATH)/cocos2d.cpp \
$(LOCAL_PATH)/platform/CCFileUtils.cpp \
$(LOCAL_PATH)/platform/CCGLView.cpp \
$(LOCAL_PATH)/platform/CCImage.cpp \
$(LOCAL_PATH)/platform/CCSAXParser.cpp \
$(LOCAL_PATH)/platform/CCThread.cpp \
$(LOCAL_PATH)/math/CCAffineTransform.cpp \
$(LOCAL_PATH)/math/CCGeometry.cpp \
$(LOCAL_PATH)/math/CCVertex.cpp \
$(LOCAL_PATH)/math/Mat4.cpp \
$(LOCAL_PATH)/math/MathUtil.cpp \
$(LOCAL_PATH)/math/Quaternion.cpp \
$(LOCAL_PATH)/math/TransformUtils.cpp \
$(LOCAL_PATH)/math/Vec2.cpp \
$(LOCAL_PATH)/math/Vec3.cpp \
$(LOCAL_PATH)/math/Vec4.cpp \
$(LOCAL_PATH)/renderer/CCBatchCommand.cpp \
$(LOCAL_PATH)/renderer/CCCustomCommand.cpp \
$(LOCAL_PATH)/renderer/CCGLProgram.cpp \
$(LOCAL_PATH)/renderer/CCGLProgramCache.cpp \
$(LOCAL_PATH)/renderer/CCGLProgramState.cpp \
$(LOCAL_PATH)/renderer/CCGLProgramStateCache.cpp \
$(LOCAL_PATH)/renderer/CCGroupCommand.cpp \
$(LOCAL_PATH)/renderer/CCQuadCommand.cpp \
$(LOCAL_PATH)/renderer/CCMeshCommand.cpp \
$(LOCAL_PATH)/renderer/CCRenderCommand.cpp \
$(LOCAL_PATH)/renderer/CCRenderer.cpp \
$(LOCAL_PATH)/renderer/CCTexture2D.cpp \
$(LOCAL_PATH)/renderer/CCTextureAtlas.cpp \
$(LOCAL_PATH)/renderer/CCTextureCache.cpp \
$(LOCAL_PATH)/renderer/ccGLStateCache.cpp \
$(LOCAL_PATH)/renderer/CCTrianglesCommand.cpp \
$(LOCAL_PATH)/renderer/CCPrimitiveCommand.cpp \
$(LOCAL_PATH)/renderer/CCVertexIndexData.cpp \
$(LOCAL_PATH)/renderer/CCVerTexIndexBuffer.cpp \
$(LOCAL_PATH)/renderer/ccShaders.cpp \
$(LOCAL_PATH)/renderer/CCPrimitive.cpp \
$(LOCAL_PATH)/../external/ConvertUTF/ConvertUTFWrapper.cpp \
$(LOCAL_PATH)/../external/ConvertUTF/ConvertUTF.c \
$(LOCAL_PATH)/../external/tinyxml2/tinyxml2.cpp \
$(LOCAL_PATH)/../external/unzip/ioapi.cpp \
$(LOCAL_PATH)/../external/unzip/unzip.cpp \
$(LOCAL_PATH)/../external/unzip/ioapi_mem.cpp \
$(LOCAL_PATH)/../external/edtaa3func/edtaa3func.cpp \
$(LOCAL_PATH)/../external/xxhash/xxhash.c \
$(LOCAL_PATH)/deprecated/CCString.cpp

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH) \
                    $(LOCAL_PATH)/. \
                    $(LOCAL_PATH)/3d \
                    $(LOCAL_PATH)/math \
                    $(LOCAL_PATH)/platform/android \
                    $(LOCAL_PATH)/../external/tinyxml2 \
                    $(LOCAL_PATH)/../external \
                    $(LOCAL_PATH)/../external/unzip \
                    $(LOCAL_PATH)/../external/chipmunk/include/chipmunk \
                    $(LOCAL_PATH)/../external/xxhash \
                    $(QUICK_V3_LIB) \
                    $(LOCAL_PATH)/../external/nslog \
                    $(LOCAL_PATH)/deprecated

LOCAL_C_INCLUDES := $(LOCAL_PATH) \
                    $(LOCAL_PATH)/. \
                    $(LOCAL_PATH)/platform/android \
                    $(LOCAL_PATH)/../external/tinyxml2 \
                    $(LOCAL_PATH)/../external/unzip \
                    $(LOCAL_PATH)/../external/chipmunk/include/chipmunk \
                    $(LOCAL_PATH)/../external/edtaa3func \
                    $(LOCAL_PATH)/../external/xxhash \
                    $(LOCAL_PATH)/../external/ConvertUTF \
                    $(LOCAL_PATH)/../external \
                    $(LOCAL_PATH)/../external/freetype2/include/android \
                    $(LOCAL_PATH)/../external/freetype2/include/android/freetype2 \
                    $(LOCAL_PATH)/../external/tiff/include/android \
                    $(LOCAL_PATH)/../external/webp/include/android \
                    $(LOCAL_PATH)/../external/png/include/android \
                    $(LOCAL_PATH)/../external/jpeg/include/android \
                    $(LOCAL_PATH)/base \
                    $(QUICK_V3_LIB) \
                    $(QUICK_V3_LIB)/extra \
                    $(LOCAL_PATH)/../external/nslog \
                    $(LOCAL_PATH)/deprecated

LOCAL_WHOLE_STATIC_LIBRARIES := cocos2dx_2d_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocos2dx_3d_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocos2dx_base_static
LOCAL_WHOLE_STATIC_LIBRARIES += cpufeatures
LOCAL_WHOLE_STATIC_LIBRARIES += cocos_png_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocos_jpeg_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocos2dx-talkingdata
LOCAL_WHOLE_STATIC_LIBRARIES += cocos_tiff_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocos_webp_static


# ifeq ($(CC_USE_PHYSICS),1)
LOCAL_WHOLE_STATIC_LIBRARIES += cocos2dx_physics_static
# endif
LOCAL_WHOLE_STATIC_LIBRARIES += cocos2dxandroid_static

# define the macro to compile through support/zip_support/ioapi.c
LOCAL_CFLAGS   :=  -DUSE_FILE32API
LOCAL_CPPFLAGS := -Wno-deprecated-declarations -Wno-extern-c-compat
LOCAL_EXPORT_CFLAGS   := -DUSE_FILE32API
LOCAL_EXPORT_CPPFLAGS := -Wno-deprecated-declarations -Wno-extern-c-compat

include $(BUILD_STATIC_LIBRARY)

$(call import-module,android/cpufeatures)
$(call import-module,2d)
$(call import-module,3d)
$(call import-module,base)

$(call import-module,platform/android)
$(call import-module,freetype2/prebuilt/android)
$(call import-module,png/prebuilt/android)
$(call import-module,jpeg/prebuilt/android)
$(call import-module,tiff/prebuilt/android)
$(call import-module,webp/prebuilt/android)

# ifeq ($(CC_USE_PHYSICS),1)
$(call import-module,physics)
# endif


