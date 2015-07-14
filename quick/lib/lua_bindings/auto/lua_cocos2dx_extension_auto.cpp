#include "lua_cocos2dx_extension_auto.hpp"
#include "cocos-ext.h"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"



int lua_cocos2dx_extension_Scale9Sprite_resizableSpriteWithCapInsets(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_resizableSpriteWithCapInsets'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Rect arg0;

        ok &= luaval_to_rect(tolua_S, 2, &arg0, "cc.Scale9Sprite:resizableSpriteWithCapInsets");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Scale9Sprite_resizableSpriteWithCapInsets'", nullptr);
            return 0;
        }
        cocos2d::extension::Scale9Sprite* ret = cobj->resizableSpriteWithCapInsets(arg0);
        object_to_luaval<cocos2d::extension::Scale9Sprite>(tolua_S, "cc.Scale9Sprite",(cocos2d::extension::Scale9Sprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scale9Sprite:resizableSpriteWithCapInsets",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_resizableSpriteWithCapInsets'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setInsetBottom(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetBottom'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Scale9Sprite:setInsetBottom");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetBottom'", nullptr);
            return 0;
        }
        cobj->setInsetBottom(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scale9Sprite:setInsetBottom",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetBottom'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrameName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrameName'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Scale9Sprite:initWithSpriteFrameName");

            if (!ok) { break; }
            bool ret = cobj->initWithSpriteFrameName(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Scale9Sprite:initWithSpriteFrameName");

            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1, "cc.Scale9Sprite:initWithSpriteFrameName");

            if (!ok) { break; }
            bool ret = cobj->initWithSpriteFrameName(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.Scale9Sprite:initWithSpriteFrameName",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrameName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setInsetTop(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetTop'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Scale9Sprite:setInsetTop");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetTop'", nullptr);
            return 0;
        }
        cobj->setInsetTop(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scale9Sprite:setInsetTop",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetTop'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_init(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_init'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Scale9Sprite_init'", nullptr);
            return 0;
        }
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scale9Sprite:init",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setPreferredSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setPreferredSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;

        ok &= luaval_to_size(tolua_S, 2, &arg0, "cc.Scale9Sprite:setPreferredSize");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Scale9Sprite_setPreferredSize'", nullptr);
            return 0;
        }
        cobj->setPreferredSize(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scale9Sprite:setPreferredSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setPreferredSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setSpriteFrame(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setSpriteFrame'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::SpriteFrame* arg0;

        ok &= luaval_to_object<cocos2d::SpriteFrame>(tolua_S, 2, "cc.SpriteFrame",&arg0);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Scale9Sprite_setSpriteFrame'", nullptr);
            return 0;
        }
        cobj->setSpriteFrame(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scale9Sprite:setSpriteFrame",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setSpriteFrame'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_initWithBatchNode(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_initWithBatchNode'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 3) {
            cocos2d::SpriteBatchNode* arg0;
            ok &= luaval_to_object<cocos2d::SpriteBatchNode>(tolua_S, 2, "cc.SpriteBatchNode",&arg0);

            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1, "cc.Scale9Sprite:initWithBatchNode");

            if (!ok) { break; }
            cocos2d::Rect arg2;
            ok &= luaval_to_rect(tolua_S, 4, &arg2, "cc.Scale9Sprite:initWithBatchNode");

            if (!ok) { break; }
            bool ret = cobj->initWithBatchNode(arg0, arg1, arg2);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 4) {
            cocos2d::SpriteBatchNode* arg0;
            ok &= luaval_to_object<cocos2d::SpriteBatchNode>(tolua_S, 2, "cc.SpriteBatchNode",&arg0);

            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1, "cc.Scale9Sprite:initWithBatchNode");

            if (!ok) { break; }
            bool arg2;
            ok &= luaval_to_boolean(tolua_S, 4,&arg2, "cc.Scale9Sprite:initWithBatchNode");

            if (!ok) { break; }
            cocos2d::Rect arg3;
            ok &= luaval_to_rect(tolua_S, 5, &arg3, "cc.Scale9Sprite:initWithBatchNode");

            if (!ok) { break; }
            bool ret = cobj->initWithBatchNode(arg0, arg1, arg2, arg3);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.Scale9Sprite:initWithBatchNode",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_initWithBatchNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getInsetBottom(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetBottom'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetBottom'", nullptr);
            return 0;
        }
        double ret = cobj->getInsetBottom();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scale9Sprite:getInsetBottom",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetBottom'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getCapInsets(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getCapInsets'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Scale9Sprite_getCapInsets'", nullptr);
            return 0;
        }
        cocos2d::Rect ret = cobj->getCapInsets();
        rect_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scale9Sprite:getCapInsets",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getCapInsets'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_updateWithBatchNode(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_updateWithBatchNode'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        cocos2d::SpriteBatchNode* arg0;
        cocos2d::Rect arg1;
        bool arg2;
        cocos2d::Rect arg3;

        ok &= luaval_to_object<cocos2d::SpriteBatchNode>(tolua_S, 2, "cc.SpriteBatchNode",&arg0);

        ok &= luaval_to_rect(tolua_S, 3, &arg1, "cc.Scale9Sprite:updateWithBatchNode");

        ok &= luaval_to_boolean(tolua_S, 4,&arg2, "cc.Scale9Sprite:updateWithBatchNode");

        ok &= luaval_to_rect(tolua_S, 5, &arg3, "cc.Scale9Sprite:updateWithBatchNode");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Scale9Sprite_updateWithBatchNode'", nullptr);
            return 0;
        }
        bool ret = cobj->updateWithBatchNode(arg0, arg1, arg2, arg3);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scale9Sprite:updateWithBatchNode",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_updateWithBatchNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getInsetRight(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetRight'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetRight'", nullptr);
            return 0;
        }
        double ret = cobj->getInsetRight();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scale9Sprite:getInsetRight",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetRight'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getOriginalSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getOriginalSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Scale9Sprite_getOriginalSize'", nullptr);
            return 0;
        }
        cocos2d::Size ret = cobj->getOriginalSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scale9Sprite:getOriginalSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getOriginalSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_initWithFile(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_initWithFile'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Scale9Sprite:initWithFile");

            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1, "cc.Scale9Sprite:initWithFile");

            if (!ok) { break; }
            bool ret = cobj->initWithFile(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Scale9Sprite:initWithFile");

            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1, "cc.Scale9Sprite:initWithFile");

            if (!ok) { break; }
            cocos2d::Rect arg2;
            ok &= luaval_to_rect(tolua_S, 4, &arg2, "cc.Scale9Sprite:initWithFile");

            if (!ok) { break; }
            bool ret = cobj->initWithFile(arg0, arg1, arg2);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            cocos2d::Rect arg0;
            ok &= luaval_to_rect(tolua_S, 2, &arg0, "cc.Scale9Sprite:initWithFile");

            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.Scale9Sprite:initWithFile");

            if (!ok) { break; }
            bool ret = cobj->initWithFile(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Scale9Sprite:initWithFile");

            if (!ok) { break; }
            bool ret = cobj->initWithFile(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.Scale9Sprite:initWithFile",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_initWithFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getInsetTop(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetTop'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetTop'", nullptr);
            return 0;
        }
        double ret = cobj->getInsetTop();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scale9Sprite:getInsetTop",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetTop'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setInsetLeft(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetLeft'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Scale9Sprite:setInsetLeft");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetLeft'", nullptr);
            return 0;
        }
        cobj->setInsetLeft(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scale9Sprite:setInsetLeft",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetLeft'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrame(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrame'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 1) {
            cocos2d::SpriteFrame* arg0;
            ok &= luaval_to_object<cocos2d::SpriteFrame>(tolua_S, 2, "cc.SpriteFrame",&arg0);

            if (!ok) { break; }
            bool ret = cobj->initWithSpriteFrame(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            cocos2d::SpriteFrame* arg0;
            ok &= luaval_to_object<cocos2d::SpriteFrame>(tolua_S, 2, "cc.SpriteFrame",&arg0);

            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1, "cc.Scale9Sprite:initWithSpriteFrame");

            if (!ok) { break; }
            bool ret = cobj->initWithSpriteFrame(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.Scale9Sprite:initWithSpriteFrame",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrame'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getPreferredSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getPreferredSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Scale9Sprite_getPreferredSize'", nullptr);
            return 0;
        }
        cocos2d::Size ret = cobj->getPreferredSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scale9Sprite:getPreferredSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getPreferredSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setCapInsets(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setCapInsets'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Rect arg0;

        ok &= luaval_to_rect(tolua_S, 2, &arg0, "cc.Scale9Sprite:setCapInsets");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Scale9Sprite_setCapInsets'", nullptr);
            return 0;
        }
        cobj->setCapInsets(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scale9Sprite:setCapInsets",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setCapInsets'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_getInsetLeft(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetLeft'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetLeft'", nullptr);
            return 0;
        }
        double ret = cobj->getInsetLeft();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scale9Sprite:getInsetLeft",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_getInsetLeft'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_setInsetRight(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Scale9Sprite*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetRight'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.Scale9Sprite:setInsetRight");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetRight'", nullptr);
            return 0;
        }
        cobj->setInsetRight(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scale9Sprite:setInsetRight",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_setInsetRight'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 3)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Scale9Sprite:create");
            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1, "cc.Scale9Sprite:create");
            if (!ok) { break; }
            cocos2d::Rect arg2;
            ok &= luaval_to_rect(tolua_S, 4, &arg2, "cc.Scale9Sprite:create");
            if (!ok) { break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::create(arg0, arg1, arg2);
            object_to_luaval<cocos2d::extension::Scale9Sprite>(tolua_S, "cc.Scale9Sprite",(cocos2d::extension::Scale9Sprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 0)
        {
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::create();
            object_to_luaval<cocos2d::extension::Scale9Sprite>(tolua_S, "cc.Scale9Sprite",(cocos2d::extension::Scale9Sprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 2)
        {
            cocos2d::Rect arg0;
            ok &= luaval_to_rect(tolua_S, 2, &arg0, "cc.Scale9Sprite:create");
            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.Scale9Sprite:create");
            if (!ok) { break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::create(arg0, arg1);
            object_to_luaval<cocos2d::extension::Scale9Sprite>(tolua_S, "cc.Scale9Sprite",(cocos2d::extension::Scale9Sprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 2)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Scale9Sprite:create");
            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1, "cc.Scale9Sprite:create");
            if (!ok) { break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::create(arg0, arg1);
            object_to_luaval<cocos2d::extension::Scale9Sprite>(tolua_S, "cc.Scale9Sprite",(cocos2d::extension::Scale9Sprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 1)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Scale9Sprite:create");
            if (!ok) { break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::create(arg0);
            object_to_luaval<cocos2d::extension::Scale9Sprite>(tolua_S, "cc.Scale9Sprite",(cocos2d::extension::Scale9Sprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "cc.Scale9Sprite:create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_createWithSpriteFrameName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 2)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Scale9Sprite:createWithSpriteFrameName");
            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1, "cc.Scale9Sprite:createWithSpriteFrameName");
            if (!ok) { break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::createWithSpriteFrameName(arg0, arg1);
            object_to_luaval<cocos2d::extension::Scale9Sprite>(tolua_S, "cc.Scale9Sprite",(cocos2d::extension::Scale9Sprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 1)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.Scale9Sprite:createWithSpriteFrameName");
            if (!ok) { break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::createWithSpriteFrameName(arg0);
            object_to_luaval<cocos2d::extension::Scale9Sprite>(tolua_S, "cc.Scale9Sprite",(cocos2d::extension::Scale9Sprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "cc.Scale9Sprite:createWithSpriteFrameName",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_createWithSpriteFrameName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_createWithSpriteFrame(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.Scale9Sprite",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 2)
        {
            cocos2d::SpriteFrame* arg0;
            ok &= luaval_to_object<cocos2d::SpriteFrame>(tolua_S, 2, "cc.SpriteFrame",&arg0);
            if (!ok) { break; }
            cocos2d::Rect arg1;
            ok &= luaval_to_rect(tolua_S, 3, &arg1, "cc.Scale9Sprite:createWithSpriteFrame");
            if (!ok) { break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::createWithSpriteFrame(arg0, arg1);
            object_to_luaval<cocos2d::extension::Scale9Sprite>(tolua_S, "cc.Scale9Sprite",(cocos2d::extension::Scale9Sprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 1)
        {
            cocos2d::SpriteFrame* arg0;
            ok &= luaval_to_object<cocos2d::SpriteFrame>(tolua_S, 2, "cc.SpriteFrame",&arg0);
            if (!ok) { break; }
            cocos2d::extension::Scale9Sprite* ret = cocos2d::extension::Scale9Sprite::createWithSpriteFrame(arg0);
            object_to_luaval<cocos2d::extension::Scale9Sprite>(tolua_S, "cc.Scale9Sprite",(cocos2d::extension::Scale9Sprite*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "cc.Scale9Sprite:createWithSpriteFrame",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_createWithSpriteFrame'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_Scale9Sprite_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Scale9Sprite* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Scale9Sprite_constructor'", nullptr);
            return 0;
        }
        cobj = new cocos2d::extension::Scale9Sprite();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"cc.Scale9Sprite");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Scale9Sprite:Scale9Sprite",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Scale9Sprite_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_extension_Scale9Sprite_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Scale9Sprite)");
    return 0;
}

int lua_register_cocos2dx_extension_Scale9Sprite(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.Scale9Sprite");
    tolua_cclass(tolua_S,"Scale9Sprite","cc.Scale9Sprite","cc.Node",nullptr);

    tolua_beginmodule(tolua_S,"Scale9Sprite");
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_Scale9Sprite_constructor);
        tolua_function(tolua_S,"resizableSpriteWithCapInsets",lua_cocos2dx_extension_Scale9Sprite_resizableSpriteWithCapInsets);
        tolua_function(tolua_S,"setInsetBottom",lua_cocos2dx_extension_Scale9Sprite_setInsetBottom);
        tolua_function(tolua_S,"initWithSpriteFrameName",lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrameName);
        tolua_function(tolua_S,"setInsetTop",lua_cocos2dx_extension_Scale9Sprite_setInsetTop);
        tolua_function(tolua_S,"init",lua_cocos2dx_extension_Scale9Sprite_init);
        tolua_function(tolua_S,"setPreferredSize",lua_cocos2dx_extension_Scale9Sprite_setPreferredSize);
        tolua_function(tolua_S,"setSpriteFrame",lua_cocos2dx_extension_Scale9Sprite_setSpriteFrame);
        tolua_function(tolua_S,"initWithBatchNode",lua_cocos2dx_extension_Scale9Sprite_initWithBatchNode);
        tolua_function(tolua_S,"getInsetBottom",lua_cocos2dx_extension_Scale9Sprite_getInsetBottom);
        tolua_function(tolua_S,"getCapInsets",lua_cocos2dx_extension_Scale9Sprite_getCapInsets);
        tolua_function(tolua_S,"updateWithBatchNode",lua_cocos2dx_extension_Scale9Sprite_updateWithBatchNode);
        tolua_function(tolua_S,"getInsetRight",lua_cocos2dx_extension_Scale9Sprite_getInsetRight);
        tolua_function(tolua_S,"getOriginalSize",lua_cocos2dx_extension_Scale9Sprite_getOriginalSize);
        tolua_function(tolua_S,"initWithFile",lua_cocos2dx_extension_Scale9Sprite_initWithFile);
        tolua_function(tolua_S,"getInsetTop",lua_cocos2dx_extension_Scale9Sprite_getInsetTop);
        tolua_function(tolua_S,"setInsetLeft",lua_cocos2dx_extension_Scale9Sprite_setInsetLeft);
        tolua_function(tolua_S,"initWithSpriteFrame",lua_cocos2dx_extension_Scale9Sprite_initWithSpriteFrame);
        tolua_function(tolua_S,"getPreferredSize",lua_cocos2dx_extension_Scale9Sprite_getPreferredSize);
        tolua_function(tolua_S,"setCapInsets",lua_cocos2dx_extension_Scale9Sprite_setCapInsets);
        tolua_function(tolua_S,"getInsetLeft",lua_cocos2dx_extension_Scale9Sprite_getInsetLeft);
        tolua_function(tolua_S,"setInsetRight",lua_cocos2dx_extension_Scale9Sprite_setInsetRight);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_Scale9Sprite_create);
        tolua_function(tolua_S,"createWithSpriteFrameName", lua_cocos2dx_extension_Scale9Sprite_createWithSpriteFrameName);
        tolua_function(tolua_S,"createWithSpriteFrame", lua_cocos2dx_extension_Scale9Sprite_createWithSpriteFrame);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::extension::Scale9Sprite).name();
    g_luaType[typeName] = "cc.Scale9Sprite";
    g_typeCast["Scale9Sprite"] = "cc.Scale9Sprite";
    return 1;
}

int lua_cocos2dx_extension_ControlUtils_RectUnion(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.ControlUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::Rect arg0;
        cocos2d::Rect arg1;
        ok &= luaval_to_rect(tolua_S, 2, &arg0, "cc.ControlUtils:RectUnion");
        ok &= luaval_to_rect(tolua_S, 3, &arg1, "cc.ControlUtils:RectUnion");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlUtils_RectUnion'", nullptr);
            return 0;
        }
        cocos2d::Rect ret = cocos2d::extension::ControlUtils::RectUnion(arg0, arg1);
        rect_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "cc.ControlUtils:RectUnion",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlUtils_RectUnion'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlUtils_RGBfromHSV(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.ControlUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocos2d::extension::HSV arg0;
        #pragma warning NO CONVERSION TO NATIVE FOR HSV
		ok = false;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlUtils_RGBfromHSV'", nullptr);
            return 0;
        }
        cocos2d::extension::RGBA ret = cocos2d::extension::ControlUtils::RGBfromHSV(arg0);
        #pragma warning NO CONVERSION FROM NATIVE FOR RGBA;
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "cc.ControlUtils:RGBfromHSV",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlUtils_RGBfromHSV'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlUtils_addSpriteToTargetWithPosAndAnchor(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.ControlUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 4)
    {
        const char* arg0;
        cocos2d::Node* arg1;
        cocos2d::Vec2 arg2;
        cocos2d::Vec2 arg3;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "cc.ControlUtils:addSpriteToTargetWithPosAndAnchor"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 3, "cc.Node",&arg1);
        ok &= luaval_to_vec2(tolua_S, 4, &arg2, "cc.ControlUtils:addSpriteToTargetWithPosAndAnchor");
        ok &= luaval_to_vec2(tolua_S, 5, &arg3, "cc.ControlUtils:addSpriteToTargetWithPosAndAnchor");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlUtils_addSpriteToTargetWithPosAndAnchor'", nullptr);
            return 0;
        }
        cocos2d::Sprite* ret = cocos2d::extension::ControlUtils::addSpriteToTargetWithPosAndAnchor(arg0, arg1, arg2, arg3);
        object_to_luaval<cocos2d::Sprite>(tolua_S, "cc.Sprite",(cocos2d::Sprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "cc.ControlUtils:addSpriteToTargetWithPosAndAnchor",argc, 4);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlUtils_addSpriteToTargetWithPosAndAnchor'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ControlUtils_HSVfromRGB(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.ControlUtils",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        cocos2d::extension::RGBA arg0;
        #pragma warning NO CONVERSION TO NATIVE FOR RGBA
		ok = false;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlUtils_HSVfromRGB'", nullptr);
            return 0;
        }
        cocos2d::extension::HSV ret = cocos2d::extension::ControlUtils::HSVfromRGB(arg0);
        #pragma warning NO CONVERSION FROM NATIVE FOR HSV;
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "cc.ControlUtils:HSVfromRGB",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlUtils_HSVfromRGB'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_extension_ControlUtils_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ControlUtils)");
    return 0;
}

int lua_register_cocos2dx_extension_ControlUtils(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.ControlUtils");
    tolua_cclass(tolua_S,"ControlUtils","cc.ControlUtils","",nullptr);

    tolua_beginmodule(tolua_S,"ControlUtils");
        tolua_function(tolua_S,"RectUnion", lua_cocos2dx_extension_ControlUtils_RectUnion);
        tolua_function(tolua_S,"RGBfromHSV", lua_cocos2dx_extension_ControlUtils_RGBfromHSV);
        tolua_function(tolua_S,"addSpriteToTargetWithPosAndAnchor", lua_cocos2dx_extension_ControlUtils_addSpriteToTargetWithPosAndAnchor);
        tolua_function(tolua_S,"HSVfromRGB", lua_cocos2dx_extension_ControlUtils_HSVfromRGB);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::extension::ControlUtils).name();
    g_luaType[typeName] = "cc.ControlUtils";
    g_typeCast["ControlUtils"] = "cc.ControlUtils";
    return 1;
}

int lua_cocos2dx_extension_Control_setEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_setEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.Control:setEnabled");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Control_setEnabled'", nullptr);
            return 0;
        }
        cobj->setEnabled(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Control:setEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_setEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_onTouchMoved(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_onTouchMoved'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;

        ok &= luaval_to_object<cocos2d::Touch>(tolua_S, 2, "cc.Touch",&arg0);

        ok &= luaval_to_object<cocos2d::Event>(tolua_S, 3, "cc.Event",&arg1);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Control_onTouchMoved'", nullptr);
            return 0;
        }
        cobj->onTouchMoved(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Control:onTouchMoved",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_onTouchMoved'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_getState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_getState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Control_getState'", nullptr);
            return 0;
        }
        int ret = (int)cobj->getState();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Control:getState",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_getState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_onTouchEnded(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_onTouchEnded'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;

        ok &= luaval_to_object<cocos2d::Touch>(tolua_S, 2, "cc.Touch",&arg0);

        ok &= luaval_to_object<cocos2d::Event>(tolua_S, 3, "cc.Event",&arg1);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Control_onTouchEnded'", nullptr);
            return 0;
        }
        cobj->onTouchEnded(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Control:onTouchEnded",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_onTouchEnded'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_sendActionsForControlEvents(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_sendActionsForControlEvents'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::EventType arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.Control:sendActionsForControlEvents");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Control_sendActionsForControlEvents'", nullptr);
            return 0;
        }
        cobj->sendActionsForControlEvents(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Control:sendActionsForControlEvents",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_sendActionsForControlEvents'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_setSelected(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_setSelected'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.Control:setSelected");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Control_setSelected'", nullptr);
            return 0;
        }
        cobj->setSelected(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Control:setSelected",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_setSelected'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_isEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_isEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Control_isEnabled'", nullptr);
            return 0;
        }
        bool ret = cobj->isEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Control:isEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_isEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_onTouchCancelled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_onTouchCancelled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;

        ok &= luaval_to_object<cocos2d::Touch>(tolua_S, 2, "cc.Touch",&arg0);

        ok &= luaval_to_object<cocos2d::Event>(tolua_S, 3, "cc.Event",&arg1);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Control_onTouchCancelled'", nullptr);
            return 0;
        }
        cobj->onTouchCancelled(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Control:onTouchCancelled",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_onTouchCancelled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_needsLayout(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_needsLayout'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Control_needsLayout'", nullptr);
            return 0;
        }
        cobj->needsLayout();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Control:needsLayout",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_needsLayout'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_onTouchBegan(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_onTouchBegan'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;

        ok &= luaval_to_object<cocos2d::Touch>(tolua_S, 2, "cc.Touch",&arg0);

        ok &= luaval_to_object<cocos2d::Event>(tolua_S, 3, "cc.Event",&arg1);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Control_onTouchBegan'", nullptr);
            return 0;
        }
        bool ret = cobj->onTouchBegan(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Control:onTouchBegan",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_onTouchBegan'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_hasVisibleParents(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_hasVisibleParents'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Control_hasVisibleParents'", nullptr);
            return 0;
        }
        bool ret = cobj->hasVisibleParents();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Control:hasVisibleParents",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_hasVisibleParents'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_isSelected(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_isSelected'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Control_isSelected'", nullptr);
            return 0;
        }
        bool ret = cobj->isSelected();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Control:isSelected",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_isSelected'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_isTouchInside(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_isTouchInside'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Touch* arg0;

        ok &= luaval_to_object<cocos2d::Touch>(tolua_S, 2, "cc.Touch",&arg0);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Control_isTouchInside'", nullptr);
            return 0;
        }
        bool ret = cobj->isTouchInside(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Control:isTouchInside",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_isTouchInside'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_setHighlighted(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_setHighlighted'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.Control:setHighlighted");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Control_setHighlighted'", nullptr);
            return 0;
        }
        cobj->setHighlighted(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Control:setHighlighted",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_setHighlighted'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_getTouchLocation(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_getTouchLocation'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Touch* arg0;

        ok &= luaval_to_object<cocos2d::Touch>(tolua_S, 2, "cc.Touch",&arg0);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Control_getTouchLocation'", nullptr);
            return 0;
        }
        cocos2d::Vec2 ret = cobj->getTouchLocation(arg0);
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Control:getTouchLocation",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_getTouchLocation'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_isHighlighted(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::Control* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.Control",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::Control*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_Control_isHighlighted'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Control_isHighlighted'", nullptr);
            return 0;
        }
        bool ret = cobj->isHighlighted();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.Control:isHighlighted",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_isHighlighted'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_Control_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.Control",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_Control_create'", nullptr);
            return 0;
        }
        cocos2d::extension::Control* ret = cocos2d::extension::Control::create();
        object_to_luaval<cocos2d::extension::Control>(tolua_S, "cc.Control",(cocos2d::extension::Control*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "cc.Control:create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_Control_create'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_extension_Control_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Control)");
    return 0;
}

