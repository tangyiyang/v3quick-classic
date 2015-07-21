#include "lua_cocos2dx_ui_auto.hpp"
#include "CocosGUI.h"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"



int lua_cocos2dx_ui_LayoutParameter_clone(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.LayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::LayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_LayoutParameter_clone'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_LayoutParameter_clone'", nullptr);
            return 0;
        }
        cocos2d::ui::LayoutParameter* ret = cobj->clone();
        object_to_luaval<cocos2d::ui::LayoutParameter>(tolua_S, "ccui.LayoutParameter",(cocos2d::ui::LayoutParameter*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.LayoutParameter:clone",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LayoutParameter_clone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_LayoutParameter_getLayoutType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.LayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::LayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_LayoutParameter_getLayoutType'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_LayoutParameter_getLayoutType'", nullptr);
            return 0;
        }
        int ret = (int)cobj->getLayoutType();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.LayoutParameter:getLayoutType",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LayoutParameter_getLayoutType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_LayoutParameter_createCloneInstance(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.LayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::LayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_LayoutParameter_createCloneInstance'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_LayoutParameter_createCloneInstance'", nullptr);
            return 0;
        }
        cocos2d::ui::LayoutParameter* ret = cobj->createCloneInstance();
        object_to_luaval<cocos2d::ui::LayoutParameter>(tolua_S, "ccui.LayoutParameter",(cocos2d::ui::LayoutParameter*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.LayoutParameter:createCloneInstance",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LayoutParameter_createCloneInstance'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_LayoutParameter_copyProperties(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.LayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::LayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_LayoutParameter_copyProperties'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::LayoutParameter* arg0;

        ok &= luaval_to_object<cocos2d::ui::LayoutParameter>(tolua_S, 2, "ccui.LayoutParameter",&arg0);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_LayoutParameter_copyProperties'", nullptr);
            return 0;
        }
        cobj->copyProperties(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.LayoutParameter:copyProperties",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LayoutParameter_copyProperties'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_LayoutParameter_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.LayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_LayoutParameter_create'", nullptr);
            return 0;
        }
        cocos2d::ui::LayoutParameter* ret = cocos2d::ui::LayoutParameter::create();
        object_to_luaval<cocos2d::ui::LayoutParameter>(tolua_S, "ccui.LayoutParameter",(cocos2d::ui::LayoutParameter*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ccui.LayoutParameter:create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LayoutParameter_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_LayoutParameter_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_LayoutParameter_constructor'", nullptr);
            return 0;
        }
        cobj = new cocos2d::ui::LayoutParameter();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.LayoutParameter");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.LayoutParameter:LayoutParameter",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LayoutParameter_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_LayoutParameter_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (LayoutParameter)");
    return 0;
}

int lua_register_cocos2dx_ui_LayoutParameter(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.LayoutParameter");
    tolua_cclass(tolua_S,"LayoutParameter","ccui.LayoutParameter","cc.Ref",nullptr);

    tolua_beginmodule(tolua_S,"LayoutParameter");
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_LayoutParameter_constructor);
        tolua_function(tolua_S,"clone",lua_cocos2dx_ui_LayoutParameter_clone);
        tolua_function(tolua_S,"getLayoutType",lua_cocos2dx_ui_LayoutParameter_getLayoutType);
        tolua_function(tolua_S,"createCloneInstance",lua_cocos2dx_ui_LayoutParameter_createCloneInstance);
        tolua_function(tolua_S,"copyProperties",lua_cocos2dx_ui_LayoutParameter_copyProperties);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_LayoutParameter_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::LayoutParameter).name();
    g_luaType[typeName] = "ccui.LayoutParameter";
    g_typeCast["LayoutParameter"] = "ccui.LayoutParameter";
    return 1;
}

int lua_cocos2dx_ui_LinearLayoutParameter_setGravity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LinearLayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.LinearLayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::LinearLayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_LinearLayoutParameter_setGravity'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::LinearLayoutParameter::LinearGravity arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ccui.LinearLayoutParameter:setGravity");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_LinearLayoutParameter_setGravity'", nullptr);
            return 0;
        }
        cobj->setGravity(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.LinearLayoutParameter:setGravity",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LinearLayoutParameter_setGravity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_LinearLayoutParameter_getGravity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LinearLayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.LinearLayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::LinearLayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_LinearLayoutParameter_getGravity'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_LinearLayoutParameter_getGravity'", nullptr);
            return 0;
        }
        int ret = (int)cobj->getGravity();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.LinearLayoutParameter:getGravity",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LinearLayoutParameter_getGravity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_LinearLayoutParameter_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.LinearLayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_LinearLayoutParameter_create'", nullptr);
            return 0;
        }
        cocos2d::ui::LinearLayoutParameter* ret = cocos2d::ui::LinearLayoutParameter::create();
        object_to_luaval<cocos2d::ui::LinearLayoutParameter>(tolua_S, "ccui.LinearLayoutParameter",(cocos2d::ui::LinearLayoutParameter*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ccui.LinearLayoutParameter:create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LinearLayoutParameter_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_LinearLayoutParameter_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LinearLayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_LinearLayoutParameter_constructor'", nullptr);
            return 0;
        }
        cobj = new cocos2d::ui::LinearLayoutParameter();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.LinearLayoutParameter");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.LinearLayoutParameter:LinearLayoutParameter",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LinearLayoutParameter_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_LinearLayoutParameter_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (LinearLayoutParameter)");
    return 0;
}

int lua_register_cocos2dx_ui_LinearLayoutParameter(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.LinearLayoutParameter");
    tolua_cclass(tolua_S,"LinearLayoutParameter","ccui.LinearLayoutParameter","ccui.LayoutParameter",nullptr);

    tolua_beginmodule(tolua_S,"LinearLayoutParameter");
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_LinearLayoutParameter_constructor);
        tolua_function(tolua_S,"setGravity",lua_cocos2dx_ui_LinearLayoutParameter_setGravity);
        tolua_function(tolua_S,"getGravity",lua_cocos2dx_ui_LinearLayoutParameter_getGravity);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_LinearLayoutParameter_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::LinearLayoutParameter).name();
    g_luaType[typeName] = "ccui.LinearLayoutParameter";
    g_typeCast["LinearLayoutParameter"] = "ccui.LinearLayoutParameter";
    return 1;
}

int lua_cocos2dx_ui_RelativeLayoutParameter_setAlign(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RelativeLayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RelativeLayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::RelativeLayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RelativeLayoutParameter_setAlign'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::RelativeLayoutParameter::RelativeAlign arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ccui.RelativeLayoutParameter:setAlign");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RelativeLayoutParameter_setAlign'", nullptr);
            return 0;
        }
        cobj->setAlign(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.RelativeLayoutParameter:setAlign",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RelativeLayoutParameter_setAlign'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RelativeLayoutParameter_setRelativeToWidgetName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RelativeLayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RelativeLayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::RelativeLayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RelativeLayoutParameter_setRelativeToWidgetName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "ccui.RelativeLayoutParameter:setRelativeToWidgetName");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RelativeLayoutParameter_setRelativeToWidgetName'", nullptr);
            return 0;
        }
        cobj->setRelativeToWidgetName(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.RelativeLayoutParameter:setRelativeToWidgetName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RelativeLayoutParameter_setRelativeToWidgetName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RelativeLayoutParameter_getRelativeName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RelativeLayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RelativeLayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::RelativeLayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RelativeLayoutParameter_getRelativeName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RelativeLayoutParameter_getRelativeName'", nullptr);
            return 0;
        }
        const std::string& ret = cobj->getRelativeName();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.RelativeLayoutParameter:getRelativeName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RelativeLayoutParameter_getRelativeName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RelativeLayoutParameter_getRelativeToWidgetName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RelativeLayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RelativeLayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::RelativeLayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RelativeLayoutParameter_getRelativeToWidgetName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RelativeLayoutParameter_getRelativeToWidgetName'", nullptr);
            return 0;
        }
        const std::string& ret = cobj->getRelativeToWidgetName();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.RelativeLayoutParameter:getRelativeToWidgetName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RelativeLayoutParameter_getRelativeToWidgetName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RelativeLayoutParameter_setRelativeName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RelativeLayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RelativeLayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::RelativeLayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RelativeLayoutParameter_setRelativeName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "ccui.RelativeLayoutParameter:setRelativeName");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RelativeLayoutParameter_setRelativeName'", nullptr);
            return 0;
        }
        cobj->setRelativeName(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.RelativeLayoutParameter:setRelativeName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RelativeLayoutParameter_setRelativeName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RelativeLayoutParameter_getAlign(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RelativeLayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RelativeLayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::RelativeLayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RelativeLayoutParameter_getAlign'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RelativeLayoutParameter_getAlign'", nullptr);
            return 0;
        }
        int ret = (int)cobj->getAlign();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.RelativeLayoutParameter:getAlign",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RelativeLayoutParameter_getAlign'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RelativeLayoutParameter_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.RelativeLayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RelativeLayoutParameter_create'", nullptr);
            return 0;
        }
        cocos2d::ui::RelativeLayoutParameter* ret = cocos2d::ui::RelativeLayoutParameter::create();
        object_to_luaval<cocos2d::ui::RelativeLayoutParameter>(tolua_S, "ccui.RelativeLayoutParameter",(cocos2d::ui::RelativeLayoutParameter*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ccui.RelativeLayoutParameter:create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RelativeLayoutParameter_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_RelativeLayoutParameter_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RelativeLayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RelativeLayoutParameter_constructor'", nullptr);
            return 0;
        }
        cobj = new cocos2d::ui::RelativeLayoutParameter();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.RelativeLayoutParameter");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.RelativeLayoutParameter:RelativeLayoutParameter",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RelativeLayoutParameter_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_RelativeLayoutParameter_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (RelativeLayoutParameter)");
    return 0;
}

