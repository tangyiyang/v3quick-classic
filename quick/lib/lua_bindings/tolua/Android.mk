LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE    := tolua_static

LOCAL_MODULE_FILENAME := libtolua

LOCAL_SRC_FILES := \
          $(LOCAL_PATH)/tolua_event.c \
          $(LOCAL_PATH)/tolua_is.c \
          $(LOCAL_PATH)/tolua_map.c \
          $(LOCAL_PATH)/tolua_push.c \
          $(LOCAL_PATH)/tolua_to.c


LOCAL_C_INCLUDES := $(LOCAL_PATH) \
                    $(QUICK_V3_LIB)/lua_bindings/luajit/include


LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)

include $(BUILD_STATIC_LIBRARY)