int lua_register_cocos2dx_extension_Control(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.Control");
    tolua_cclass(tolua_S,"Control","cc.Control","cc.Layer",nullptr);

    tolua_beginmodule(tolua_S,"Control");
        tolua_function(tolua_S,"setEnabled",lua_cocos2dx_extension_Control_setEnabled);
        tolua_function(tolua_S,"onTouchMoved",lua_cocos2dx_extension_Control_onTouchMoved);
        tolua_function(tolua_S,"getState",lua_cocos2dx_extension_Control_getState);
        tolua_function(tolua_S,"onTouchEnded",lua_cocos2dx_extension_Control_onTouchEnded);
        tolua_function(tolua_S,"sendActionsForControlEvents",lua_cocos2dx_extension_Control_sendActionsForControlEvents);
        tolua_function(tolua_S,"setSelected",lua_cocos2dx_extension_Control_setSelected);
        tolua_function(tolua_S,"isEnabled",lua_cocos2dx_extension_Control_isEnabled);
        tolua_function(tolua_S,"onTouchCancelled",lua_cocos2dx_extension_Control_onTouchCancelled);
        tolua_function(tolua_S,"needsLayout",lua_cocos2dx_extension_Control_needsLayout);
        tolua_function(tolua_S,"onTouchBegan",lua_cocos2dx_extension_Control_onTouchBegan);
        tolua_function(tolua_S,"hasVisibleParents",lua_cocos2dx_extension_Control_hasVisibleParents);
        tolua_function(tolua_S,"isSelected",lua_cocos2dx_extension_Control_isSelected);
        tolua_function(tolua_S,"isTouchInside",lua_cocos2dx_extension_Control_isTouchInside);
        tolua_function(tolua_S,"setHighlighted",lua_cocos2dx_extension_Control_setHighlighted);
        tolua_function(tolua_S,"getTouchLocation",lua_cocos2dx_extension_Control_getTouchLocation);
        tolua_function(tolua_S,"isHighlighted",lua_cocos2dx_extension_Control_isHighlighted);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_Control_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::extension::Control).name();
    g_luaType[typeName] = "cc.Control";
    g_typeCast["Control"] = "cc.Control";
    return 1;
}