int lua_register_cocos2dx_ui_RelativeLayoutParameter(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.RelativeLayoutParameter");
    tolua_cclass(tolua_S,"RelativeLayoutParameter","ccui.RelativeLayoutParameter","ccui.LayoutParameter",nullptr);

    tolua_beginmodule(tolua_S,"RelativeLayoutParameter");
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_RelativeLayoutParameter_constructor);
        tolua_function(tolua_S,"setAlign",lua_cocos2dx_ui_RelativeLayoutParameter_setAlign);
        tolua_function(tolua_S,"setRelativeToWidgetName",lua_cocos2dx_ui_RelativeLayoutParameter_setRelativeToWidgetName);
        tolua_function(tolua_S,"getRelativeName",lua_cocos2dx_ui_RelativeLayoutParameter_getRelativeName);
        tolua_function(tolua_S,"getRelativeToWidgetName",lua_cocos2dx_ui_RelativeLayoutParameter_getRelativeToWidgetName);
        tolua_function(tolua_S,"setRelativeName",lua_cocos2dx_ui_RelativeLayoutParameter_setRelativeName);
        tolua_function(tolua_S,"getAlign",lua_cocos2dx_ui_RelativeLayoutParameter_getAlign);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_RelativeLayoutParameter_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::RelativeLayoutParameter).name();
    g_luaType[typeName] = "ccui.RelativeLayoutParameter";
    g_typeCast["RelativeLayoutParameter"] = "ccui.RelativeLayoutParameter";
    return 1;
}

