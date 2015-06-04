#include "lua_cocos2dx_spine_auto.hpp"
#include "spine-cocos2dx.h"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"



int lua_cocos2dx_spine_SkeletonAnimation_setStartListener(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_spine_SkeletonAnimation_setStartListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::function<void (int)> arg0;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_spine_SkeletonAnimation_setStartListener'", nullptr);
            return 0;
        }
        cobj->setStartListener(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setStartListener",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_spine_SkeletonAnimation_setStartListener'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_spine_SkeletonAnimation_setTrackEventListener(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_spine_SkeletonAnimation_setTrackEventListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        spTrackEntry* arg0;
        std::function<void (int, spEvent *)> arg1;

        #pragma warning NO CONVERSION TO NATIVE FOR spTrackEntry*
		ok = false;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_spine_SkeletonAnimation_setTrackEventListener'", nullptr);
            return 0;
        }
        cobj->setTrackEventListener(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setTrackEventListener",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_spine_SkeletonAnimation_setTrackEventListener'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_spine_SkeletonAnimation_getState(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_spine_SkeletonAnimation_getState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_spine_SkeletonAnimation_getState'", nullptr);
            return 0;
        }
        spAnimationState* ret = cobj->getState();
        #pragma warning NO CONVERSION FROM NATIVE FOR spAnimationState*;
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:getState",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_spine_SkeletonAnimation_getState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_spine_SkeletonAnimation_setTrackCompleteListener(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_spine_SkeletonAnimation_setTrackCompleteListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        spTrackEntry* arg0;
        std::function<void (int, int)> arg1;

        #pragma warning NO CONVERSION TO NATIVE FOR spTrackEntry*
		ok = false;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_spine_SkeletonAnimation_setTrackCompleteListener'", nullptr);
            return 0;
        }
        cobj->setTrackCompleteListener(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setTrackCompleteListener",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_spine_SkeletonAnimation_setTrackCompleteListener'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_spine_SkeletonAnimation_onTrackEntryEvent(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_spine_SkeletonAnimation_onTrackEntryEvent'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        int arg0;
        spEventType arg1;
        spEvent* arg2;
        int arg3;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "sp.SkeletonAnimation:onTrackEntryEvent");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "sp.SkeletonAnimation:onTrackEntryEvent");

        #pragma warning NO CONVERSION TO NATIVE FOR spEvent*
		ok = false;

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "sp.SkeletonAnimation:onTrackEntryEvent");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_spine_SkeletonAnimation_onTrackEntryEvent'", nullptr);
            return 0;
        }
        cobj->onTrackEntryEvent(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:onTrackEntryEvent",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_spine_SkeletonAnimation_onTrackEntryEvent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_spine_SkeletonAnimation_setTrackStartListener(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_spine_SkeletonAnimation_setTrackStartListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        spTrackEntry* arg0;
        std::function<void (int)> arg1;

        #pragma warning NO CONVERSION TO NATIVE FOR spTrackEntry*
		ok = false;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_spine_SkeletonAnimation_setTrackStartListener'", nullptr);
            return 0;
        }
        cobj->setTrackStartListener(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setTrackStartListener",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_spine_SkeletonAnimation_setTrackStartListener'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_spine_SkeletonAnimation_setCompleteListener(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_spine_SkeletonAnimation_setCompleteListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::function<void (int, int)> arg0;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_spine_SkeletonAnimation_setCompleteListener'", nullptr);
            return 0;
        }
        cobj->setCompleteListener(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setCompleteListener",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_spine_SkeletonAnimation_setCompleteListener'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_spine_SkeletonAnimation_setTrackEndListener(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_spine_SkeletonAnimation_setTrackEndListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        spTrackEntry* arg0;
        std::function<void (int)> arg1;

        #pragma warning NO CONVERSION TO NATIVE FOR spTrackEntry*
		ok = false;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_spine_SkeletonAnimation_setTrackEndListener'", nullptr);
            return 0;
        }
        cobj->setTrackEndListener(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setTrackEndListener",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_spine_SkeletonAnimation_setTrackEndListener'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_spine_SkeletonAnimation_setEventListener(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_spine_SkeletonAnimation_setEventListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::function<void (int, spEvent *)> arg0;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_spine_SkeletonAnimation_setEventListener'", nullptr);
            return 0;
        }
        cobj->setEventListener(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setEventListener",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_spine_SkeletonAnimation_setEventListener'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_spine_SkeletonAnimation_setMix(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_spine_SkeletonAnimation_setMix'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        std::string arg0;
        std::string arg1;
        double arg2;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "sp.SkeletonAnimation:setMix");

        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "sp.SkeletonAnimation:setMix");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "sp.SkeletonAnimation:setMix");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_spine_SkeletonAnimation_setMix'", nullptr);
            return 0;
        }
        cobj->setMix(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setMix",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_spine_SkeletonAnimation_setMix'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_spine_SkeletonAnimation_setEndListener(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_spine_SkeletonAnimation_setEndListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::function<void (int)> arg0;

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_spine_SkeletonAnimation_setEndListener'", nullptr);
            return 0;
        }
        cobj->setEndListener(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:setEndListener",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_spine_SkeletonAnimation_setEndListener'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_spine_SkeletonAnimation_clearTracks(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_spine_SkeletonAnimation_clearTracks'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_spine_SkeletonAnimation_clearTracks'", nullptr);
            return 0;
        }
        cobj->clearTracks();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:clearTracks",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_spine_SkeletonAnimation_clearTracks'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_spine_SkeletonAnimation_clearTrack(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_spine_SkeletonAnimation_clearTrack'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_spine_SkeletonAnimation_clearTrack'", nullptr);
            return 0;
        }
        cobj->clearTrack();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "sp.SkeletonAnimation:clearTrack");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_spine_SkeletonAnimation_clearTrack'", nullptr);
            return 0;
        }
        cobj->clearTrack(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:clearTrack",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_spine_SkeletonAnimation_clearTrack'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_spine_SkeletonAnimation_onAnimationStateEvent(lua_State* tolua_S)
{
    int argc = 0;
    spine::SkeletonAnimation* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"sp.SkeletonAnimation",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (spine::SkeletonAnimation*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_spine_SkeletonAnimation_onAnimationStateEvent'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        int arg0;
        spEventType arg1;
        spEvent* arg2;
        int arg3;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "sp.SkeletonAnimation:onAnimationStateEvent");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "sp.SkeletonAnimation:onAnimationStateEvent");

        #pragma warning NO CONVERSION TO NATIVE FOR spEvent*
		ok = false;

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "sp.SkeletonAnimation:onAnimationStateEvent");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_spine_SkeletonAnimation_onAnimationStateEvent'", nullptr);
            return 0;
        }
        cobj->onAnimationStateEvent(arg0, arg1, arg2, arg3);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "sp.SkeletonAnimation:onAnimationStateEvent",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_spine_SkeletonAnimation_onAnimationStateEvent'.",&tolua_err);