int lua_cocos2dx_extension_ControlButton_isPushed(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_isPushed'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_isPushed'", nullptr);
            return 0;
        }
        bool ret = cobj->isPushed();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:isPushed",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_isPushed'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setSelected(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setSelected'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.ControlButton:setSelected");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_setSelected'", nullptr);
            return 0;
        }
        cobj->setSelected(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:setSelected",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setSelected'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleLabelForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleLabelForState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Node* arg0;
        cocos2d::extension::Control::State arg1;

        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0);

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "cc.ControlButton:setTitleLabelForState");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_setTitleLabelForState'", nullptr);
            return 0;
        }
        cobj->setTitleLabelForState(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:setTitleLabelForState",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleLabelForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setAdjustBackgroundImage(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setAdjustBackgroundImage'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.ControlButton:setAdjustBackgroundImage");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_setAdjustBackgroundImage'", nullptr);
            return 0;
        }
        cobj->setAdjustBackgroundImage(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:setAdjustBackgroundImage",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setAdjustBackgroundImage'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setHighlighted(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setHighlighted'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.ControlButton:setHighlighted");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_setHighlighted'", nullptr);
            return 0;
        }
        cobj->setHighlighted(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:setHighlighted",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setHighlighted'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setZoomOnTouchDown(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setZoomOnTouchDown'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.ControlButton:setZoomOnTouchDown");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_setZoomOnTouchDown'", nullptr);
            return 0;
        }
        cobj->setZoomOnTouchDown(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:setZoomOnTouchDown",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setZoomOnTouchDown'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleForState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        cocos2d::extension::Control::State arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.ControlButton:setTitleForState");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "cc.ControlButton:setTitleForState");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_setTitleForState'", nullptr);
            return 0;
        }
        cobj->setTitleForState(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:setTitleForState",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setLabelAnchorPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setLabelAnchorPoint'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "cc.ControlButton:setLabelAnchorPoint");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_setLabelAnchorPoint'", nullptr);
            return 0;
        }
        cobj->setLabelAnchorPoint(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:setLabelAnchorPoint",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setLabelAnchorPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getLabelAnchorPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getLabelAnchorPoint'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_getLabelAnchorPoint'", nullptr);
            return 0;
        }
        const cocos2d::Vec2& ret = cobj->getLabelAnchorPoint();
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:getLabelAnchorPoint",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getLabelAnchorPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleTTFSizeForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleTTFSizeForState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::State arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.ControlButton:getTitleTTFSizeForState");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_getTitleTTFSizeForState'", nullptr);
            return 0;
        }
        double ret = cobj->getTitleTTFSizeForState(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:getTitleTTFSizeForState",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleTTFSizeForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleTTFForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleTTFForState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        cocos2d::extension::Control::State arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.ControlButton:setTitleTTFForState");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "cc.ControlButton:setTitleTTFForState");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_setTitleTTFForState'", nullptr);
            return 0;
        }
        cobj->setTitleTTFForState(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:setTitleTTFForState",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleTTFForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleTTFSizeForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleTTFSizeForState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        cocos2d::extension::Control::State arg1;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.ControlButton:setTitleTTFSizeForState");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "cc.ControlButton:setTitleTTFSizeForState");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_setTitleTTFSizeForState'", nullptr);
            return 0;
        }
        cobj->setTitleTTFSizeForState(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:setTitleTTFSizeForState",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleTTFSizeForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleLabel(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleLabel'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Node* arg0;

        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_setTitleLabel'", nullptr);
            return 0;
        }
        cobj->setTitleLabel(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:setTitleLabel",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleLabel'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setPreferredSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setPreferredSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;

        ok &= luaval_to_size(tolua_S, 2, &arg0, "cc.ControlButton:setPreferredSize");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_setPreferredSize'", nullptr);
            return 0;
        }
        cobj->setPreferredSize(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:setPreferredSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setPreferredSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getCurrentTitleColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getCurrentTitleColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_getCurrentTitleColor'", nullptr);
            return 0;
        }
        const cocos2d::Color3B& ret = cobj->getCurrentTitleColor();
        color3b_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:getCurrentTitleColor",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getCurrentTitleColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.ControlButton:setEnabled");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_setEnabled'", nullptr);
            return 0;
        }
        cobj->setEnabled(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:setEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getBackgroundSpriteForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getBackgroundSpriteForState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::State arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.ControlButton:getBackgroundSpriteForState");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_getBackgroundSpriteForState'", nullptr);
            return 0;
        }
        cocos2d::extension::Scale9Sprite* ret = cobj->getBackgroundSpriteForState(arg0);
        object_to_luaval<cocos2d::extension::Scale9Sprite>(tolua_S, "cc.Scale9Sprite",(cocos2d::extension::Scale9Sprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:getBackgroundSpriteForState",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getBackgroundSpriteForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getHorizontalOrigin(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getHorizontalOrigin'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_getHorizontalOrigin'", nullptr);
            return 0;
        }
        int ret = cobj->getHorizontalOrigin();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:getHorizontalOrigin",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getHorizontalOrigin'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_needsLayout(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_needsLayout'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_needsLayout'", nullptr);
            return 0;
        }
        cobj->needsLayout();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:needsLayout",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_needsLayout'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getCurrentTitle(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getCurrentTitle'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 0) {
            std::string ret = cobj->getCurrentTitle();
            tolua_pushcppstring(tolua_S,ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 0) {
            const std::string& ret = cobj->getCurrentTitle();
            tolua_pushcppstring(tolua_S,ret);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.ControlButton:getCurrentTitle",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getCurrentTitle'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getScaleRatio(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getScaleRatio'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_getScaleRatio'", nullptr);
            return 0;
        }
        double ret = cobj->getScaleRatio();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:getScaleRatio",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getScaleRatio'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleTTFForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleTTFForState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::State arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.ControlButton:getTitleTTFForState");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_getTitleTTFForState'", nullptr);
            return 0;
        }
        const std::string& ret = cobj->getTitleTTFForState(arg0);
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:getTitleTTFForState",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleTTFForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getBackgroundSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getBackgroundSprite'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_getBackgroundSprite'", nullptr);
            return 0;
        }
        cocos2d::extension::Scale9Sprite* ret = cobj->getBackgroundSprite();
        object_to_luaval<cocos2d::extension::Scale9Sprite>(tolua_S, "cc.Scale9Sprite",(cocos2d::extension::Scale9Sprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:getBackgroundSprite",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getBackgroundSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleColorForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleColorForState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::State arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.ControlButton:getTitleColorForState");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_getTitleColorForState'", nullptr);
            return 0;
        }
        cocos2d::Color3B ret = cobj->getTitleColorForState(arg0);
        color3b_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:getTitleColorForState",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleColorForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleColorForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleColorForState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Color3B arg0;
        cocos2d::extension::Control::State arg1;

        ok &= luaval_to_color3b(tolua_S, 2, &arg0, "cc.ControlButton:setTitleColorForState");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "cc.ControlButton:setTitleColorForState");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_setTitleColorForState'", nullptr);
            return 0;
        }
        cobj->setTitleColorForState(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:setTitleColorForState",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleColorForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_doesAdjustBackgroundImage(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_doesAdjustBackgroundImage'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_doesAdjustBackgroundImage'", nullptr);
            return 0;
        }
        bool ret = cobj->doesAdjustBackgroundImage();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:doesAdjustBackgroundImage",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_doesAdjustBackgroundImage'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setBackgroundSpriteFrameForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSpriteFrameForState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::SpriteFrame* arg0;
        cocos2d::extension::Control::State arg1;

        ok &= luaval_to_object<cocos2d::SpriteFrame>(tolua_S, 2, "cc.SpriteFrame",&arg0);

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "cc.ControlButton:setBackgroundSpriteFrameForState");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSpriteFrameForState'", nullptr);
            return 0;
        }
        cobj->setBackgroundSpriteFrameForState(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:setBackgroundSpriteFrameForState",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSpriteFrameForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setBackgroundSpriteForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSpriteForState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::extension::Scale9Sprite* arg0;
        cocos2d::extension::Control::State arg1;

        ok &= luaval_to_object<cocos2d::extension::Scale9Sprite>(tolua_S, 2, "cc.Scale9Sprite",&arg0);

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "cc.ControlButton:setBackgroundSpriteForState");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSpriteForState'", nullptr);
            return 0;
        }
        cobj->setBackgroundSpriteForState(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:setBackgroundSpriteForState",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSpriteForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setScaleRatio(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setScaleRatio'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.ControlButton:setScaleRatio");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_setScaleRatio'", nullptr);
            return 0;
        }
        cobj->setScaleRatio(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:setScaleRatio",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setScaleRatio'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setBackgroundSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSprite'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Scale9Sprite* arg0;

        ok &= luaval_to_object<cocos2d::extension::Scale9Sprite>(tolua_S, 2, "cc.Scale9Sprite",&arg0);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSprite'", nullptr);
            return 0;
        }
        cobj->setBackgroundSprite(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:setBackgroundSprite",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setBackgroundSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleLabel(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleLabel'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_getTitleLabel'", nullptr);
            return 0;
        }
        cocos2d::Node* ret = cobj->getTitleLabel();
        object_to_luaval<cocos2d::Node>(tolua_S, "cc.Node",(cocos2d::Node*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:getTitleLabel",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleLabel'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getPreferredSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getPreferredSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_getPreferredSize'", nullptr);
            return 0;
        }
        const cocos2d::Size& ret = cobj->getPreferredSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:getPreferredSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getPreferredSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getVerticalMargin(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getVerticalMargin'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_getVerticalMargin'", nullptr);
            return 0;
        }
        int ret = cobj->getVerticalMargin();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:getVerticalMargin",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getVerticalMargin'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleLabelForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleLabelForState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::State arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.ControlButton:getTitleLabelForState");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_getTitleLabelForState'", nullptr);
            return 0;
        }
        cocos2d::Node* ret = cobj->getTitleLabelForState(arg0);
        object_to_luaval<cocos2d::Node>(tolua_S, "cc.Node",(cocos2d::Node*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:getTitleLabelForState",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleLabelForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setMargins(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setMargins'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        int arg0;
        int arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.ControlButton:setMargins");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "cc.ControlButton:setMargins");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_setMargins'", nullptr);
            return 0;
        }
        cobj->setMargins(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:setMargins",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setMargins'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_setTitleBMFontForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_setTitleBMFontForState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        cocos2d::extension::Control::State arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.ControlButton:setTitleBMFontForState");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "cc.ControlButton:setTitleBMFontForState");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_setTitleBMFontForState'", nullptr);
            return 0;
        }
        cobj->setTitleBMFontForState(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:setTitleBMFontForState",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_setTitleBMFontForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleBMFontForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleBMFontForState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::State arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.ControlButton:getTitleBMFontForState");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_getTitleBMFontForState'", nullptr);
            return 0;
        }
        const std::string& ret = cobj->getTitleBMFontForState(arg0);
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:getTitleBMFontForState",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleBMFontForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getZoomOnTouchDown(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getZoomOnTouchDown'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_getZoomOnTouchDown'", nullptr);
            return 0;
        }
        bool ret = cobj->getZoomOnTouchDown();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:getZoomOnTouchDown",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getZoomOnTouchDown'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_getTitleForState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ControlButton* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ControlButton*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ControlButton_getTitleForState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::Control::State arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.ControlButton:getTitleForState");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ControlButton_getTitleForState'", nullptr);
            return 0;
        }
        std::string ret = cobj->getTitleForState(arg0);
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ControlButton:getTitleForState",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_getTitleForState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ControlButton_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.ControlButton",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 1)
        {
            cocos2d::extension::Scale9Sprite* arg0;
            ok &= luaval_to_object<cocos2d::extension::Scale9Sprite>(tolua_S, 2, "cc.Scale9Sprite",&arg0);
            if (!ok) { break; }
            cocos2d::extension::ControlButton* ret = cocos2d::extension::ControlButton::create(arg0);
            object_to_luaval<cocos2d::extension::ControlButton>(tolua_S, "cc.ControlButton",(cocos2d::extension::ControlButton*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 0)
        {
            cocos2d::extension::ControlButton* ret = cocos2d::extension::ControlButton::create();
            object_to_luaval<cocos2d::extension::ControlButton>(tolua_S, "cc.ControlButton",(cocos2d::extension::ControlButton*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 2)
        {
            cocos2d::Node* arg0;
            ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0);
            if (!ok) { break; }
            cocos2d::extension::Scale9Sprite* arg1;
            ok &= luaval_to_object<cocos2d::extension::Scale9Sprite>(tolua_S, 3, "cc.Scale9Sprite",&arg1);
            if (!ok) { break; }
            cocos2d::extension::ControlButton* ret = cocos2d::extension::ControlButton::create(arg0, arg1);
            object_to_luaval<cocos2d::extension::ControlButton>(tolua_S, "cc.ControlButton",(cocos2d::extension::ControlButton*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 3)
        {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "cc.ControlButton:create");
            if (!ok) { break; }
            std::string arg1;
            ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.ControlButton:create");
            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "cc.ControlButton:create");
            if (!ok) { break; }
            cocos2d::extension::ControlButton* ret = cocos2d::extension::ControlButton::create(arg0, arg1, arg2);
            object_to_luaval<cocos2d::extension::ControlButton>(tolua_S, "cc.ControlButton",(cocos2d::extension::ControlButton*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "cc.ControlButton:create",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ControlButton_create'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_extension_ControlButton_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ControlButton)");
    return 0;
}

int lua_register_cocos2dx_extension_ControlButton(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.ControlButton");
    tolua_cclass(tolua_S,"ControlButton","cc.ControlButton","cc.Control",nullptr);

    tolua_beginmodule(tolua_S,"ControlButton");
        tolua_function(tolua_S,"isPushed",lua_cocos2dx_extension_ControlButton_isPushed);
        tolua_function(tolua_S,"setSelected",lua_cocos2dx_extension_ControlButton_setSelected);
        tolua_function(tolua_S,"setTitleLabelForState",lua_cocos2dx_extension_ControlButton_setTitleLabelForState);
        tolua_function(tolua_S,"setAdjustBackgroundImage",lua_cocos2dx_extension_ControlButton_setAdjustBackgroundImage);
        tolua_function(tolua_S,"setHighlighted",lua_cocos2dx_extension_ControlButton_setHighlighted);
        tolua_function(tolua_S,"setZoomOnTouchDown",lua_cocos2dx_extension_ControlButton_setZoomOnTouchDown);
        tolua_function(tolua_S,"setTitleForState",lua_cocos2dx_extension_ControlButton_setTitleForState);
        tolua_function(tolua_S,"setLabelAnchorPoint",lua_cocos2dx_extension_ControlButton_setLabelAnchorPoint);
        tolua_function(tolua_S,"getLabelAnchorPoint",lua_cocos2dx_extension_ControlButton_getLabelAnchorPoint);
        tolua_function(tolua_S,"getTitleTTFSizeForState",lua_cocos2dx_extension_ControlButton_getTitleTTFSizeForState);
        tolua_function(tolua_S,"setTitleTTFForState",lua_cocos2dx_extension_ControlButton_setTitleTTFForState);
        tolua_function(tolua_S,"setTitleTTFSizeForState",lua_cocos2dx_extension_ControlButton_setTitleTTFSizeForState);
        tolua_function(tolua_S,"setTitleLabel",lua_cocos2dx_extension_ControlButton_setTitleLabel);
        tolua_function(tolua_S,"setPreferredSize",lua_cocos2dx_extension_ControlButton_setPreferredSize);
        tolua_function(tolua_S,"getCurrentTitleColor",lua_cocos2dx_extension_ControlButton_getCurrentTitleColor);
        tolua_function(tolua_S,"setEnabled",lua_cocos2dx_extension_ControlButton_setEnabled);
        tolua_function(tolua_S,"getBackgroundSpriteForState",lua_cocos2dx_extension_ControlButton_getBackgroundSpriteForState);
        tolua_function(tolua_S,"getHorizontalOrigin",lua_cocos2dx_extension_ControlButton_getHorizontalOrigin);
        tolua_function(tolua_S,"needsLayout",lua_cocos2dx_extension_ControlButton_needsLayout);
        tolua_function(tolua_S,"getCurrentTitle",lua_cocos2dx_extension_ControlButton_getCurrentTitle);
        tolua_function(tolua_S,"getScaleRatio",lua_cocos2dx_extension_ControlButton_getScaleRatio);
        tolua_function(tolua_S,"getTitleTTFForState",lua_cocos2dx_extension_ControlButton_getTitleTTFForState);
        tolua_function(tolua_S,"getBackgroundSprite",lua_cocos2dx_extension_ControlButton_getBackgroundSprite);
        tolua_function(tolua_S,"getTitleColorForState",lua_cocos2dx_extension_ControlButton_getTitleColorForState);
        tolua_function(tolua_S,"setTitleColorForState",lua_cocos2dx_extension_ControlButton_setTitleColorForState);
        tolua_function(tolua_S,"doesAdjustBackgroundImage",lua_cocos2dx_extension_ControlButton_doesAdjustBackgroundImage);
        tolua_function(tolua_S,"setBackgroundSpriteFrameForState",lua_cocos2dx_extension_ControlButton_setBackgroundSpriteFrameForState);
        tolua_function(tolua_S,"setBackgroundSpriteForState",lua_cocos2dx_extension_ControlButton_setBackgroundSpriteForState);
        tolua_function(tolua_S,"setScaleRatio",lua_cocos2dx_extension_ControlButton_setScaleRatio);
        tolua_function(tolua_S,"setBackgroundSprite",lua_cocos2dx_extension_ControlButton_setBackgroundSprite);
        tolua_function(tolua_S,"getTitleLabel",lua_cocos2dx_extension_ControlButton_getTitleLabel);
        tolua_function(tolua_S,"getPreferredSize",lua_cocos2dx_extension_ControlButton_getPreferredSize);
        tolua_function(tolua_S,"getVerticalMargin",lua_cocos2dx_extension_ControlButton_getVerticalMargin);
        tolua_function(tolua_S,"getTitleLabelForState",lua_cocos2dx_extension_ControlButton_getTitleLabelForState);
        tolua_function(tolua_S,"setMargins",lua_cocos2dx_extension_ControlButton_setMargins);
        tolua_function(tolua_S,"setTitleBMFontForState",lua_cocos2dx_extension_ControlButton_setTitleBMFontForState);
        tolua_function(tolua_S,"getTitleBMFontForState",lua_cocos2dx_extension_ControlButton_getTitleBMFontForState);
        tolua_function(tolua_S,"getZoomOnTouchDown",lua_cocos2dx_extension_ControlButton_getZoomOnTouchDown);
        tolua_function(tolua_S,"getTitleForState",lua_cocos2dx_extension_ControlButton_getTitleForState);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ControlButton_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::extension::ControlButton).name();
    g_luaType[typeName] = "cc.ControlButton";
    g_typeCast["ControlButton"] = "cc.ControlButton";
    return 1;
}

int lua_cocos2dx_extension_EditBox_keyboardDidShow(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_keyboardDidShow'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::IMEKeyboardNotificationInfo arg0;

        #pragma warning NO CONVERSION TO NATIVE FOR IMEKeyboardNotificationInfo
		ok = false;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_keyboardDidShow'", nullptr);
            return 0;
        }
        cobj->keyboardDidShow(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:keyboardDidShow",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_keyboardDidShow'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_getScriptEditBoxHandler(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_getScriptEditBoxHandler'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_getScriptEditBoxHandler'", nullptr);
            return 0;
        }
        int ret = cobj->getScriptEditBoxHandler();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:getScriptEditBoxHandler",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_getScriptEditBoxHandler'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_getText(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_getText'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_getText'", nullptr);
            return 0;
        }
        const char* ret = cobj->getText();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:getText",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_getText'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_keyboardDidHide(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_keyboardDidHide'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::IMEKeyboardNotificationInfo arg0;

        #pragma warning NO CONVERSION TO NATIVE FOR IMEKeyboardNotificationInfo
		ok = false;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_keyboardDidHide'", nullptr);
            return 0;
        }
        cobj->keyboardDidHide(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:keyboardDidHide",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_keyboardDidHide'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setPlaceholderFontName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFontName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "cc.EditBox:setPlaceholderFontName"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFontName'", nullptr);
            return 0;
        }
        cobj->setPlaceholderFontName(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:setPlaceholderFontName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFontName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_getPlaceHolder(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_getPlaceHolder'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_getPlaceHolder'", nullptr);
            return 0;
        }
        const char* ret = cobj->getPlaceHolder();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:getPlaceHolder",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_getPlaceHolder'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setFontName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setFontName'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "cc.EditBox:setFontName"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_setFontName'", nullptr);
            return 0;
        }
        cobj->setFontName(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:setFontName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setFontName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_registerScriptEditBoxHandler(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_registerScriptEditBoxHandler'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.EditBox:registerScriptEditBoxHandler");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_registerScriptEditBoxHandler'", nullptr);
            return 0;
        }
        cobj->registerScriptEditBoxHandler(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:registerScriptEditBoxHandler",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_registerScriptEditBoxHandler'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setPlaceholderFontSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFontSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.EditBox:setPlaceholderFontSize");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFontSize'", nullptr);
            return 0;
        }
        cobj->setPlaceholderFontSize(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:setPlaceholderFontSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFontSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setInputMode(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setInputMode'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::EditBox::InputMode arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.EditBox:setInputMode");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_setInputMode'", nullptr);
            return 0;
        }
        cobj->setInputMode(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:setInputMode",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setInputMode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_unregisterScriptEditBoxHandler(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_unregisterScriptEditBoxHandler'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_unregisterScriptEditBoxHandler'", nullptr);
            return 0;
        }
        cobj->unregisterScriptEditBoxHandler();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:unregisterScriptEditBoxHandler",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_unregisterScriptEditBoxHandler'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_keyboardWillShow(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_keyboardWillShow'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::IMEKeyboardNotificationInfo arg0;

        #pragma warning NO CONVERSION TO NATIVE FOR IMEKeyboardNotificationInfo
		ok = false;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_keyboardWillShow'", nullptr);
            return 0;
        }
        cobj->keyboardWillShow(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:keyboardWillShow",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_keyboardWillShow'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setPlaceholderFontColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFontColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Color3B arg0;

        ok &= luaval_to_color3b(tolua_S, 2, &arg0, "cc.EditBox:setPlaceholderFontColor");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFontColor'", nullptr);
            return 0;
        }
        cobj->setPlaceholderFontColor(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:setPlaceholderFontColor",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFontColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setFontColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setFontColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Color3B arg0;

        ok &= luaval_to_color3b(tolua_S, 2, &arg0, "cc.EditBox:setFontColor");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_setFontColor'", nullptr);
            return 0;
        }
        cobj->setFontColor(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:setFontColor",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setFontColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_keyboardWillHide(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_keyboardWillHide'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::IMEKeyboardNotificationInfo arg0;

        #pragma warning NO CONVERSION TO NATIVE FOR IMEKeyboardNotificationInfo
		ok = false;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_keyboardWillHide'", nullptr);
            return 0;
        }
        cobj->keyboardWillHide(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:keyboardWillHide",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_keyboardWillHide'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_touchDownAction(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_touchDownAction'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Ref* arg0;
        cocos2d::extension::Control::EventType arg1;

        ok &= luaval_to_object<cocos2d::Ref>(tolua_S, 2, "cc.Ref",&arg0);

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "cc.EditBox:touchDownAction");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_touchDownAction'", nullptr);
            return 0;
        }
        cobj->touchDownAction(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:touchDownAction",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_touchDownAction'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setPlaceholderFont(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFont'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        int arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "cc.EditBox:setPlaceholderFont"); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "cc.EditBox:setPlaceholderFont");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFont'", nullptr);
            return 0;
        }
        cobj->setPlaceholderFont(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:setPlaceholderFont",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setPlaceholderFont'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setDelegate(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setDelegate'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::EditBoxDelegate* arg0;

        ok &= luaval_to_object<cocos2d::extension::EditBoxDelegate>(tolua_S, 2, "cc.EditBoxDelegate",&arg0);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_setDelegate'", nullptr);
            return 0;
        }
        cobj->setDelegate(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:setDelegate",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setDelegate'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setFontSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setFontSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.EditBox:setFontSize");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_setFontSize'", nullptr);
            return 0;
        }
        cobj->setFontSize(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:setFontSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setFontSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_initWithSizeAndBackgroundSprite(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_initWithSizeAndBackgroundSprite'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Size arg0;
        cocos2d::extension::Scale9Sprite* arg1;

        ok &= luaval_to_size(tolua_S, 2, &arg0, "cc.EditBox:initWithSizeAndBackgroundSprite");

        ok &= luaval_to_object<cocos2d::extension::Scale9Sprite>(tolua_S, 3, "cc.Scale9Sprite",&arg1);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_initWithSizeAndBackgroundSprite'", nullptr);
            return 0;
        }
        bool ret = cobj->initWithSizeAndBackgroundSprite(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:initWithSizeAndBackgroundSprite",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_initWithSizeAndBackgroundSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setPlaceHolder(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setPlaceHolder'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "cc.EditBox:setPlaceHolder"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_setPlaceHolder'", nullptr);
            return 0;
        }
        cobj->setPlaceHolder(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:setPlaceHolder",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setPlaceHolder'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setReturnType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setReturnType'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::EditBox::KeyboardReturnType arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.EditBox:setReturnType");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_setReturnType'", nullptr);
            return 0;
        }
        cobj->setReturnType(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:setReturnType",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setReturnType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_getDelegate(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_getDelegate'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_getDelegate'", nullptr);
            return 0;
        }
        cocos2d::extension::EditBoxDelegate* ret = cobj->getDelegate();
        object_to_luaval<cocos2d::extension::EditBoxDelegate>(tolua_S, "cc.EditBoxDelegate",(cocos2d::extension::EditBoxDelegate*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:getDelegate",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_getDelegate'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setInputFlag(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setInputFlag'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::EditBox::InputFlag arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.EditBox:setInputFlag");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_setInputFlag'", nullptr);
            return 0;
        }
        cobj->setInputFlag(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:setInputFlag",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setInputFlag'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_getMaxLength(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_getMaxLength'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_getMaxLength'", nullptr);
            return 0;
        }
        int ret = cobj->getMaxLength();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:getMaxLength",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_getMaxLength'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setText(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setText'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "cc.EditBox:setText"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_setText'", nullptr);
            return 0;
        }
        cobj->setText(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:setText",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setText'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setMaxLength(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setMaxLength'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.EditBox:setMaxLength");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_setMaxLength'", nullptr);
            return 0;
        }
        cobj->setMaxLength(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:setMaxLength",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setMaxLength'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_setFont(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::EditBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_EditBox_setFont'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        int arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "cc.EditBox:setFont"); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "cc.EditBox:setFont");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_setFont'", nullptr);
            return 0;
        }
        cobj->setFont(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:setFont",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_setFont'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_EditBox_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::Size arg0;
        cocos2d::extension::Scale9Sprite* arg1;
        ok &= luaval_to_size(tolua_S, 2, &arg0, "cc.EditBox:create");
        ok &= luaval_to_object<cocos2d::extension::Scale9Sprite>(tolua_S, 3, "cc.Scale9Sprite",&arg1);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_create'", nullptr);
            return 0;
        }
        cocos2d::extension::EditBox* ret = cocos2d::extension::EditBox::create(arg0, arg1);
        object_to_luaval<cocos2d::extension::EditBox>(tolua_S, "cc.EditBox",(cocos2d::extension::EditBox*)ret);
        return 1;
    }
    if (argc == 3)
    {
        cocos2d::Size arg0;
        cocos2d::extension::Scale9Sprite* arg1;
        cocos2d::extension::Scale9Sprite* arg2;
        ok &= luaval_to_size(tolua_S, 2, &arg0, "cc.EditBox:create");
        ok &= luaval_to_object<cocos2d::extension::Scale9Sprite>(tolua_S, 3, "cc.Scale9Sprite",&arg1);
        ok &= luaval_to_object<cocos2d::extension::Scale9Sprite>(tolua_S, 4, "cc.Scale9Sprite",&arg2);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_create'", nullptr);
            return 0;
        }
        cocos2d::extension::EditBox* ret = cocos2d::extension::EditBox::create(arg0, arg1, arg2);
        object_to_luaval<cocos2d::extension::EditBox>(tolua_S, "cc.EditBox",(cocos2d::extension::EditBox*)ret);
        return 1;
    }
    if (argc == 4)
    {
        cocos2d::Size arg0;
        cocos2d::extension::Scale9Sprite* arg1;
        cocos2d::extension::Scale9Sprite* arg2;
        cocos2d::extension::Scale9Sprite* arg3;
        ok &= luaval_to_size(tolua_S, 2, &arg0, "cc.EditBox:create");
        ok &= luaval_to_object<cocos2d::extension::Scale9Sprite>(tolua_S, 3, "cc.Scale9Sprite",&arg1);
        ok &= luaval_to_object<cocos2d::extension::Scale9Sprite>(tolua_S, 4, "cc.Scale9Sprite",&arg2);
        ok &= luaval_to_object<cocos2d::extension::Scale9Sprite>(tolua_S, 5, "cc.Scale9Sprite",&arg3);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_create'", nullptr);
            return 0;
        }
        cocos2d::extension::EditBox* ret = cocos2d::extension::EditBox::create(arg0, arg1, arg2, arg3);
        object_to_luaval<cocos2d::extension::EditBox>(tolua_S, "cc.EditBox",(cocos2d::extension::EditBox*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "cc.EditBox:create",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_EditBox_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::EditBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_EditBox_constructor'", nullptr);
            return 0;
        }
        cobj = new cocos2d::extension::EditBox();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"cc.EditBox");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.EditBox:EditBox",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_EditBox_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_extension_EditBox_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (EditBox)");
    return 0;
}