int lua_cocos2dx_ui_Widget_setSizePercent(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setSizePercent'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "ccui.Widget:setSizePercent");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_setSizePercent'", nullptr);
            return 0;
        }
        cobj->setSizePercent(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:setSizePercent",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setSizePercent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getCustomSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getCustomSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_getCustomSize'", nullptr);
            return 0;
        }
        const cocos2d::Size& ret = cobj->getCustomSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:getCustomSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getCustomSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getLeftBoundary(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getLeftBoundary'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_getLeftBoundary'", nullptr);
            return 0;
        }
        double ret = cobj->getLeftBoundary();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:getLeftBoundary",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getLeftBoundary'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setFlippedX(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setFlippedX'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ccui.Widget:setFlippedX");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_setFlippedX'", nullptr);
            return 0;
        }
        cobj->setFlippedX(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:setFlippedX",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setFlippedX'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setCallbackName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setCallbackName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "ccui.Widget:setCallbackName");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_setCallbackName'", nullptr);
            return 0;
        }
        cobj->setCallbackName(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:setCallbackName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setCallbackName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getVirtualRenderer(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getVirtualRenderer'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_getVirtualRenderer'", nullptr);
            return 0;
        }
        cocos2d::Node* ret = cobj->getVirtualRenderer();
        object_to_luaval<cocos2d::Node>(tolua_S, "cc.Node",(cocos2d::Node*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:getVirtualRenderer",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getVirtualRenderer'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setPropagateTouchEvents(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setPropagateTouchEvents'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ccui.Widget:setPropagateTouchEvents");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_setPropagateTouchEvents'", nullptr);
            return 0;
        }
        cobj->setPropagateTouchEvents(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:setPropagateTouchEvents",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setPropagateTouchEvents'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_isUnifySizeEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_isUnifySizeEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_isUnifySizeEnabled'", nullptr);
            return 0;
        }
        bool ret = cobj->isUnifySizeEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:isUnifySizeEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_isUnifySizeEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getSizePercent(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getSizePercent'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_getSizePercent'", nullptr);
            return 0;
        }
        const cocos2d::Vec2& ret = cobj->getSizePercent();
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:getSizePercent",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getSizePercent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setPositionPercent(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setPositionPercent'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "ccui.Widget:setPositionPercent");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_setPositionPercent'", nullptr);
            return 0;
        }
        cobj->setPositionPercent(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:setPositionPercent",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setPositionPercent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setSwallowTouches(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setSwallowTouches'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ccui.Widget:setSwallowTouches");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_setSwallowTouches'", nullptr);
            return 0;
        }
        cobj->setSwallowTouches(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:setSwallowTouches",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setSwallowTouches'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getLayoutSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getLayoutSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_getLayoutSize'", nullptr);
            return 0;
        }
        const cocos2d::Size& ret = cobj->getLayoutSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:getLayoutSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getLayoutSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setHighlighted(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setHighlighted'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ccui.Widget:setHighlighted");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_setHighlighted'", nullptr);
            return 0;
        }
        cobj->setHighlighted(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:setHighlighted",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setHighlighted'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setPositionType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setPositionType'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::Widget::PositionType arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ccui.Widget:setPositionType");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_setPositionType'", nullptr);
            return 0;
        }
        cobj->setPositionType(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:setPositionType",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setPositionType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_isIgnoreContentAdaptWithSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_isIgnoreContentAdaptWithSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_isIgnoreContentAdaptWithSize'", nullptr);
            return 0;
        }
        bool ret = cobj->isIgnoreContentAdaptWithSize();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:isIgnoreContentAdaptWithSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_isIgnoreContentAdaptWithSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getVirtualRendererSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getVirtualRendererSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_getVirtualRendererSize'", nullptr);
            return 0;
        }
        cocos2d::Size ret = cobj->getVirtualRendererSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:getVirtualRendererSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getVirtualRendererSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_isHighlighted(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_isHighlighted'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_isHighlighted'", nullptr);
            return 0;
        }
        bool ret = cobj->isHighlighted();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:isHighlighted",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_isHighlighted'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getLayoutParameter(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getLayoutParameter'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_getLayoutParameter'", nullptr);
            return 0;
        }
        cocos2d::ui::LayoutParameter* ret = cobj->getLayoutParameter();
        object_to_luaval<cocos2d::ui::LayoutParameter>(tolua_S, "ccui.LayoutParameter",(cocos2d::ui::LayoutParameter*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:getLayoutParameter",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getLayoutParameter'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_addCCSEventListener(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_addCCSEventListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::function<void (cocos2d::Ref *, int)> arg0;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_addCCSEventListener'", nullptr);
            return 0;
        }
        cobj->addCCSEventListener(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:addCCSEventListener",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_addCCSEventListener'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getPositionType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getPositionType'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_getPositionType'", nullptr);
            return 0;
        }
        int ret = (int)cobj->getPositionType();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:getPositionType",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getPositionType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getTopBoundary(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getTopBoundary'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_getTopBoundary'", nullptr);
            return 0;
        }
        double ret = cobj->getTopBoundary();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:getTopBoundary",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getTopBoundary'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_ignoreContentAdaptWithSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_ignoreContentAdaptWithSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ccui.Widget:ignoreContentAdaptWithSize");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_ignoreContentAdaptWithSize'", nullptr);
            return 0;
        }
        cobj->ignoreContentAdaptWithSize(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:ignoreContentAdaptWithSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_ignoreContentAdaptWithSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_findNextFocusedWidget(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_findNextFocusedWidget'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::ui::Widget::FocusDirection arg0;
        cocos2d::ui::Widget* arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ccui.Widget:findNextFocusedWidget");

        ok &= luaval_to_object<cocos2d::ui::Widget>(tolua_S, 3, "ccui.Widget",&arg1);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_findNextFocusedWidget'", nullptr);
            return 0;
        }
        cocos2d::ui::Widget* ret = cobj->findNextFocusedWidget(arg0, arg1);
        object_to_luaval<cocos2d::ui::Widget>(tolua_S, "ccui.Widget",(cocos2d::ui::Widget*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:findNextFocusedWidget",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_findNextFocusedWidget'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_isEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_isEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_isEnabled'", nullptr);
            return 0;
        }
        bool ret = cobj->isEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:isEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_isEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_isFocused(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_isFocused'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_isFocused'", nullptr);
            return 0;
        }
        bool ret = cobj->isFocused();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:isFocused",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_isFocused'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getTouchBeganPosition(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getTouchBeganPosition'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_getTouchBeganPosition'", nullptr);
            return 0;
        }
        const cocos2d::Vec2& ret = cobj->getTouchBeganPosition();
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:getTouchBeganPosition",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getTouchBeganPosition'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_isTouchEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_isTouchEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_isTouchEnabled'", nullptr);
            return 0;
        }
        bool ret = cobj->isTouchEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:isTouchEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_isTouchEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getCallbackName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getCallbackName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_getCallbackName'", nullptr);
            return 0;
        }
        const std::string& ret = cobj->getCallbackName();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:getCallbackName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getCallbackName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getActionTag(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getActionTag'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_getActionTag'", nullptr);
            return 0;
        }
        int ret = cobj->getActionTag();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:getActionTag",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getActionTag'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getWorldPosition(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getWorldPosition'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_getWorldPosition'", nullptr);
            return 0;
        }
        cocos2d::Vec2 ret = cobj->getWorldPosition();
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:getWorldPosition",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getWorldPosition'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_isFocusEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_isFocusEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_isFocusEnabled'", nullptr);
            return 0;
        }
        bool ret = cobj->isFocusEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:isFocusEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_isFocusEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setFocused(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setFocused'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ccui.Widget:setFocused");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_setFocused'", nullptr);
            return 0;
        }
        cobj->setFocused(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:setFocused",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setFocused'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setActionTag(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setActionTag'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ccui.Widget:setActionTag");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_setActionTag'", nullptr);
            return 0;
        }
        cobj->setActionTag(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:setActionTag",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setActionTag'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setTouchEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setTouchEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ccui.Widget:setTouchEnabled");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_setTouchEnabled'", nullptr);
            return 0;
        }
        cobj->setTouchEnabled(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:setTouchEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setTouchEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setFlippedY(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setFlippedY'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ccui.Widget:setFlippedY");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_setFlippedY'", nullptr);
            return 0;
        }
        cobj->setFlippedY(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:setFlippedY",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setFlippedY'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ccui.Widget:setEnabled");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_setEnabled'", nullptr);
            return 0;
        }
        cobj->setEnabled(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:setEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getRightBoundary(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getRightBoundary'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_getRightBoundary'", nullptr);
            return 0;
        }
        double ret = cobj->getRightBoundary();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:getRightBoundary",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getRightBoundary'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setBrightStyle(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setBrightStyle'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::Widget::BrightStyle arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ccui.Widget:setBrightStyle");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_setBrightStyle'", nullptr);
            return 0;
        }
        cobj->setBrightStyle(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:setBrightStyle",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setBrightStyle'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setLayoutParameter(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setLayoutParameter'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::LayoutParameter* arg0;

        ok &= luaval_to_object<cocos2d::ui::LayoutParameter>(tolua_S, 2, "ccui.LayoutParameter",&arg0);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_setLayoutParameter'", nullptr);
            return 0;
        }
        cobj->setLayoutParameter(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:setLayoutParameter",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setLayoutParameter'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_clone(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_clone'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_clone'", nullptr);
            return 0;
        }
        cocos2d::ui::Widget* ret = cobj->clone();
        object_to_luaval<cocos2d::ui::Widget>(tolua_S, "ccui.Widget",(cocos2d::ui::Widget*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:clone",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_clone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setFocusEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setFocusEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ccui.Widget:setFocusEnabled");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_setFocusEnabled'", nullptr);
            return 0;
        }
        cobj->setFocusEnabled(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:setFocusEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setFocusEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getBottomBoundary(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getBottomBoundary'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_getBottomBoundary'", nullptr);
            return 0;
        }
        double ret = cobj->getBottomBoundary();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:getBottomBoundary",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getBottomBoundary'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_isBright(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_isBright'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_isBright'", nullptr);
            return 0;
        }
        bool ret = cobj->isBright();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:isBright",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_isBright'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setUnifySizeEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setUnifySizeEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ccui.Widget:setUnifySizeEnabled");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_setUnifySizeEnabled'", nullptr);
            return 0;
        }
        cobj->setUnifySizeEnabled(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:setUnifySizeEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setUnifySizeEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_isPropagateTouchEvents(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_isPropagateTouchEvents'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_isPropagateTouchEvents'", nullptr);
            return 0;
        }
        bool ret = cobj->isPropagateTouchEvents();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:isPropagateTouchEvents",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_isPropagateTouchEvents'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getCurrentFocusedWidget(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getCurrentFocusedWidget'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_getCurrentFocusedWidget'", nullptr);
            return 0;
        }
        cocos2d::ui::Widget* ret = cobj->getCurrentFocusedWidget();
        object_to_luaval<cocos2d::ui::Widget>(tolua_S, "ccui.Widget",(cocos2d::ui::Widget*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:getCurrentFocusedWidget",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getCurrentFocusedWidget'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_hitTest(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_hitTest'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "ccui.Widget:hitTest");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_hitTest'", nullptr);
            return 0;
        }
        bool ret = cobj->hitTest(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:hitTest",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_hitTest'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_requestFocus(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_requestFocus'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_requestFocus'", nullptr);
            return 0;
        }
        cobj->requestFocus();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:requestFocus",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_requestFocus'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_updateSizeAndPosition(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_updateSizeAndPosition'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            cocos2d::Size arg0;
            ok &= luaval_to_size(tolua_S, 2, &arg0, "ccui.Widget:updateSizeAndPosition");

            if (!ok) { break; }
            cobj->updateSizeAndPosition(arg0);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 0) {
            cobj->updateSizeAndPosition();
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "ccui.Widget:updateSizeAndPosition",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_updateSizeAndPosition'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getTouchMovePosition(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getTouchMovePosition'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_getTouchMovePosition'", nullptr);
            return 0;
        }
        const cocos2d::Vec2& ret = cobj->getTouchMovePosition();
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:getTouchMovePosition",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getTouchMovePosition'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getSizeType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getSizeType'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_getSizeType'", nullptr);
            return 0;
        }
        int ret = (int)cobj->getSizeType();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:getSizeType",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getSizeType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getCallbackType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getCallbackType'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_getCallbackType'", nullptr);
            return 0;
        }
        const std::string& ret = cobj->getCallbackType();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:getCallbackType",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getCallbackType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_addTouchEventListener(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_addTouchEventListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::function<void (cocos2d::Ref *, cocos2d::ui::Widget::TouchEventType)> arg0;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_addTouchEventListener'", nullptr);
            return 0;
        }
        cobj->addTouchEventListener(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:addTouchEventListener",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_addTouchEventListener'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getTouchEndPosition(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getTouchEndPosition'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_getTouchEndPosition'", nullptr);
            return 0;
        }
        const cocos2d::Vec2& ret = cobj->getTouchEndPosition();
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:getTouchEndPosition",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getTouchEndPosition'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getPositionPercent(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getPositionPercent'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_getPositionPercent'", nullptr);
            return 0;
        }
        const cocos2d::Vec2& ret = cobj->getPositionPercent();
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:getPositionPercent",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getPositionPercent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_addClickEventListener(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_addClickEventListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::function<void (cocos2d::Ref *)> arg0;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_addClickEventListener'", nullptr);
            return 0;
        }
        cobj->addClickEventListener(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:addClickEventListener",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_addClickEventListener'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_isFlippedX(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_isFlippedX'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_isFlippedX'", nullptr);
            return 0;
        }
        bool ret = cobj->isFlippedX();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:isFlippedX",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_isFlippedX'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_isFlippedY(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_isFlippedY'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_isFlippedY'", nullptr);
            return 0;
        }
        bool ret = cobj->isFlippedY();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:isFlippedY",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_isFlippedY'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_isClippingParentContainsPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_isClippingParentContainsPoint'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "ccui.Widget:isClippingParentContainsPoint");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_isClippingParentContainsPoint'", nullptr);
            return 0;
        }
        bool ret = cobj->isClippingParentContainsPoint(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:isClippingParentContainsPoint",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_isClippingParentContainsPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setSizeType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setSizeType'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::Widget::SizeType arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ccui.Widget:setSizeType");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_setSizeType'", nullptr);
            return 0;
        }
        cobj->setSizeType(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:setSizeType",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setSizeType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setBright(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setBright'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ccui.Widget:setBright");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_setBright'", nullptr);
            return 0;
        }
        cobj->setBright(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:setBright",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setBright'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setCallbackType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setCallbackType'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "ccui.Widget:setCallbackType");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_setCallbackType'", nullptr);
            return 0;
        }
        cobj->setCallbackType(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:setCallbackType",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setCallbackType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_isSwallowTouches(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_isSwallowTouches'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_isSwallowTouches'", nullptr);
            return 0;
        }
        bool ret = cobj->isSwallowTouches();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:isSwallowTouches",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_isSwallowTouches'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_enableDpadNavigation(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ccui.Widget:enableDpadNavigation");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_enableDpadNavigation'", nullptr);
            return 0;
        }
        cocos2d::ui::Widget::enableDpadNavigation(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ccui.Widget:enableDpadNavigation",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_enableDpadNavigation'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_Widget_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_create'", nullptr);
            return 0;
        }
        cocos2d::ui::Widget* ret = cocos2d::ui::Widget::create();
        object_to_luaval<cocos2d::ui::Widget>(tolua_S, "ccui.Widget",(cocos2d::ui::Widget*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ccui.Widget:create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_Widget_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Widget_constructor'", nullptr);
            return 0;
        }
        cobj = new cocos2d::ui::Widget();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.Widget");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Widget:Widget",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_Widget_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Widget)");
    return 0;
}

