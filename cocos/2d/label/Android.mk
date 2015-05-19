LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := cocos2dx_label_static

LOCAL_MODULE_FILENAME := libcocoslabel

    LOCAL_SRC_FILES := \
        $(LOCAL_PATH)/../CCFont.cpp \
        $(LOCAL_PATH)/../CCFontAtlas.cpp \
        $(LOCAL_PATH)/../CCFontAtlasCache.cpp \
        $(LOCAL_PATH)/../CCFontCharMap.cpp \
        $(LOCAL_PATH)/../CCFontFNT.cpp \
        $(LOCAL_PATH)/../CCFontFreeType.cpp \
        $(LOCAL_PATH)/../CCLabel.cpp \
        $(LOCAL_PATH)/../CCLabelAtlas.cpp \
        $(LOCAL_PATH)/../CCLabelTextFormatter.cpp \
        $(LOCAL_PATH)/../CCLabelBMFont.cpp \
        $(LOCAL_PATH)/../CCLabelTTF.cpp \
        $(LOCAL_PATH)/../CCTextFieldTTF.cpp \


LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/..

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../.. \
                    $(LOCAL_PATH)/../../platform/android \
                    $(QUICK_V3_LIB) \
                    $(LOCAL_PATH)/../../../external/edtaa3func

LOCAL_WHOLE_STATIC_LIBRARIES := cocos_freetype2_static

# define the macro to compile through support/zip_support/ioapi.c
LOCAL_CFLAGS   :=  -DUSE_FILE32API
LOCAL_CPPFLAGS := -Wno-deprecated-declarations -Wno-extern-c-compat
LOCAL_EXPORT_CFLAGS   := -DUSE_FILE32API
LOCAL_EXPORT_CPPFLAGS := -Wno-deprecated-declarations -Wno-extern-c-compat

include $(BUILD_STATIC_LIBRARY)

$(call import-module,freetype2/prebuilt/android)