int lua_register_cocos2dx_extension_EditBox(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.EditBox");
    tolua_cclass(tolua_S,"EditBox","cc.EditBox","cc.ControlButton",nullptr);

    tolua_beginmodule(tolua_S,"EditBox");
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_EditBox_constructor);
        tolua_function(tolua_S,"keyboardDidShow",lua_cocos2dx_extension_EditBox_keyboardDidShow);
        tolua_function(tolua_S,"getScriptEditBoxHandler",lua_cocos2dx_extension_EditBox_getScriptEditBoxHandler);
        tolua_function(tolua_S,"getText",lua_cocos2dx_extension_EditBox_getText);
        tolua_function(tolua_S,"keyboardDidHide",lua_cocos2dx_extension_EditBox_keyboardDidHide);
        tolua_function(tolua_S,"setPlaceholderFontName",lua_cocos2dx_extension_EditBox_setPlaceholderFontName);
        tolua_function(tolua_S,"getPlaceHolder",lua_cocos2dx_extension_EditBox_getPlaceHolder);
        tolua_function(tolua_S,"setFontName",lua_cocos2dx_extension_EditBox_setFontName);
        tolua_function(tolua_S,"registerScriptEditBoxHandler",lua_cocos2dx_extension_EditBox_registerScriptEditBoxHandler);
        tolua_function(tolua_S,"setPlaceholderFontSize",lua_cocos2dx_extension_EditBox_setPlaceholderFontSize);
        tolua_function(tolua_S,"setInputMode",lua_cocos2dx_extension_EditBox_setInputMode);
        tolua_function(tolua_S,"unregisterScriptEditBoxHandler",lua_cocos2dx_extension_EditBox_unregisterScriptEditBoxHandler);
        tolua_function(tolua_S,"keyboardWillShow",lua_cocos2dx_extension_EditBox_keyboardWillShow);
        tolua_function(tolua_S,"setPlaceholderFontColor",lua_cocos2dx_extension_EditBox_setPlaceholderFontColor);
        tolua_function(tolua_S,"setFontColor",lua_cocos2dx_extension_EditBox_setFontColor);
        tolua_function(tolua_S,"keyboardWillHide",lua_cocos2dx_extension_EditBox_keyboardWillHide);
        tolua_function(tolua_S,"touchDownAction",lua_cocos2dx_extension_EditBox_touchDownAction);
        tolua_function(tolua_S,"setPlaceholderFont",lua_cocos2dx_extension_EditBox_setPlaceholderFont);
        tolua_function(tolua_S,"setDelegate",lua_cocos2dx_extension_EditBox_setDelegate);
        tolua_function(tolua_S,"setFontSize",lua_cocos2dx_extension_EditBox_setFontSize);
        tolua_function(tolua_S,"initWithSizeAndBackgroundSprite",lua_cocos2dx_extension_EditBox_initWithSizeAndBackgroundSprite);
        tolua_function(tolua_S,"setPlaceHolder",lua_cocos2dx_extension_EditBox_setPlaceHolder);
        tolua_function(tolua_S,"setReturnType",lua_cocos2dx_extension_EditBox_setReturnType);
        tolua_function(tolua_S,"getDelegate",lua_cocos2dx_extension_EditBox_getDelegate);
        tolua_function(tolua_S,"setInputFlag",lua_cocos2dx_extension_EditBox_setInputFlag);
        tolua_function(tolua_S,"getMaxLength",lua_cocos2dx_extension_EditBox_getMaxLength);
        tolua_function(tolua_S,"setText",lua_cocos2dx_extension_EditBox_setText);
        tolua_function(tolua_S,"setMaxLength",lua_cocos2dx_extension_EditBox_setMaxLength);
        tolua_function(tolua_S,"setFont",lua_cocos2dx_extension_EditBox_setFont);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_EditBox_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::extension::EditBox).name();
    g_luaType[typeName] = "cc.EditBox";
    g_typeCast["EditBox"] = "cc.EditBox";
    return 1;
}

