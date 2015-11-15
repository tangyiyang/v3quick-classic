LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := game_shared

LOCAL_MODULE_FILENAME := libgame

LOCAL_SRC_FILES := hellocpp/main.cpp \
    ../../native/AppDelegate.cpp \
    $(QUICK_V3_LIB)/ProjectConfig/ProjectConfig.cpp \
    $(QUICK_V3_LIB)/ProjectConfig/SimulatorConfig.cpp \
    $(QUICK_V3_LIB)/lib/lua_bindings/manual/pomelobind/pomelobind/PomeloClient.cpp \
    $(QUICK_V3_LIB)/lib/lua_bindings/manual/pomelobind/PomeloClient_luabinding.cpp \

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../native \
                    $(QUICK_V3_LIB)/../../external/libpomelo/include \
                    $(QUICK_V3_LIB)/../../external/libpomelo/deps/uv/include \
                    $(QUICK_V3_LIB)/../../external/libpomelo/deps/jansson/src \

LOCAL_LDLIBS := -lGLESv2 \
                -llog \
                -lz \
                -landroid

LOCAL_EXPORT_LDLIBS := -lGLESv1_CM \
                       -lGLESv2 \
                       -lEGL \
                       -llog \
                       -lz \
                       -landroid

LOCAL_WHOLE_STATIC_LIBRARIES := libquickcocos2dx pomelo_static

include $(BUILD_SHARED_LIBRARY)

$(call import-module,libpomelo)
$(call import-module,proj.android)