int lua_register_cocos2dx_ui_Widget(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.Widget");
    tolua_cclass(tolua_S,"Widget","ccui.Widget","cc.ProtectedNode",nullptr);

    tolua_beginmodule(tolua_S,"Widget");
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_Widget_constructor);
        tolua_function(tolua_S,"setSizePercent",lua_cocos2dx_ui_Widget_setSizePercent);
        tolua_function(tolua_S,"getCustomSize",lua_cocos2dx_ui_Widget_getCustomSize);
        tolua_function(tolua_S,"getLeftBoundary",lua_cocos2dx_ui_Widget_getLeftBoundary);
        tolua_function(tolua_S,"setFlippedX",lua_cocos2dx_ui_Widget_setFlippedX);
        tolua_function(tolua_S,"setCallbackName",lua_cocos2dx_ui_Widget_setCallbackName);
        tolua_function(tolua_S,"getVirtualRenderer",lua_cocos2dx_ui_Widget_getVirtualRenderer);
        tolua_function(tolua_S,"setPropagateTouchEvents",lua_cocos2dx_ui_Widget_setPropagateTouchEvents);
        tolua_function(tolua_S,"isUnifySizeEnabled",lua_cocos2dx_ui_Widget_isUnifySizeEnabled);
        tolua_function(tolua_S,"getSizePercent",lua_cocos2dx_ui_Widget_getSizePercent);
        tolua_function(tolua_S,"setPositionPercent",lua_cocos2dx_ui_Widget_setPositionPercent);
        tolua_function(tolua_S,"setSwallowTouches",lua_cocos2dx_ui_Widget_setSwallowTouches);
        tolua_function(tolua_S,"getLayoutSize",lua_cocos2dx_ui_Widget_getLayoutSize);
        tolua_function(tolua_S,"setHighlighted",lua_cocos2dx_ui_Widget_setHighlighted);
        tolua_function(tolua_S,"setPositionType",lua_cocos2dx_ui_Widget_setPositionType);
        tolua_function(tolua_S,"isIgnoreContentAdaptWithSize",lua_cocos2dx_ui_Widget_isIgnoreContentAdaptWithSize);
        tolua_function(tolua_S,"getVirtualRendererSize",lua_cocos2dx_ui_Widget_getVirtualRendererSize);
        tolua_function(tolua_S,"isHighlighted",lua_cocos2dx_ui_Widget_isHighlighted);
        tolua_function(tolua_S,"getLayoutParameter",lua_cocos2dx_ui_Widget_getLayoutParameter);
        tolua_function(tolua_S,"addCCSEventListener",lua_cocos2dx_ui_Widget_addCCSEventListener);
        tolua_function(tolua_S,"getPositionType",lua_cocos2dx_ui_Widget_getPositionType);
        tolua_function(tolua_S,"getTopBoundary",lua_cocos2dx_ui_Widget_getTopBoundary);
        tolua_function(tolua_S,"ignoreContentAdaptWithSize",lua_cocos2dx_ui_Widget_ignoreContentAdaptWithSize);
        tolua_function(tolua_S,"findNextFocusedWidget",lua_cocos2dx_ui_Widget_findNextFocusedWidget);
        tolua_function(tolua_S,"isEnabled",lua_cocos2dx_ui_Widget_isEnabled);
        tolua_function(tolua_S,"isFocused",lua_cocos2dx_ui_Widget_isFocused);
        tolua_function(tolua_S,"getTouchBeganPosition",lua_cocos2dx_ui_Widget_getTouchBeganPosition);
        tolua_function(tolua_S,"isTouchEnabled",lua_cocos2dx_ui_Widget_isTouchEnabled);
        tolua_function(tolua_S,"getCallbackName",lua_cocos2dx_ui_Widget_getCallbackName);
        tolua_function(tolua_S,"getActionTag",lua_cocos2dx_ui_Widget_getActionTag);
        tolua_function(tolua_S,"getWorldPosition",lua_cocos2dx_ui_Widget_getWorldPosition);
        tolua_function(tolua_S,"isFocusEnabled",lua_cocos2dx_ui_Widget_isFocusEnabled);
        tolua_function(tolua_S,"setFocused",lua_cocos2dx_ui_Widget_setFocused);
        tolua_function(tolua_S,"setActionTag",lua_cocos2dx_ui_Widget_setActionTag);
        tolua_function(tolua_S,"setTouchEnabled",lua_cocos2dx_ui_Widget_setTouchEnabled);
        tolua_function(tolua_S,"setFlippedY",lua_cocos2dx_ui_Widget_setFlippedY);
        tolua_function(tolua_S,"setEnabled",lua_cocos2dx_ui_Widget_setEnabled);
        tolua_function(tolua_S,"getRightBoundary",lua_cocos2dx_ui_Widget_getRightBoundary);
        tolua_function(tolua_S,"setBrightStyle",lua_cocos2dx_ui_Widget_setBrightStyle);
        tolua_function(tolua_S,"setLayoutParameter",lua_cocos2dx_ui_Widget_setLayoutParameter);
        tolua_function(tolua_S,"clone",lua_cocos2dx_ui_Widget_clone);
        tolua_function(tolua_S,"setFocusEnabled",lua_cocos2dx_ui_Widget_setFocusEnabled);
        tolua_function(tolua_S,"getBottomBoundary",lua_cocos2dx_ui_Widget_getBottomBoundary);
        tolua_function(tolua_S,"isBright",lua_cocos2dx_ui_Widget_isBright);
        tolua_function(tolua_S,"setUnifySizeEnabled",lua_cocos2dx_ui_Widget_setUnifySizeEnabled);
        tolua_function(tolua_S,"isPropagateTouchEvents",lua_cocos2dx_ui_Widget_isPropagateTouchEvents);
        tolua_function(tolua_S,"getCurrentFocusedWidget",lua_cocos2dx_ui_Widget_getCurrentFocusedWidget);
        tolua_function(tolua_S,"hitTest",lua_cocos2dx_ui_Widget_hitTest);
        tolua_function(tolua_S,"requestFocus",lua_cocos2dx_ui_Widget_requestFocus);
        tolua_function(tolua_S,"updateSizeAndPosition",lua_cocos2dx_ui_Widget_updateSizeAndPosition);
        tolua_function(tolua_S,"getTouchMovePosition",lua_cocos2dx_ui_Widget_getTouchMovePosition);
        tolua_function(tolua_S,"getSizeType",lua_cocos2dx_ui_Widget_getSizeType);
        tolua_function(tolua_S,"getCallbackType",lua_cocos2dx_ui_Widget_getCallbackType);
        tolua_function(tolua_S,"addTouchEventListener",lua_cocos2dx_ui_Widget_addTouchEventListener);
        tolua_function(tolua_S,"getTouchEndPosition",lua_cocos2dx_ui_Widget_getTouchEndPosition);
        tolua_function(tolua_S,"getPositionPercent",lua_cocos2dx_ui_Widget_getPositionPercent);
        tolua_function(tolua_S,"addClickEventListener",lua_cocos2dx_ui_Widget_addClickEventListener);
        tolua_function(tolua_S,"isFlippedX",lua_cocos2dx_ui_Widget_isFlippedX);
        tolua_function(tolua_S,"isFlippedY",lua_cocos2dx_ui_Widget_isFlippedY);
        tolua_function(tolua_S,"isClippingParentContainsPoint",lua_cocos2dx_ui_Widget_isClippingParentContainsPoint);
        tolua_function(tolua_S,"setSizeType",lua_cocos2dx_ui_Widget_setSizeType);
        tolua_function(tolua_S,"setBright",lua_cocos2dx_ui_Widget_setBright);
        tolua_function(tolua_S,"setCallbackType",lua_cocos2dx_ui_Widget_setCallbackType);
        tolua_function(tolua_S,"isSwallowTouches",lua_cocos2dx_ui_Widget_isSwallowTouches);
        tolua_function(tolua_S,"enableDpadNavigation", lua_cocos2dx_ui_Widget_enableDpadNavigation);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_Widget_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::Widget).name();
    g_luaType[typeName] = "ccui.Widget";
    g_typeCast["Widget"] = "ccui.Widget";
    return 1;
}

