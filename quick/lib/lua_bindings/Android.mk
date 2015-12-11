LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE    := cocos_lua_static

LOCAL_MODULE_FILENAME := liblua

LOCAL_SRC_FILES := $(LOCAL_PATH)/manual/CCLuaBridge.cpp \
          $(LOCAL_PATH)/manual/CCLuaEngine.cpp \
          $(LOCAL_PATH)/manual/CCLuaStack.cpp \
          $(LOCAL_PATH)/manual/CCLuaValue.cpp \
          $(LOCAL_PATH)/manual/Cocos2dxLuaLoader.cpp \
          $(LOCAL_PATH)/manual/LuaScriptHandlerMgr.cpp \
          $(LOCAL_PATH)/manual/LuaBasicConversions.cpp \
          $(LOCAL_PATH)/manual/lua_cocos2dx_manual.cpp \
          $(LOCAL_PATH)/manual/lua_cocos2dx_extension_manual.cpp \
          $(LOCAL_PATH)/manual/lua_cocos2dx_spine_manual.cpp \
          $(LOCAL_PATH)/manual/LuaSkeletonAnimation.cpp \
          $(LOCAL_PATH)/manual/platform/android/CCLuaJavaBridge.cpp \
          $(LOCAL_PATH)/manual/platform/android/jni/Java_org_cocos2dx_lib_Cocos2dxLuaJavaBridge.cpp \
          $(LOCAL_PATH)/manual/tolua_fix.cpp \
          $(LOCAL_PATH)/manual/snapshot.c \
          $(COCOS2DX_ROOT)/external/xxtea/xxtea.cpp

# ifeq ($(CC_USE_PHYSICS),1)
LOCAL_SRC_FILES += $(LOCAL_PATH)/manual/lua_cocos2dx_physics_manual.cpp
# endif

ifeq ($(CC_USE_WEBSOCKET),1)
LOCAL_SRC_FILES += $(LOCAL_PATH)/manual/Lua_web_socket.cpp
endif

LOCAL_C_INCLUDES := $(QUICK_V3_LIB)/lua_bindings/tolua \
                    $(QUICK_V3_LIB)/lua_bindings/luajit/include \
                    $(QUICK_V3_LIB)/lua_bindings \
                    $(COCOS2DX_ROOT) \
                    $(COCOS2DX_ROOT)/extensions \
                    $(COCOS2DX_CORE)/editor-support/spine \
                    $(COCOS2DX_CORE)/ui \
                    $(LOCAL_PATH)/auto \
                    $(LOCAL_PATH)/manual \
                    $(LOCAL_PATH)/manual/platform/android \
                    $(LOCAL_PATH)/manual/platform/android/jni \
                    $(QUICK_V3_LIB)/lua_extensions \
                    $(QUICK_V3_LIB) \
                    $(QUICK_V3_LIB)/extra \
                    $(QUICK_V3_LIB)/extra/native \
                    $(QUICK_V3_LIB)/extra/crypto \
                    $(QUICK_V3_LIB)/extra/network \
                    $(QUICK_V3_LIB)/extra/filters \
                    $(QUICK_V3_LIB)/extra/anysdk \
                    $(QUICK_V3_LIB)/external \
                    $(COCOS2DX_ROOT)/external/xxtea


LOCAL_EXPORT_C_INCLUDES := $(QUICK_V3_LIB)/lua_bindings/tolua \
                           $(QUICK_V3_LIB)/lua_bindings/luajit/include \
                           $(QUICK_V3_LIB) \
                           $(LOCAL_PATH)/auto \
                           $(LOCAL_PATH)/manual


LOCAL_WHOLE_STATIC_LIBRARIES := lua_bindings_auto_static
LOCAL_WHOLE_STATIC_LIBRARIES += luajit_static
LOCAL_WHOLE_STATIC_LIBRARIES += tolua_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocos2dx_static
LOCAL_WHOLE_STATIC_LIBRARIES += lua_extensions_static
LOCAL_WHOLE_STATIC_LIBRARIES += spine_static

LOCAL_CFLAGS += -Wno-psabi -DCC_LUA_ENGINE_ENABLED=1
LOCAL_EXPORT_CFLAGS += -Wno-psabi

include $(BUILD_STATIC_LIBRARY)

$(call import-module,lua_bindings/auto)
$(call import-module,lua_bindings/luajit)
$(call import-module,lua_bindings/tolua)
$(call import-module,.)
$(call import-module,lua_extensions)
$(call import-module,editor-support/spine)