int lua_cocos2dx_extension_ScrollView_isClippingToBounds(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_isClippingToBounds'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_isClippingToBounds'", nullptr);
            return 0;
        }
        bool ret = cobj->isClippingToBounds();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:isClippingToBounds",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_isClippingToBounds'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_setContainer(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_setContainer'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Node* arg0;

        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_setContainer'", nullptr);
            return 0;
        }
        cobj->setContainer(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:setContainer",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_setContainer'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_onTouchEnded(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_onTouchEnded'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;

        ok &= luaval_to_object<cocos2d::Touch>(tolua_S, 2, "cc.Touch",&arg0);

        ok &= luaval_to_object<cocos2d::Event>(tolua_S, 3, "cc.Event",&arg1);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_onTouchEnded'", nullptr);
            return 0;
        }
        cobj->onTouchEnded(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:onTouchEnded",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_onTouchEnded'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_setContentOffsetInDuration(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_setContentOffsetInDuration'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Vec2 arg0;
        double arg1;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "cc.ScrollView:setContentOffsetInDuration");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "cc.ScrollView:setContentOffsetInDuration");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_setContentOffsetInDuration'", nullptr);
            return 0;
        }
        cobj->setContentOffsetInDuration(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:setContentOffsetInDuration",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_setContentOffsetInDuration'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_setZoomScaleInDuration(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_setZoomScaleInDuration'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        double arg1;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.ScrollView:setZoomScaleInDuration");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "cc.ScrollView:setZoomScaleInDuration");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_setZoomScaleInDuration'", nullptr);
            return 0;
        }
        cobj->setZoomScaleInDuration(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:setZoomScaleInDuration",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_setZoomScaleInDuration'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_setBounceable(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_setBounceable'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.ScrollView:setBounceable");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_setBounceable'", nullptr);
            return 0;
        }
        cobj->setBounceable(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:setBounceable",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_setBounceable'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_getDirection(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_getDirection'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_getDirection'", nullptr);
            return 0;
        }
        int ret = (int)cobj->getDirection();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:getDirection",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_getDirection'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_getContainer(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_getContainer'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_getContainer'", nullptr);
            return 0;
        }
        cocos2d::Node* ret = cobj->getContainer();
        object_to_luaval<cocos2d::Node>(tolua_S, "cc.Node",(cocos2d::Node*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:getContainer",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_getContainer'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_updateTweenAction(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_updateTweenAction'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        std::string arg1;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.ScrollView:updateTweenAction");

        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "cc.ScrollView:updateTweenAction");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_updateTweenAction'", nullptr);
            return 0;
        }
        cobj->updateTweenAction(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:updateTweenAction",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_updateTweenAction'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_getZoomScale(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_getZoomScale'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_getZoomScale'", nullptr);
            return 0;
        }
        double ret = cobj->getZoomScale();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:getZoomScale",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_getZoomScale'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_updateInset(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_updateInset'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_updateInset'", nullptr);
            return 0;
        }
        cobj->updateInset();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:updateInset",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_updateInset'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_initWithViewSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_initWithViewSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;

        ok &= luaval_to_size(tolua_S, 2, &arg0, "cc.ScrollView:initWithViewSize");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_initWithViewSize'", nullptr);
            return 0;
        }
        bool ret = cobj->initWithViewSize(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    if (argc == 2) 
    {
        cocos2d::Size arg0;
        cocos2d::Node* arg1;

        ok &= luaval_to_size(tolua_S, 2, &arg0, "cc.ScrollView:initWithViewSize");

        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 3, "cc.Node",&arg1);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_initWithViewSize'", nullptr);
            return 0;
        }
        bool ret = cobj->initWithViewSize(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:initWithViewSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_initWithViewSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_pause(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_pause'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Ref* arg0;

        ok &= luaval_to_object<cocos2d::Ref>(tolua_S, 2, "cc.Ref",&arg0);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_pause'", nullptr);
            return 0;
        }
        cobj->pause(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:pause",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_pause'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_setDirection(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_setDirection'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::ScrollView::Direction arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "cc.ScrollView:setDirection");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_setDirection'", nullptr);
            return 0;
        }
        cobj->setDirection(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:setDirection",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_setDirection'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_init(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_init'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_init'", nullptr);
            return 0;
        }
        bool ret = cobj->init();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:init",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_init'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_setContentOffset(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_setContentOffset'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "cc.ScrollView:setContentOffset");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_setContentOffset'", nullptr);
            return 0;
        }
        cobj->setContentOffset(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 2) 
    {
        cocos2d::Vec2 arg0;
        bool arg1;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "cc.ScrollView:setContentOffset");

        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "cc.ScrollView:setContentOffset");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_setContentOffset'", nullptr);
            return 0;
        }
        cobj->setContentOffset(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:setContentOffset",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_setContentOffset'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_isDragging(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_isDragging'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_isDragging'", nullptr);
            return 0;
        }
        bool ret = cobj->isDragging();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:isDragging",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_isDragging'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_isTouchEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_isTouchEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_isTouchEnabled'", nullptr);
            return 0;
        }
        bool ret = cobj->isTouchEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:isTouchEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_isTouchEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_isBounceable(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_isBounceable'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_isBounceable'", nullptr);
            return 0;
        }
        bool ret = cobj->isBounceable();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:isBounceable",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_isBounceable'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_setTouchEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_setTouchEnabled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.ScrollView:setTouchEnabled");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_setTouchEnabled'", nullptr);
            return 0;
        }
        cobj->setTouchEnabled(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:setTouchEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_setTouchEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_onTouchMoved(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_onTouchMoved'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;

        ok &= luaval_to_object<cocos2d::Touch>(tolua_S, 2, "cc.Touch",&arg0);

        ok &= luaval_to_object<cocos2d::Event>(tolua_S, 3, "cc.Event",&arg1);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_onTouchMoved'", nullptr);
            return 0;
        }
        cobj->onTouchMoved(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:onTouchMoved",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_onTouchMoved'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_getContentOffset(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_getContentOffset'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_getContentOffset'", nullptr);
            return 0;
        }
        cocos2d::Vec2 ret = cobj->getContentOffset();
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:getContentOffset",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_getContentOffset'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_resume(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_resume'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Ref* arg0;

        ok &= luaval_to_object<cocos2d::Ref>(tolua_S, 2, "cc.Ref",&arg0);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_resume'", nullptr);
            return 0;
        }
        cobj->resume(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:resume",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_resume'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_setClippingToBounds(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_setClippingToBounds'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "cc.ScrollView:setClippingToBounds");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_setClippingToBounds'", nullptr);
            return 0;
        }
        cobj->setClippingToBounds(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:setClippingToBounds",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_setClippingToBounds'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_setViewSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_setViewSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;

        ok &= luaval_to_size(tolua_S, 2, &arg0, "cc.ScrollView:setViewSize");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_setViewSize'", nullptr);
            return 0;
        }
        cobj->setViewSize(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:setViewSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_setViewSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_onTouchCancelled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_onTouchCancelled'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;

        ok &= luaval_to_object<cocos2d::Touch>(tolua_S, 2, "cc.Touch",&arg0);

        ok &= luaval_to_object<cocos2d::Event>(tolua_S, 3, "cc.Event",&arg1);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_onTouchCancelled'", nullptr);
            return 0;
        }
        cobj->onTouchCancelled(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:onTouchCancelled",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_onTouchCancelled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_getViewSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_getViewSize'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_getViewSize'", nullptr);
            return 0;
        }
        cocos2d::Size ret = cobj->getViewSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:getViewSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_getViewSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_maxContainerOffset(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_maxContainerOffset'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_maxContainerOffset'", nullptr);
            return 0;
        }
        cocos2d::Vec2 ret = cobj->maxContainerOffset();
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:maxContainerOffset",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_maxContainerOffset'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_setDelegate(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_setDelegate'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::extension::ScrollViewDelegate* arg0;

        ok &= luaval_to_object<cocos2d::extension::ScrollViewDelegate>(tolua_S, 2, "cc.ScrollViewDelegate",&arg0);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_setDelegate'", nullptr);
            return 0;
        }
        cobj->setDelegate(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:setDelegate",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_setDelegate'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_onTouchBegan(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_onTouchBegan'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Touch* arg0;
        cocos2d::Event* arg1;

        ok &= luaval_to_object<cocos2d::Touch>(tolua_S, 2, "cc.Touch",&arg0);

        ok &= luaval_to_object<cocos2d::Event>(tolua_S, 3, "cc.Event",&arg1);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_onTouchBegan'", nullptr);
            return 0;
        }
        bool ret = cobj->onTouchBegan(arg0, arg1);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:onTouchBegan",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_onTouchBegan'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_isTouchMoved(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_isTouchMoved'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_isTouchMoved'", nullptr);
            return 0;
        }
        bool ret = cobj->isTouchMoved();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:isTouchMoved",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_isTouchMoved'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_getDelegate(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_getDelegate'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_getDelegate'", nullptr);
            return 0;
        }
        cocos2d::extension::ScrollViewDelegate* ret = cobj->getDelegate();
        object_to_luaval<cocos2d::extension::ScrollViewDelegate>(tolua_S, "cc.ScrollViewDelegate",(cocos2d::extension::ScrollViewDelegate*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:getDelegate",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_getDelegate'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_isNodeVisible(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_isNodeVisible'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Node* arg0;

        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_isNodeVisible'", nullptr);
            return 0;
        }
        bool ret = cobj->isNodeVisible(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:isNodeVisible",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_isNodeVisible'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_minContainerOffset(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_minContainerOffset'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_minContainerOffset'", nullptr);
            return 0;
        }
        cocos2d::Vec2 ret = cobj->minContainerOffset();
        vec2_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:minContainerOffset",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_minContainerOffset'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_setZoomScale(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::extension::ScrollView*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_extension_ScrollView_setZoomScale'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            double arg0;
            ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.ScrollView:setZoomScale");

            if (!ok) { break; }
            bool arg1;
            ok &= luaval_to_boolean(tolua_S, 3,&arg1, "cc.ScrollView:setZoomScale");

            if (!ok) { break; }
            cobj->setZoomScale(arg0, arg1);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            double arg0;
            ok &= luaval_to_number(tolua_S, 2,&arg0, "cc.ScrollView:setZoomScale");

            if (!ok) { break; }
            cobj->setZoomScale(arg0);
            lua_settop(tolua_S, 1);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "cc.ScrollView:setZoomScale",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_setZoomScale'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_extension_ScrollView_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"cc.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 0)
        {
            cocos2d::extension::ScrollView* ret = cocos2d::extension::ScrollView::create();
            object_to_luaval<cocos2d::extension::ScrollView>(tolua_S, "cc.ScrollView",(cocos2d::extension::ScrollView*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 1)
        {
            cocos2d::Size arg0;
            ok &= luaval_to_size(tolua_S, 2, &arg0, "cc.ScrollView:create");
            if (!ok) { break; }
            cocos2d::extension::ScrollView* ret = cocos2d::extension::ScrollView::create(arg0);
            object_to_luaval<cocos2d::extension::ScrollView>(tolua_S, "cc.ScrollView",(cocos2d::extension::ScrollView*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 2)
        {
            cocos2d::Size arg0;
            ok &= luaval_to_size(tolua_S, 2, &arg0, "cc.ScrollView:create");
            if (!ok) { break; }
            cocos2d::Node* arg1;
            ok &= luaval_to_object<cocos2d::Node>(tolua_S, 3, "cc.Node",&arg1);
            if (!ok) { break; }
            cocos2d::extension::ScrollView* ret = cocos2d::extension::ScrollView::create(arg0, arg1);
            object_to_luaval<cocos2d::extension::ScrollView>(tolua_S, "cc.ScrollView",(cocos2d::extension::ScrollView*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "cc.ScrollView:create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_extension_ScrollView_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::extension::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_extension_ScrollView_constructor'", nullptr);
            return 0;
        }
        cobj = new cocos2d::extension::ScrollView();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"cc.ScrollView");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "cc.ScrollView:ScrollView",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_extension_ScrollView_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_extension_ScrollView_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ScrollView)");
    return 0;
}

int lua_register_cocos2dx_extension_ScrollView(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"cc.ScrollView");
    tolua_cclass(tolua_S,"ScrollView","cc.ScrollView","cc.Layer",nullptr);

    tolua_beginmodule(tolua_S,"ScrollView");
        tolua_function(tolua_S,"new",lua_cocos2dx_extension_ScrollView_constructor);
        tolua_function(tolua_S,"isClippingToBounds",lua_cocos2dx_extension_ScrollView_isClippingToBounds);
        tolua_function(tolua_S,"setContainer",lua_cocos2dx_extension_ScrollView_setContainer);
        tolua_function(tolua_S,"onTouchEnded",lua_cocos2dx_extension_ScrollView_onTouchEnded);
        tolua_function(tolua_S,"setContentOffsetInDuration",lua_cocos2dx_extension_ScrollView_setContentOffsetInDuration);
        tolua_function(tolua_S,"setZoomScaleInDuration",lua_cocos2dx_extension_ScrollView_setZoomScaleInDuration);
        tolua_function(tolua_S,"setBounceable",lua_cocos2dx_extension_ScrollView_setBounceable);
        tolua_function(tolua_S,"getDirection",lua_cocos2dx_extension_ScrollView_getDirection);
        tolua_function(tolua_S,"getContainer",lua_cocos2dx_extension_ScrollView_getContainer);
        tolua_function(tolua_S,"updateTweenAction",lua_cocos2dx_extension_ScrollView_updateTweenAction);
        tolua_function(tolua_S,"getZoomScale",lua_cocos2dx_extension_ScrollView_getZoomScale);
        tolua_function(tolua_S,"updateInset",lua_cocos2dx_extension_ScrollView_updateInset);
        tolua_function(tolua_S,"initWithViewSize",lua_cocos2dx_extension_ScrollView_initWithViewSize);
        tolua_function(tolua_S,"pause",lua_cocos2dx_extension_ScrollView_pause);
        tolua_function(tolua_S,"setDirection",lua_cocos2dx_extension_ScrollView_setDirection);
        tolua_function(tolua_S,"init",lua_cocos2dx_extension_ScrollView_init);
        tolua_function(tolua_S,"setContentOffset",lua_cocos2dx_extension_ScrollView_setContentOffset);
        tolua_function(tolua_S,"isDragging",lua_cocos2dx_extension_ScrollView_isDragging);
        tolua_function(tolua_S,"isTouchEnabled",lua_cocos2dx_extension_ScrollView_isTouchEnabled);
        tolua_function(tolua_S,"isBounceable",lua_cocos2dx_extension_ScrollView_isBounceable);
        tolua_function(tolua_S,"setTouchEnabled",lua_cocos2dx_extension_ScrollView_setTouchEnabled);
        tolua_function(tolua_S,"onTouchMoved",lua_cocos2dx_extension_ScrollView_onTouchMoved);
        tolua_function(tolua_S,"getContentOffset",lua_cocos2dx_extension_ScrollView_getContentOffset);
        tolua_function(tolua_S,"resume",lua_cocos2dx_extension_ScrollView_resume);
        tolua_function(tolua_S,"setClippingToBounds",lua_cocos2dx_extension_ScrollView_setClippingToBounds);
        tolua_function(tolua_S,"setViewSize",lua_cocos2dx_extension_ScrollView_setViewSize);
        tolua_function(tolua_S,"onTouchCancelled",lua_cocos2dx_extension_ScrollView_onTouchCancelled);
        tolua_function(tolua_S,"getViewSize",lua_cocos2dx_extension_ScrollView_getViewSize);
        tolua_function(tolua_S,"maxContainerOffset",lua_cocos2dx_extension_ScrollView_maxContainerOffset);
        tolua_function(tolua_S,"setDelegate",lua_cocos2dx_extension_ScrollView_setDelegate);
        tolua_function(tolua_S,"onTouchBegan",lua_cocos2dx_extension_ScrollView_onTouchBegan);
        tolua_function(tolua_S,"isTouchMoved",lua_cocos2dx_extension_ScrollView_isTouchMoved);
        tolua_function(tolua_S,"getDelegate",lua_cocos2dx_extension_ScrollView_getDelegate);
        tolua_function(tolua_S,"isNodeVisible",lua_cocos2dx_extension_ScrollView_isNodeVisible);
        tolua_function(tolua_S,"minContainerOffset",lua_cocos2dx_extension_ScrollView_minContainerOffset);
        tolua_function(tolua_S,"setZoomScale",lua_cocos2dx_extension_ScrollView_setZoomScale);
        tolua_function(tolua_S,"create", lua_cocos2dx_extension_ScrollView_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::extension::ScrollView).name();
    g_luaType[typeName] = "cc.ScrollView";
    g_typeCast["ScrollView"] = "cc.ScrollView";
    return 1;
}
TOLUA_API int register_all_cocos2dx_extension(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"cc",0);
	tolua_beginmodule(tolua_S,"cc");

	lua_register_cocos2dx_extension_Control(tolua_S);
	lua_register_cocos2dx_extension_Scale9Sprite(tolua_S);
	lua_register_cocos2dx_extension_ControlUtils(tolua_S);
	lua_register_cocos2dx_extension_ControlButton(tolua_S);
	lua_register_cocos2dx_extension_EditBox(tolua_S);
	lua_register_cocos2dx_extension_ScrollView(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