int lua_cocos2dx_ui_Layout_setBackGroundColorVector(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setBackGroundColorVector'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "ccui.Layout:setBackGroundColorVector");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_setBackGroundColorVector'", nullptr);
            return 0;
        }
        cobj->setBackGroundColorVector(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:setBackGroundColorVector",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setBackGroundColorVector'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_setClippingType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setClippingType'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::Layout::ClippingType arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ccui.Layout:setClippingType");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_setClippingType'", nullptr);
            return 0;
        }
        cobj->setClippingType(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:setClippingType",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setClippingType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_setBackGroundColorType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setBackGroundColorType'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::Layout::BackGroundColorType arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ccui.Layout:setBackGroundColorType");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_setBackGroundColorType'", nullptr);
            return 0;
        }
        cobj->setBackGroundColorType(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:setBackGroundColorType",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setBackGroundColorType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_setLoopFocus(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setLoopFocus'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ccui.Layout:setLoopFocus");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_setLoopFocus'", nullptr);
            return 0;
        }
        cobj->setLoopFocus(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:setLoopFocus",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setLoopFocus'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_setBackGroundImageColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setBackGroundImageColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Color3B arg0;

        ok &= luaval_to_color3b(tolua_S, 2, &arg0, "ccui.Layout:setBackGroundImageColor");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_setBackGroundImageColor'", nullptr);
            return 0;
        }
        cobj->setBackGroundImageColor(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:setBackGroundImageColor",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setBackGroundImageColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_getBackGroundColorVector(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_getBackGroundColorVector'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_getBackGroundColorVector'", nullptr);
            return 0;
        }
        const cocos2d::Vec2& ret = cobj->getBackGroundColorVector();
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:getBackGroundColorVector",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_getBackGroundColorVector'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_getClippingType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_getClippingType'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_getClippingType'", nullptr);
            return 0;
        }
        int ret = (int)cobj->getClippingType();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:getClippingType",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_getClippingType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_isLoopFocus(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_isLoopFocus'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_isLoopFocus'", nullptr);
            return 0;
        }
        bool ret = cobj->isLoopFocus();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:isLoopFocus",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_isLoopFocus'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_removeBackGroundImage(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_removeBackGroundImage'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_removeBackGroundImage'", nullptr);
            return 0;
        }
        cobj->removeBackGroundImage();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:removeBackGroundImage",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_removeBackGroundImage'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_getBackGroundColorOpacity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_getBackGroundColorOpacity'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_getBackGroundColorOpacity'", nullptr);
            return 0;
        }
        uint16_t ret = cobj->getBackGroundColorOpacity();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:getBackGroundColorOpacity",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_getBackGroundColorOpacity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_isClippingEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_isClippingEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_isClippingEnabled'", nullptr);
            return 0;
        }
        bool ret = cobj->isClippingEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:isClippingEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_isClippingEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_setBackGroundImageOpacity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setBackGroundImageOpacity'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        uint16_t arg0;

        ok &= luaval_to_uint16(tolua_S, 2,&arg0, "ccui.Layout:setBackGroundImageOpacity");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_setBackGroundImageOpacity'", nullptr);
            return 0;
        }
        cobj->setBackGroundImageOpacity(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:setBackGroundImageOpacity",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setBackGroundImageOpacity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_setBackGroundImage(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setBackGroundImage'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "ccui.Layout:setBackGroundImage");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_setBackGroundImage'", nullptr);
            return 0;
        }
        cobj->setBackGroundImage(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2) 
    {
        std::string arg0;
        cocos2d::ui::Widget::TextureResType arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "ccui.Layout:setBackGroundImage");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "ccui.Layout:setBackGroundImage");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_setBackGroundImage'", nullptr);
            return 0;
        }
        cobj->setBackGroundImage(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:setBackGroundImage",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setBackGroundImage'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_setBackGroundColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setBackGroundColor'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            cocos2d::Color3B arg0;
            ok &= luaval_to_color3b(tolua_S, 2, &arg0, "ccui.Layout:setBackGroundColor");

            if (!ok) { break; }
            cocos2d::Color3B arg1;
            ok &= luaval_to_color3b(tolua_S, 3, &arg1, "ccui.Layout:setBackGroundColor");

            if (!ok) { break; }
            cobj->setBackGroundColor(arg0, arg1);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            cocos2d::Color3B arg0;
            ok &= luaval_to_color3b(tolua_S, 2, &arg0, "ccui.Layout:setBackGroundColor");

            if (!ok) { break; }
            cobj->setBackGroundColor(arg0);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "ccui.Layout:setBackGroundColor",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setBackGroundColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_requestDoLayout(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_requestDoLayout'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_requestDoLayout'", nullptr);
            return 0;
        }
        cobj->requestDoLayout();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:requestDoLayout",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_requestDoLayout'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_getBackGroundImageCapInsets(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_getBackGroundImageCapInsets'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_getBackGroundImageCapInsets'", nullptr);
            return 0;
        }
        const cocos2d::Rect& ret = cobj->getBackGroundImageCapInsets();
        rect_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:getBackGroundImageCapInsets",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_getBackGroundImageCapInsets'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_getBackGroundColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_getBackGroundColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_getBackGroundColor'", nullptr);
            return 0;
        }
        const cocos2d::Color3B& ret = cobj->getBackGroundColor();
        color3b_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:getBackGroundColor",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_getBackGroundColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_setClippingEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setClippingEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ccui.Layout:setClippingEnabled");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_setClippingEnabled'", nullptr);
            return 0;
        }
        cobj->setClippingEnabled(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:setClippingEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setClippingEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_getBackGroundImageColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_getBackGroundImageColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_getBackGroundImageColor'", nullptr);
            return 0;
        }
        const cocos2d::Color3B& ret = cobj->getBackGroundImageColor();
        color3b_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:getBackGroundImageColor",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_getBackGroundImageColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_isBackGroundImageScale9Enabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_isBackGroundImageScale9Enabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_isBackGroundImageScale9Enabled'", nullptr);
            return 0;
        }
        bool ret = cobj->isBackGroundImageScale9Enabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:isBackGroundImageScale9Enabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_isBackGroundImageScale9Enabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_getBackGroundColorType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_getBackGroundColorType'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_getBackGroundColorType'", nullptr);
            return 0;
        }
        int ret = (int)cobj->getBackGroundColorType();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:getBackGroundColorType",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_getBackGroundColorType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_getBackGroundEndColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_getBackGroundEndColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_getBackGroundEndColor'", nullptr);
            return 0;
        }
        const cocos2d::Color3B& ret = cobj->getBackGroundEndColor();
        color3b_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:getBackGroundEndColor",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_getBackGroundEndColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_setBackGroundColorOpacity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setBackGroundColorOpacity'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        uint16_t arg0;

        ok &= luaval_to_uint16(tolua_S, 2,&arg0, "ccui.Layout:setBackGroundColorOpacity");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_setBackGroundColorOpacity'", nullptr);
            return 0;
        }
        cobj->setBackGroundColorOpacity(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:setBackGroundColorOpacity",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setBackGroundColorOpacity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_getBackGroundImageOpacity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_getBackGroundImageOpacity'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_getBackGroundImageOpacity'", nullptr);
            return 0;
        }
        uint16_t ret = cobj->getBackGroundImageOpacity();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:getBackGroundImageOpacity",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_getBackGroundImageOpacity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_isPassFocusToChild(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_isPassFocusToChild'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_isPassFocusToChild'", nullptr);
            return 0;
        }
        bool ret = cobj->isPassFocusToChild();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:isPassFocusToChild",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_isPassFocusToChild'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_setBackGroundImageCapInsets(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setBackGroundImageCapInsets'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Rect arg0;

        ok &= luaval_to_rect(tolua_S, 2, &arg0, "ccui.Layout:setBackGroundImageCapInsets");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_setBackGroundImageCapInsets'", nullptr);
            return 0;
        }
        cobj->setBackGroundImageCapInsets(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:setBackGroundImageCapInsets",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setBackGroundImageCapInsets'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_getBackGroundImageTextureSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_getBackGroundImageTextureSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_getBackGroundImageTextureSize'", nullptr);
            return 0;
        }
        const cocos2d::Size& ret = cobj->getBackGroundImageTextureSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:getBackGroundImageTextureSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_getBackGroundImageTextureSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_forceDoLayout(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_forceDoLayout'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_forceDoLayout'", nullptr);
            return 0;
        }
        cobj->forceDoLayout();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:forceDoLayout",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_forceDoLayout'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_getLayoutType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_getLayoutType'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_getLayoutType'", nullptr);
            return 0;
        }
        int ret = (int)cobj->getLayoutType();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:getLayoutType",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_getLayoutType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_setPassFocusToChild(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setPassFocusToChild'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ccui.Layout:setPassFocusToChild");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_setPassFocusToChild'", nullptr);
            return 0;
        }
        cobj->setPassFocusToChild(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:setPassFocusToChild",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setPassFocusToChild'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_getBackGroundStartColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_getBackGroundStartColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_getBackGroundStartColor'", nullptr);
            return 0;
        }
        const cocos2d::Color3B& ret = cobj->getBackGroundStartColor();
        color3b_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:getBackGroundStartColor",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_getBackGroundStartColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_setBackGroundImageScale9Enabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setBackGroundImageScale9Enabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ccui.Layout:setBackGroundImageScale9Enabled");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_setBackGroundImageScale9Enabled'", nullptr);
            return 0;
        }
        cobj->setBackGroundImageScale9Enabled(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:setBackGroundImageScale9Enabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setBackGroundImageScale9Enabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_setLayoutType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setLayoutType'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::Layout::Type arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ccui.Layout:setLayoutType");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_setLayoutType'", nullptr);
            return 0;
        }
        cobj->setLayoutType(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:setLayoutType",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setLayoutType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_create'", nullptr);
            return 0;
        }
        cocos2d::ui::Layout* ret = cocos2d::ui::Layout::create();
        object_to_luaval<cocos2d::ui::Layout>(tolua_S, "ccui.Layout",(cocos2d::ui::Layout*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ccui.Layout:create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_Layout_createInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_createInstance'", nullptr);
            return 0;
        }
        cocos2d::Ref* ret = cocos2d::ui::Layout::createInstance();
        object_to_luaval<cocos2d::Ref>(tolua_S, "cc.Ref",(cocos2d::Ref*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ccui.Layout:createInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_createInstance'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_Layout_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Layout_constructor'", nullptr);
            return 0;
        }
        cobj = new cocos2d::ui::Layout();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.Layout");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.Layout:Layout",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_Layout_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Layout)");
    return 0;
}

