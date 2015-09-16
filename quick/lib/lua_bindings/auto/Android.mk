LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE    := lua_bindings_auto_static

LOCAL_MODULE_FILENAME := libluabindingsauto

LOCAL_SRC_FILES := \
          $(LOCAL_PATH)/lua_cocos2dx_auto.cpp \
          $(LOCAL_PATH)/lua_cocos2dx_extension_auto.cpp \
          $(LOCAL_PATH)/lua_cocos2dx_spine_auto.cpp \
          $(LOCAL_PATH)/lua_cocos2dx_ui_auto.cpp \

ifeq ($(CC_USE_CCS_ARMATURE),1)
LOCAL_SRC_FILES += \
          $(LOCAL_PATH)/lua_cocos2dx_studio_auto.cpp
endif

ifeq ($(CC_USE_EXTRA_FILTERS),1)
LOCAL_SRC_FILES += $(LOCAL_PATH)/lua_cocos2dx_extension_filter_auto.cpp
endif

# ifeq ($(CC_USE_PHYSICS),1)
LOCAL_SRC_FILES += $(LOCAL_PATH)/lua_cocos2dx_physics_auto.cpp
# endif

LOCAL_C_INCLUDES := $(LOCAL_PATH) \
                    $(QUICK_V3_LIB)/lua_bindings/manual \


LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)

LOCAL_WHOLE_STATIC_LIBRARIES := luajit_static
LOCAL_WHOLE_STATIC_LIBRARIES += tolua_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocos2dx_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocos_extension_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocostudio_armature_static
LOCAL_WHOLE_STATIC_LIBRARIES += extra_filters_static
LOCAL_WHOLE_STATIC_LIBRARIES += spine_static


include $(BUILD_STATIC_LIBRARY)

$(call import-module,lua_bindings/luajit)
$(call import-module,lua_bindings/tolua)
$(call import-module,.)
$(call import-module,extensions)
$(call import-module,editor-support/cocostudio)
$(call import-module,editor-support/spine)
$(call import-module,extra/filters)
