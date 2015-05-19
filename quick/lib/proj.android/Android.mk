
LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

ifeq ($(ANYSDK_DEFINE),1)
$(call import-add-path, $(QUICK_V3_LIB)/extra/anysdk/)
endif

LOCAL_MODULE := quickcocos2dx
LOCAL_MODULE_FILENAME := libquickcocos2dx

LOCAL_CFLAGS := -Wno-psabi -DUSE_FILE32API -DCC_LUA_ENGINE_ENABLED=1 $(ANDROID_COCOS2D_BUILD_FLAGS)
LOCAL_EXPORT_CFLAGS := -Wno-psabi -DUSE_FILE32API -DCC_LUA_ENGINE_ENABLED=1

LOCAL_WHOLE_STATIC_LIBRARIES := cocos_lua_static
LOCAL_WHOLE_STATIC_LIBRARIES += extra_static
LOCAL_WHOLE_STATIC_LIBRARIES += event_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocos_network_static
ifeq ($(ANYSDK_DEFINE),1)
LOCAL_WHOLE_STATIC_LIBRARIES += PluginProtocolStatic
endif

include $(BUILD_STATIC_LIBRARY)

$(call import-module,lua_bindings)
$(call import-module,extra)
$(call import-module,event)
$(call import-module,extensions)
$(call import-module,network)
ifeq ($(ANYSDK_DEFINE),1)
$(call import-module,protocols/android)
endif