int lua_register_cocos2dx_ui_Layout(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.Layout");
    tolua_cclass(tolua_S,"Layout","ccui.Layout","ccui.Widget",nullptr);

    tolua_beginmodule(tolua_S,"Layout");
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_Layout_constructor);
        tolua_function(tolua_S,"setBackGroundColorVector",lua_cocos2dx_ui_Layout_setBackGroundColorVector);
        tolua_function(tolua_S,"setClippingType",lua_cocos2dx_ui_Layout_setClippingType);
        tolua_function(tolua_S,"setBackGroundColorType",lua_cocos2dx_ui_Layout_setBackGroundColorType);
        tolua_function(tolua_S,"setLoopFocus",lua_cocos2dx_ui_Layout_setLoopFocus);
        tolua_function(tolua_S,"setBackGroundImageColor",lua_cocos2dx_ui_Layout_setBackGroundImageColor);
        tolua_function(tolua_S,"getBackGroundColorVector",lua_cocos2dx_ui_Layout_getBackGroundColorVector);
        tolua_function(tolua_S,"getClippingType",lua_cocos2dx_ui_Layout_getClippingType);
        tolua_function(tolua_S,"isLoopFocus",lua_cocos2dx_ui_Layout_isLoopFocus);
        tolua_function(tolua_S,"removeBackGroundImage",lua_cocos2dx_ui_Layout_removeBackGroundImage);
        tolua_function(tolua_S,"getBackGroundColorOpacity",lua_cocos2dx_ui_Layout_getBackGroundColorOpacity);
        tolua_function(tolua_S,"isClippingEnabled",lua_cocos2dx_ui_Layout_isClippingEnabled);
        tolua_function(tolua_S,"setBackGroundImageOpacity",lua_cocos2dx_ui_Layout_setBackGroundImageOpacity);
        tolua_function(tolua_S,"setBackGroundImage",lua_cocos2dx_ui_Layout_setBackGroundImage);
        tolua_function(tolua_S,"setBackGroundColor",lua_cocos2dx_ui_Layout_setBackGroundColor);
        tolua_function(tolua_S,"requestDoLayout",lua_cocos2dx_ui_Layout_requestDoLayout);
        tolua_function(tolua_S,"getBackGroundImageCapInsets",lua_cocos2dx_ui_Layout_getBackGroundImageCapInsets);
        tolua_function(tolua_S,"getBackGroundColor",lua_cocos2dx_ui_Layout_getBackGroundColor);
        tolua_function(tolua_S,"setClippingEnabled",lua_cocos2dx_ui_Layout_setClippingEnabled);
        tolua_function(tolua_S,"getBackGroundImageColor",lua_cocos2dx_ui_Layout_getBackGroundImageColor);
        tolua_function(tolua_S,"isBackGroundImageScale9Enabled",lua_cocos2dx_ui_Layout_isBackGroundImageScale9Enabled);
        tolua_function(tolua_S,"getBackGroundColorType",lua_cocos2dx_ui_Layout_getBackGroundColorType);
        tolua_function(tolua_S,"getBackGroundEndColor",lua_cocos2dx_ui_Layout_getBackGroundEndColor);
        tolua_function(tolua_S,"setBackGroundColorOpacity",lua_cocos2dx_ui_Layout_setBackGroundColorOpacity);
        tolua_function(tolua_S,"getBackGroundImageOpacity",lua_cocos2dx_ui_Layout_getBackGroundImageOpacity);
        tolua_function(tolua_S,"isPassFocusToChild",lua_cocos2dx_ui_Layout_isPassFocusToChild);
        tolua_function(tolua_S,"setBackGroundImageCapInsets",lua_cocos2dx_ui_Layout_setBackGroundImageCapInsets);
        tolua_function(tolua_S,"getBackGroundImageTextureSize",lua_cocos2dx_ui_Layout_getBackGroundImageTextureSize);
        tolua_function(tolua_S,"forceDoLayout",lua_cocos2dx_ui_Layout_forceDoLayout);
        tolua_function(tolua_S,"getLayoutType",lua_cocos2dx_ui_Layout_getLayoutType);
        tolua_function(tolua_S,"setPassFocusToChild",lua_cocos2dx_ui_Layout_setPassFocusToChild);
        tolua_function(tolua_S,"getBackGroundStartColor",lua_cocos2dx_ui_Layout_getBackGroundStartColor);
        tolua_function(tolua_S,"setBackGroundImageScale9Enabled",lua_cocos2dx_ui_Layout_setBackGroundImageScale9Enabled);
        tolua_function(tolua_S,"setLayoutType",lua_cocos2dx_ui_Layout_setLayoutType);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_Layout_create);
        tolua_function(tolua_S,"createInstance", lua_cocos2dx_ui_Layout_createInstance);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::Layout).name();
    g_luaType[typeName] = "ccui.Layout";
    g_typeCast["Layout"] = "ccui.Layout";
    return 1;
}

int lua_cocos2dx_ui_Helper_getSubStringOfUTF8String(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.Helper",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 3)
    {
        std::string arg0;
        unsigned long arg1;
        unsigned long arg2;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "ccui.Helper:getSubStringOfUTF8String");
        ok &= luaval_to_ulong(tolua_S, 3, &arg1, "ccui.Helper:getSubStringOfUTF8String");
        ok &= luaval_to_ulong(tolua_S, 4, &arg2, "ccui.Helper:getSubStringOfUTF8String");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Helper_getSubStringOfUTF8String'", nullptr);
            return 0;
        }
        std::string ret = cocos2d::ui::Helper::getSubStringOfUTF8String(arg0, arg1, arg2);
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ccui.Helper:getSubStringOfUTF8String",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Helper_getSubStringOfUTF8String'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_Helper_changeLayoutSystemActiveState(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.Helper",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ccui.Helper:changeLayoutSystemActiveState");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Helper_changeLayoutSystemActiveState'", nullptr);
            return 0;
        }
        cocos2d::ui::Helper::changeLayoutSystemActiveState(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ccui.Helper:changeLayoutSystemActiveState",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Helper_changeLayoutSystemActiveState'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_Helper_seekActionWidgetByActionTag(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.Helper",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::ui::Widget* arg0;
        int arg1;
        ok &= luaval_to_object<cocos2d::ui::Widget>(tolua_S, 2, "ccui.Widget",&arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "ccui.Helper:seekActionWidgetByActionTag");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Helper_seekActionWidgetByActionTag'", nullptr);
            return 0;
        }
        cocos2d::ui::Widget* ret = cocos2d::ui::Helper::seekActionWidgetByActionTag(arg0, arg1);
        object_to_luaval<cocos2d::ui::Widget>(tolua_S, "ccui.Widget",(cocos2d::ui::Widget*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ccui.Helper:seekActionWidgetByActionTag",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Helper_seekActionWidgetByActionTag'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_Helper_seekWidgetByName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.Helper",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::ui::Widget* arg0;
        std::string arg1;
        ok &= luaval_to_object<cocos2d::ui::Widget>(tolua_S, 2, "ccui.Widget",&arg0);
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "ccui.Helper:seekWidgetByName");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Helper_seekWidgetByName'", nullptr);
            return 0;
        }
        cocos2d::ui::Widget* ret = cocos2d::ui::Helper::seekWidgetByName(arg0, arg1);
        object_to_luaval<cocos2d::ui::Widget>(tolua_S, "ccui.Widget",(cocos2d::ui::Widget*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ccui.Helper:seekWidgetByName",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Helper_seekWidgetByName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_Helper_seekWidgetByTag(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.Helper",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::ui::Widget* arg0;
        int arg1;
        ok &= luaval_to_object<cocos2d::ui::Widget>(tolua_S, 2, "ccui.Widget",&arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "ccui.Helper:seekWidgetByTag");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Helper_seekWidgetByTag'", nullptr);
            return 0;
        }
        cocos2d::ui::Widget* ret = cocos2d::ui::Helper::seekWidgetByTag(arg0, arg1);
        object_to_luaval<cocos2d::ui::Widget>(tolua_S, "ccui.Widget",(cocos2d::ui::Widget*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ccui.Helper:seekWidgetByTag",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Helper_seekWidgetByTag'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_Helper_doLayout(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.Helper",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocos2d::Node* arg0;
        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_Helper_doLayout'", nullptr);
            return 0;
        }
        cocos2d::ui::Helper::doLayout(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ccui.Helper:doLayout",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Helper_doLayout'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_ui_Helper_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Helper)");
    return 0;
}

int lua_register_cocos2dx_ui_Helper(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.Helper");
    tolua_cclass(tolua_S,"Helper","ccui.Helper","",nullptr);

    tolua_beginmodule(tolua_S,"Helper");
        tolua_function(tolua_S,"getSubStringOfUTF8String", lua_cocos2dx_ui_Helper_getSubStringOfUTF8String);
        tolua_function(tolua_S,"changeLayoutSystemActiveState", lua_cocos2dx_ui_Helper_changeLayoutSystemActiveState);
        tolua_function(tolua_S,"seekActionWidgetByActionTag", lua_cocos2dx_ui_Helper_seekActionWidgetByActionTag);
        tolua_function(tolua_S,"seekWidgetByName", lua_cocos2dx_ui_Helper_seekWidgetByName);
        tolua_function(tolua_S,"seekWidgetByTag", lua_cocos2dx_ui_Helper_seekWidgetByTag);
        tolua_function(tolua_S,"doLayout", lua_cocos2dx_ui_Helper_doLayout);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::Helper).name();
    g_luaType[typeName] = "ccui.Helper";
    g_typeCast["Helper"] = "ccui.Helper";
    return 1;
}

