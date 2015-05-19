/****************************************************************************
 Copyright (c) 2013-2014 Chukong Technologies Inc.
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/
#include "lua_cocos2dx_extension_manual.h"
#include "cocos2d.h"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"
#include "CCLuaValue.h"
#include "cocos-ext.h"
#include "CCLuaEngine.h"

USING_NS_CC;
USING_NS_CC_EXT;
//using namespace cocostudio;

static int tolua_cocos2d_Control_registerControlEventHandler(lua_State* tolua_S)
{
    if (NULL == tolua_S)
        return 0;
    
    int argc = 0;
    Control* self = nullptr;
    
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S,1,"cc.Control",0,&tolua_err)) goto tolua_lerror;
#endif
    
    self = static_cast<Control*>(tolua_tousertype(tolua_S,1,0));
    
#if COCOS2D_DEBUG >= 1
	if (nullptr == self) {
		tolua_error(tolua_S,"invalid 'self' in function 'tolua_cocos2d_Control_registerControlEventHandler'\n", NULL);
		return 0;
	}
#endif
    
    argc = lua_gettop(tolua_S) - 1;
    
    if (2 == argc)
    {
#if COCOS2D_DEBUG >= 1
        if (!toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err) ||
            !tolua_isnumber(tolua_S, 3, 0, &tolua_err) )
        {
            goto tolua_lerror;
        }
#endif
        LUA_FUNCTION handler = (  toluafix_ref_function(tolua_S,2,0));
        int controlevent = (int)tolua_tonumber(tolua_S,3,0);
        for (int i = 0; i < kControlEventTotalNumber; i++)
        {
            if ((controlevent & (1 << i)))
            {
                ScriptHandlerMgr::HandlerType handlerevent  = ScriptHandlerMgr::HandlerType((int)ScriptHandlerMgr::HandlerType::CONTROL_TOUCH_DOWN + i);
                ScriptHandlerMgr::getInstance()->addObjectHandler((void*)self, handler, handlerevent);
            }
        }
        return 0;
    }
    
    CCLOG("'registerControlEventHandler' function of Control has wrong number of arguments: %d, was expecting %d\n", argc, 2);
    return 0;
    
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'registerControlEventHandler'.",&tolua_err);
    return 0;
#endif
}

static int tolua_cocos2d_control_unregisterControlEventHandler(lua_State* tolua_S)
{
    if (NULL == tolua_S)
        return 0;
    
    int argc = 0;
    Control* self = nullptr;
    
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S,1,"cc.Control",0,&tolua_err)) goto tolua_lerror;
#endif
    
    self = static_cast<Control*>(tolua_tousertype(tolua_S,1,0));
    
#if COCOS2D_DEBUG >= 1
	if (nullptr == self) {
		tolua_error(tolua_S,"invalid 'self' in function 'tolua_cocos2d_control_unregisterControlEventHandler'\n", NULL);
		return 0;
	}
#endif
    
    argc = lua_gettop(tolua_S) - 1;
    
    if (1 == argc)
    {
#if COCOS2D_DEBUG >= 1
        if (!tolua_isnumber(tolua_S, 2, 0, &tolua_err))
            goto tolua_lerror;
#endif
        int controlevent = (int)tolua_tonumber(tolua_S,2,0);
        for (int i = 0; i < kControlEventTotalNumber; i++)
        {
            if ((controlevent & (1 << i)))
            {
                ScriptHandlerMgr::HandlerType handlerevent  = ScriptHandlerMgr::HandlerType((int)ScriptHandlerMgr::HandlerType::CONTROL_TOUCH_DOWN + i);
                ScriptHandlerMgr::getInstance()->removeObjectHandler((void*)self, handlerevent);
                break;
            }
        }
        return 0;
    }
    
    CCLOG("'unregisterControlEventHandler' function of Control  has wrong number of arguments: %d, was expecting %d\n", argc, 1);
    return 0;
    
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'unregisterControlEventHandler'.",&tolua_err);
    return 0;
#endif
}

static void extendControl(lua_State* tolua_S)
{
    lua_pushstring(tolua_S, "cc.Control");
    lua_rawget(tolua_S, LUA_REGISTRYINDEX);
    if (lua_istable(tolua_S,-1))
    {
        lua_pushstring(tolua_S,"registerControlEventHandler");
        lua_pushcfunction(tolua_S,tolua_cocos2d_Control_registerControlEventHandler );
        lua_rawset(tolua_S,-3);
        lua_pushstring(tolua_S,"unregisterControlEventHandler");
        lua_pushcfunction(tolua_S,tolua_cocos2d_control_unregisterControlEventHandler );
        lua_rawset(tolua_S,-3);
    }
    lua_pop(tolua_S, 1);
}

static int tolua_cocos2d_EditBox_registerScriptEditBoxHandler(lua_State* tolua_S)
{
    if (NULL == tolua_S)
        return 0;
    
    int argc = 0;
    EditBox* self = nullptr;
    
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif
    
    self = static_cast<EditBox*>(tolua_tousertype(tolua_S,1,0));
    
#if COCOS2D_DEBUG >= 1
	if (nullptr == self) {
		tolua_error(tolua_S,"invalid 'self' in function 'tolua_cocos2d_EditBox_registerScriptEditBoxHandler'\n", NULL);
		return 0;
	}
#endif
    
    argc = lua_gettop(tolua_S) - 1;
    
    if (1 == argc)
    {
#if COCOS2D_DEBUG >= 1
        if (!toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err))
        {
            goto tolua_lerror;
        }
#endif
        LUA_FUNCTION handler = (  toluafix_ref_function(tolua_S,2,0));
        self->registerScriptEditBoxHandler(handler);
        return 0;
    }
    
    CCLOG("'registerScriptEditBoxHandler' function of EditBox  has wrong number of arguments: %d, was expecting %d\n", argc, 1);
    return 0;
    
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'registerScriptEditBoxHandler'.",&tolua_err);
    return 0;
#endif

}

static int tolua_cocos2d_EditBox_unregisterScriptEditBoxHandler(lua_State* tolua_S)
{
    
    if (NULL == tolua_S)
        return 0;
    
    int argc = 0;
    EditBox* self = nullptr;
    
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
	if (!tolua_isusertype(tolua_S,1,"cc.EditBox",0,&tolua_err)) goto tolua_lerror;
#endif
    
    self = static_cast<EditBox*>(tolua_tousertype(tolua_S,1,0));
    
#if COCOS2D_DEBUG >= 1
	if (nullptr == self) {
		tolua_error(tolua_S,"invalid 'self' in function 'tolua_cocos2d_EditBox_unregisterScriptEditBoxHandler'\n", NULL);
		return 0;
	}
#endif
    
    argc = lua_gettop(tolua_S) - 1;
    
    if (0 == argc)
    {
        self->unregisterScriptEditBoxHandler();
        return 0;
    }
    
    CCLOG("'unregisterScriptEditBoxHandler' function of EditBox  has wrong number of arguments: %d, was expecting %d\n", argc, 0);
    return 0;
    
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'unregisterScriptEditBoxHandler'.",&tolua_err);
    return 0;
#endif
}

static void extendEditBox(lua_State* tolua_S)
{
    lua_pushstring(tolua_S, "cc.EditBox");
    lua_rawget(tolua_S, LUA_REGISTRYINDEX);
    if (lua_istable(tolua_S,-1))
    {
        lua_pushstring(tolua_S,"registerScriptEditBoxHandler");
        lua_pushcfunction(tolua_S,tolua_cocos2d_EditBox_registerScriptEditBoxHandler );
        lua_rawset(tolua_S,-3);
        lua_pushstring(tolua_S,"unregisterScriptEditBoxHandler");
        lua_pushcfunction(tolua_S,tolua_cocos2d_EditBox_unregisterScriptEditBoxHandler );
        lua_rawset(tolua_S,-3);
    }
    lua_pop(tolua_S, 1);
}

static int handleUIEvent(int handler, cocos2d::Ref* sender, int eventType)
{
    LuaStack* stack = LuaEngine::getInstance()->getLuaStack();
    
    stack->pushObject(sender, "cc.Ref");
    stack->pushInt(eventType);
    
    stack->executeFunctionByHandler(handler, 2);
    stack->clean();
    
    return 0;
}

static int lua_cocos2dx_TextField_addEventListener(lua_State* L)
{
    if (nullptr == L)
        return 0;
    
    int argc = 0;
    TextField* self = nullptr;
    
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
    if (!tolua_isusertype(L,1,"cc.TextField",0,&tolua_err)) goto tolua_lerror;
#endif
    
    self = static_cast<TextField*>(tolua_tousertype(L,1,0));
    
#if COCOS2D_DEBUG >= 1
    if (nullptr == self) {
        tolua_error(L,"invalid 'self' in function 'lua_cocos2dx_TextField_addEventListener'\n", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(L) - 1;
    if (1 == argc)
    {
#if COCOS2D_DEBUG >= 1
        if (!toluafix_isfunction(L,2,"LUA_FUNCTION",0,&tolua_err))
        {
            goto tolua_lerror;
        }
#endif
        LUA_FUNCTION handler = (  toluafix_ref_function(L,2,0));
        
        self->addEventListener([=](cocos2d::Ref* ref, TextField::EventType eventType){
            handleUIEvent(handler, ref, (int)eventType);
        });
        
        return 0;
    }
    
    CCLOG("'addEventListener' function of TextField has wrong number of arguments: %d, was expecting %d\n", argc, 1);
    
    return 0;
    
#if COCOS2D_DEBUG >= 1
tolua_lerror:
    tolua_error(L,"#ferror in function 'addEventListener'.",&tolua_err);
    return 0;
#endif
}

int register_all_cocos2dx_extension_manual(lua_State* tolua_S)
{
    extendControl(tolua_S);
    extendEditBox(tolua_S);
    return 0;
}