#endif

    return 0;
}
static int lua_cocos2dx_spine_SkeletonAnimation_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (SkeletonAnimation)");
    return 0;
}

int lua_register_cocos2dx_spine_SkeletonAnimation(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"sp.SkeletonAnimation");
    tolua_cclass(tolua_S,"SkeletonAnimation","sp.SkeletonAnimation","sp.SkeletonRenderer",nullptr);

    tolua_beginmodule(tolua_S,"SkeletonAnimation");
        tolua_function(tolua_S,"setStartListener",lua_cocos2dx_spine_SkeletonAnimation_setStartListener);
        tolua_function(tolua_S,"setTrackEventListener",lua_cocos2dx_spine_SkeletonAnimation_setTrackEventListener);
        tolua_function(tolua_S,"getState",lua_cocos2dx_spine_SkeletonAnimation_getState);
        tolua_function(tolua_S,"setTrackCompleteListener",lua_cocos2dx_spine_SkeletonAnimation_setTrackCompleteListener);
        tolua_function(tolua_S,"onTrackEntryEvent",lua_cocos2dx_spine_SkeletonAnimation_onTrackEntryEvent);
        tolua_function(tolua_S,"setTrackStartListener",lua_cocos2dx_spine_SkeletonAnimation_setTrackStartListener);
        tolua_function(tolua_S,"setCompleteListener",lua_cocos2dx_spine_SkeletonAnimation_setCompleteListener);
        tolua_function(tolua_S,"setTrackEndListener",lua_cocos2dx_spine_SkeletonAnimation_setTrackEndListener);
        tolua_function(tolua_S,"setEventListener",lua_cocos2dx_spine_SkeletonAnimation_setEventListener);
        tolua_function(tolua_S,"setMix",lua_cocos2dx_spine_SkeletonAnimation_setMix);
        tolua_function(tolua_S,"setEndListener",lua_cocos2dx_spine_SkeletonAnimation_setEndListener);
        tolua_function(tolua_S,"clearTracks",lua_cocos2dx_spine_SkeletonAnimation_clearTracks);
        tolua_function(tolua_S,"clearTrack",lua_cocos2dx_spine_SkeletonAnimation_clearTrack);
        tolua_function(tolua_S,"onAnimationStateEvent",lua_cocos2dx_spine_SkeletonAnimation_onAnimationStateEvent);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(spine::SkeletonAnimation).name();
    g_luaType[typeName] = "sp.SkeletonAnimation";
    g_typeCast["SkeletonAnimation"] = "sp.SkeletonAnimation";
    return 1;
}
TOLUA_API int register_all_cocos2dx_spine(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"sp",0);
	tolua_beginmodule(tolua_S,"sp");

	lua_register_cocos2dx_spine_SkeletonAnimation(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