int lua_cocos2dx_ui_RichElement_init(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RichElement* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RichElement",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::RichElement*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RichElement_init'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        int arg0;
        cocos2d::Color3B arg1;
        uint16_t arg2;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ccui.RichElement:init");

        ok &= luaval_to_color3b(tolua_S, 3, &arg1, "ccui.RichElement:init");

        ok &= luaval_to_uint16(tolua_S, 4,&arg2, "ccui.RichElement:init");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RichElement_init'", nullptr);
            return 0;
        }
        bool ret = cobj->init(arg0, arg1, arg2);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.RichElement:init",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RichElement_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RichElement_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RichElement* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RichElement_constructor'", nullptr);
            return 0;
        }
        cobj = new cocos2d::ui::RichElement();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.RichElement");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.RichElement:RichElement",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RichElement_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_RichElement_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (RichElement)");
    return 0;
}

int lua_register_cocos2dx_ui_RichElement(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.RichElement");
    tolua_cclass(tolua_S,"RichElement","ccui.RichElement","cc.Ref",nullptr);

    tolua_beginmodule(tolua_S,"RichElement");
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_RichElement_constructor);
        tolua_function(tolua_S,"init",lua_cocos2dx_ui_RichElement_init);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::RichElement).name();
    g_luaType[typeName] = "ccui.RichElement";
    g_typeCast["RichElement"] = "ccui.RichElement";
    return 1;
}

int lua_cocos2dx_ui_RichElementText_init(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RichElementText* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RichElementText",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::RichElementText*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RichElementText_init'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 6) 
    {
        int arg0;
        cocos2d::Color3B arg1;
        uint16_t arg2;
        std::string arg3;
        std::string arg4;
        double arg5;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ccui.RichElementText:init");

        ok &= luaval_to_color3b(tolua_S, 3, &arg1, "ccui.RichElementText:init");

        ok &= luaval_to_uint16(tolua_S, 4,&arg2, "ccui.RichElementText:init");

        ok &= luaval_to_std_string(tolua_S, 5,&arg3, "ccui.RichElementText:init");

        ok &= luaval_to_std_string(tolua_S, 6,&arg4, "ccui.RichElementText:init");

        ok &= luaval_to_number(tolua_S, 7,&arg5, "ccui.RichElementText:init");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RichElementText_init'", nullptr);
            return 0;
        }
        bool ret = cobj->init(arg0, arg1, arg2, arg3, arg4, arg5);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.RichElementText:init",argc, 6);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RichElementText_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RichElementText_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.RichElementText",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 6)
    {
        int arg0;
        cocos2d::Color3B arg1;
        uint16_t arg2;
        std::string arg3;
        std::string arg4;
        double arg5;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ccui.RichElementText:create");
        ok &= luaval_to_color3b(tolua_S, 3, &arg1, "ccui.RichElementText:create");
        ok &= luaval_to_uint16(tolua_S, 4,&arg2, "ccui.RichElementText:create");
        ok &= luaval_to_std_string(tolua_S, 5,&arg3, "ccui.RichElementText:create");
        ok &= luaval_to_std_string(tolua_S, 6,&arg4, "ccui.RichElementText:create");
        ok &= luaval_to_number(tolua_S, 7,&arg5, "ccui.RichElementText:create");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RichElementText_create'", nullptr);
            return 0;
        }
        cocos2d::ui::RichElementText* ret = cocos2d::ui::RichElementText::create(arg0, arg1, arg2, arg3, arg4, arg5);
        object_to_luaval<cocos2d::ui::RichElementText>(tolua_S, "ccui.RichElementText",(cocos2d::ui::RichElementText*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ccui.RichElementText:create",argc, 6);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RichElementText_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_RichElementText_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RichElementText* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RichElementText_constructor'", nullptr);
            return 0;
        }
        cobj = new cocos2d::ui::RichElementText();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.RichElementText");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.RichElementText:RichElementText",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RichElementText_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_RichElementText_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (RichElementText)");
    return 0;
}

int lua_register_cocos2dx_ui_RichElementText(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.RichElementText");
    tolua_cclass(tolua_S,"RichElementText","ccui.RichElementText","ccui.RichElement",nullptr);

    tolua_beginmodule(tolua_S,"RichElementText");
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_RichElementText_constructor);
        tolua_function(tolua_S,"init",lua_cocos2dx_ui_RichElementText_init);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_RichElementText_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::RichElementText).name();
    g_luaType[typeName] = "ccui.RichElementText";
    g_typeCast["RichElementText"] = "ccui.RichElementText";
    return 1;
}

int lua_cocos2dx_ui_RichElementImage_init(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RichElementImage* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RichElementImage",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::RichElementImage*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RichElementImage_init'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        int arg0;
        cocos2d::Color3B arg1;
        uint16_t arg2;
        std::string arg3;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ccui.RichElementImage:init");

        ok &= luaval_to_color3b(tolua_S, 3, &arg1, "ccui.RichElementImage:init");

        ok &= luaval_to_uint16(tolua_S, 4,&arg2, "ccui.RichElementImage:init");

        ok &= luaval_to_std_string(tolua_S, 5,&arg3, "ccui.RichElementImage:init");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RichElementImage_init'", nullptr);
            return 0;
        }
        bool ret = cobj->init(arg0, arg1, arg2, arg3);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.RichElementImage:init",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RichElementImage_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RichElementImage_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.RichElementImage",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 4)
    {
        int arg0;
        cocos2d::Color3B arg1;
        uint16_t arg2;
        std::string arg3;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ccui.RichElementImage:create");
        ok &= luaval_to_color3b(tolua_S, 3, &arg1, "ccui.RichElementImage:create");
        ok &= luaval_to_uint16(tolua_S, 4,&arg2, "ccui.RichElementImage:create");
        ok &= luaval_to_std_string(tolua_S, 5,&arg3, "ccui.RichElementImage:create");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RichElementImage_create'", nullptr);
            return 0;
        }
        cocos2d::ui::RichElementImage* ret = cocos2d::ui::RichElementImage::create(arg0, arg1, arg2, arg3);
        object_to_luaval<cocos2d::ui::RichElementImage>(tolua_S, "ccui.RichElementImage",(cocos2d::ui::RichElementImage*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ccui.RichElementImage:create",argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RichElementImage_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_RichElementImage_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RichElementImage* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RichElementImage_constructor'", nullptr);
            return 0;
        }
        cobj = new cocos2d::ui::RichElementImage();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.RichElementImage");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.RichElementImage:RichElementImage",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RichElementImage_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_RichElementImage_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (RichElementImage)");
    return 0;
}

int lua_register_cocos2dx_ui_RichElementImage(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.RichElementImage");
    tolua_cclass(tolua_S,"RichElementImage","ccui.RichElementImage","ccui.RichElement",nullptr);

    tolua_beginmodule(tolua_S,"RichElementImage");
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_RichElementImage_constructor);
        tolua_function(tolua_S,"init",lua_cocos2dx_ui_RichElementImage_init);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_RichElementImage_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::RichElementImage).name();
    g_luaType[typeName] = "ccui.RichElementImage";
    g_typeCast["RichElementImage"] = "ccui.RichElementImage";
    return 1;
}

int lua_cocos2dx_ui_RichElementCustomNode_init(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RichElementCustomNode* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RichElementCustomNode",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::RichElementCustomNode*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RichElementCustomNode_init'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        int arg0;
        cocos2d::Color3B arg1;
        uint16_t arg2;
        cocos2d::Node* arg3;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ccui.RichElementCustomNode:init");

        ok &= luaval_to_color3b(tolua_S, 3, &arg1, "ccui.RichElementCustomNode:init");

        ok &= luaval_to_uint16(tolua_S, 4,&arg2, "ccui.RichElementCustomNode:init");

        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 5, "cc.Node",&arg3);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RichElementCustomNode_init'", nullptr);
            return 0;
        }
        bool ret = cobj->init(arg0, arg1, arg2, arg3);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.RichElementCustomNode:init",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RichElementCustomNode_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RichElementCustomNode_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.RichElementCustomNode",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 4)
    {
        int arg0;
        cocos2d::Color3B arg1;
        uint16_t arg2;
        cocos2d::Node* arg3;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ccui.RichElementCustomNode:create");
        ok &= luaval_to_color3b(tolua_S, 3, &arg1, "ccui.RichElementCustomNode:create");
        ok &= luaval_to_uint16(tolua_S, 4,&arg2, "ccui.RichElementCustomNode:create");
        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 5, "cc.Node",&arg3);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RichElementCustomNode_create'", nullptr);
            return 0;
        }
        cocos2d::ui::RichElementCustomNode* ret = cocos2d::ui::RichElementCustomNode::create(arg0, arg1, arg2, arg3);
        object_to_luaval<cocos2d::ui::RichElementCustomNode>(tolua_S, "ccui.RichElementCustomNode",(cocos2d::ui::RichElementCustomNode*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ccui.RichElementCustomNode:create",argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RichElementCustomNode_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_RichElementCustomNode_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RichElementCustomNode* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RichElementCustomNode_constructor'", nullptr);
            return 0;
        }
        cobj = new cocos2d::ui::RichElementCustomNode();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.RichElementCustomNode");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.RichElementCustomNode:RichElementCustomNode",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RichElementCustomNode_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_RichElementCustomNode_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (RichElementCustomNode)");
    return 0;
}

int lua_register_cocos2dx_ui_RichElementCustomNode(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.RichElementCustomNode");
    tolua_cclass(tolua_S,"RichElementCustomNode","ccui.RichElementCustomNode","ccui.RichElement",nullptr);

    tolua_beginmodule(tolua_S,"RichElementCustomNode");
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_RichElementCustomNode_constructor);
        tolua_function(tolua_S,"init",lua_cocos2dx_ui_RichElementCustomNode_init);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_RichElementCustomNode_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::RichElementCustomNode).name();
    g_luaType[typeName] = "ccui.RichElementCustomNode";
    g_typeCast["RichElementCustomNode"] = "ccui.RichElementCustomNode";
    return 1;
}

int lua_cocos2dx_ui_RichText_insertElement(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RichText* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RichText",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::RichText*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RichText_insertElement'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::ui::RichElement* arg0;
        int arg1;

        ok &= luaval_to_object<cocos2d::ui::RichElement>(tolua_S, 2, "ccui.RichElement",&arg0);

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "ccui.RichText:insertElement");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RichText_insertElement'", nullptr);
            return 0;
        }
        cobj->insertElement(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.RichText:insertElement",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RichText_insertElement'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RichText_setAnchorPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RichText* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RichText",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::RichText*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RichText_setAnchorPoint'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "ccui.RichText:setAnchorPoint");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RichText_setAnchorPoint'", nullptr);
            return 0;
        }
        cobj->setAnchorPoint(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.RichText:setAnchorPoint",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RichText_setAnchorPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RichText_pushBackElement(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RichText* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RichText",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::RichText*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RichText_pushBackElement'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::RichElement* arg0;

        ok &= luaval_to_object<cocos2d::ui::RichElement>(tolua_S, 2, "ccui.RichElement",&arg0);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RichText_pushBackElement'", nullptr);
            return 0;
        }
        cobj->pushBackElement(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.RichText:pushBackElement",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RichText_pushBackElement'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RichText_ignoreContentAdaptWithSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RichText* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RichText",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::RichText*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RichText_ignoreContentAdaptWithSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ccui.RichText:ignoreContentAdaptWithSize");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RichText_ignoreContentAdaptWithSize'", nullptr);
            return 0;
        }
        cobj->ignoreContentAdaptWithSize(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.RichText:ignoreContentAdaptWithSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RichText_ignoreContentAdaptWithSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RichText_setVerticalSpace(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RichText* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RichText",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::RichText*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RichText_setVerticalSpace'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "ccui.RichText:setVerticalSpace");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RichText_setVerticalSpace'", nullptr);
            return 0;
        }
        cobj->setVerticalSpace(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.RichText:setVerticalSpace",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RichText_setVerticalSpace'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RichText_formatText(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RichText* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RichText",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::RichText*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RichText_formatText'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RichText_formatText'", nullptr);
            return 0;
        }
        cobj->formatText();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.RichText:formatText",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RichText_formatText'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RichText_removeElement(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RichText* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RichText",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::ui::RichText*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RichText_removeElement'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            cocos2d::ui::RichElement* arg0;
            ok &= luaval_to_object<cocos2d::ui::RichElement>(tolua_S, 2, "ccui.RichElement",&arg0);

            if (!ok) { break; }
            cobj->removeElement(arg0);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            int arg0;
            ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ccui.RichText:removeElement");

            if (!ok) { break; }
            cobj->removeElement(arg0);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "ccui.RichText:removeElement",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RichText_removeElement'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RichText_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.RichText",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RichText_create'", nullptr);
            return 0;
        }
        cocos2d::ui::RichText* ret = cocos2d::ui::RichText::create();
        object_to_luaval<cocos2d::ui::RichText>(tolua_S, "ccui.RichText",(cocos2d::ui::RichText*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ccui.RichText:create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RichText_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_RichText_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RichText* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_ui_RichText_constructor'", nullptr);
            return 0;
        }
        cobj = new cocos2d::ui::RichText();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.RichText");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ccui.RichText:RichText",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RichText_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_RichText_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (RichText)");
    return 0;
}

int lua_register_cocos2dx_ui_RichText(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.RichText");
    tolua_cclass(tolua_S,"RichText","ccui.RichText","ccui.Widget",nullptr);

    tolua_beginmodule(tolua_S,"RichText");
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_RichText_constructor);
        tolua_function(tolua_S,"insertElement",lua_cocos2dx_ui_RichText_insertElement);
        tolua_function(tolua_S,"setAnchorPoint",lua_cocos2dx_ui_RichText_setAnchorPoint);
        tolua_function(tolua_S,"pushBackElement",lua_cocos2dx_ui_RichText_pushBackElement);
        tolua_function(tolua_S,"ignoreContentAdaptWithSize",lua_cocos2dx_ui_RichText_ignoreContentAdaptWithSize);
        tolua_function(tolua_S,"setVerticalSpace",lua_cocos2dx_ui_RichText_setVerticalSpace);
        tolua_function(tolua_S,"formatText",lua_cocos2dx_ui_RichText_formatText);
        tolua_function(tolua_S,"removeElement",lua_cocos2dx_ui_RichText_removeElement);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_RichText_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::RichText).name();
    g_luaType[typeName] = "ccui.RichText";
    g_typeCast["RichText"] = "ccui.RichText";
    return 1;
}
TOLUA_API int register_all_cocos2dx_ui(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"ccui",0);
	tolua_beginmodule(tolua_S,"ccui");

	lua_register_cocos2dx_ui_RichElement(tolua_S);
	lua_register_cocos2dx_ui_Widget(tolua_S);
	lua_register_cocos2dx_ui_Layout(tolua_S);
	lua_register_cocos2dx_ui_Helper(tolua_S);
	lua_register_cocos2dx_ui_RichElementText(tolua_S);
	lua_register_cocos2dx_ui_RichElementCustomNode(tolua_S);
	lua_register_cocos2dx_ui_LayoutParameter(tolua_S);
	lua_register_cocos2dx_ui_LinearLayoutParameter(tolua_S);
	lua_register_cocos2dx_ui_RichText(tolua_S);
	lua_register_cocos2dx_ui_RichElementImage(tolua_S);
	lua_register_cocos2dx_ui_RelativeLayoutParameter(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

