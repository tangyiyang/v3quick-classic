/*
** Lua binding: PomeloClient_luabinding
** Generated automatically by tolua++-1.0.92 on Wed Apr 22 14:42:19 2015.
*/

#include "PomeloClient_luabinding.h"
#include "CCLuaEngine.h"
#include "PomeloClient.h"

using namespace cocos2d;





/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"PomeloClient");
 tolua_usertype(tolua_S,"cocos2d::LUA_FUNCTION");
 tolua_usertype(tolua_S,"cocos2d::Ref");
}

/* method: getInstance of class  PomeloClient */
#ifndef TOLUA_DISABLE_tolua_PomeloClient_luabinding_PomeloClient_getInstance00
static int tolua_PomeloClient_luabinding_PomeloClient_getInstance00(lua_State* tolua_S)
{
#if COCOS2D_DEBUG >= 1
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"PomeloClient",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   PomeloClient* tolua_ret = (PomeloClient*)  PomeloClient::getInstance();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"PomeloClient");
  }
 }
 return 1;
#if COCOS2D_DEBUG >= 1
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: destroyInstance of class  PomeloClient */
#ifndef TOLUA_DISABLE_tolua_PomeloClient_luabinding_PomeloClient_destroyInstance00
static int tolua_PomeloClient_luabinding_PomeloClient_destroyInstance00(lua_State* tolua_S)
{
#if COCOS2D_DEBUG >= 1
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"PomeloClient",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   PomeloClient::destroyInstance();
  }
 }
 return 0;
#if COCOS2D_DEBUG >= 1
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'destroyInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: connect of class  PomeloClient */
#ifndef TOLUA_DISABLE_tolua_PomeloClient_luabinding_PomeloClient_connect00
static int tolua_PomeloClient_luabinding_PomeloClient_connect00(lua_State* tolua_S)
{
#if COCOS2D_DEBUG >= 1
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PomeloClient",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PomeloClient* self = (PomeloClient*)  tolua_tousertype(tolua_S,1,0);
  const char* ip = ((const char*)  tolua_tostring(tolua_S,2,0));
  int port = ((int)  tolua_tonumber(tolua_S,3,0));
#if COCOS2D_DEBUG >= 1
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'connect'", NULL);
#endif
  {
   int tolua_ret = (int)  self->connect(ip,port);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#if COCOS2D_DEBUG >= 1
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'connect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: disconnect of class  PomeloClient */
#ifndef TOLUA_DISABLE_tolua_PomeloClient_luabinding_PomeloClient_disconnect00
static int tolua_PomeloClient_luabinding_PomeloClient_disconnect00(lua_State* tolua_S)
{
#if COCOS2D_DEBUG >= 1
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PomeloClient",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PomeloClient* self = (PomeloClient*)  tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'disconnect'", NULL);
#endif
  {
   self->disconnect();
  }
 }
 return 0;
#if COCOS2D_DEBUG >= 1
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'disconnect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addListener of class  PomeloClient */
#ifndef TOLUA_DISABLE_tolua_PomeloClient_luabinding_PomeloClient_addListener00
static int tolua_PomeloClient_luabinding_PomeloClient_addListener00(lua_State* tolua_S)
{
#if COCOS2D_DEBUG >= 1
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PomeloClient",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PomeloClient* self = (PomeloClient*)  tolua_tousertype(tolua_S,1,0);
  const char* event = ((const char*)  tolua_tostring(tolua_S,2,0));
#if COCOS2D_DEBUG >= 1
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addListener'", NULL);
#endif
  {
   int tolua_ret = (int)  self->addListener(event);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#if COCOS2D_DEBUG >= 1
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addListener'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeListener of class  PomeloClient */
#ifndef TOLUA_DISABLE_tolua_PomeloClient_luabinding_PomeloClient_removeListener00
static int tolua_PomeloClient_luabinding_PomeloClient_removeListener00(lua_State* tolua_S)
{
#if COCOS2D_DEBUG >= 1
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PomeloClient",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PomeloClient* self = (PomeloClient*)  tolua_tousertype(tolua_S,1,0);
  const char* event = ((const char*)  tolua_tostring(tolua_S,2,0));
#if COCOS2D_DEBUG >= 1
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeListener'", NULL);
#endif
  {
   self->removeListener(event);
  }
 }
 return 0;
#if COCOS2D_DEBUG >= 1
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeListener'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: notify of class  PomeloClient */
#ifndef TOLUA_DISABLE_tolua_PomeloClient_luabinding_PomeloClient_notify00
static int tolua_PomeloClient_luabinding_PomeloClient_notify00(lua_State* tolua_S)
{
#if COCOS2D_DEBUG >= 1
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PomeloClient",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PomeloClient* self = (PomeloClient*)  tolua_tousertype(tolua_S,1,0);
  const char* route = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* str = ((const char*)  tolua_tostring(tolua_S,3,0));
#if COCOS2D_DEBUG >= 1
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'notify'", NULL);
#endif
  {
   self->notify(route,str);
  }
 }
 return 0;
#if COCOS2D_DEBUG >= 1
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'notify'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: request of class  PomeloClient */
#ifndef TOLUA_DISABLE_tolua_PomeloClient_luabinding_PomeloClient_request00
static int tolua_PomeloClient_luabinding_PomeloClient_request00(lua_State* tolua_S)
{
#if COCOS2D_DEBUG >= 1
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PomeloClient",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PomeloClient* self = (PomeloClient*)  tolua_tousertype(tolua_S,1,0);
  const char* route = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* str = ((const char*)  tolua_tostring(tolua_S,3,0));
#if COCOS2D_DEBUG >= 1
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'request'", NULL);
#endif
  {
   self->request(route,str);
  }
 }
 return 0;
#if COCOS2D_DEBUG >= 1
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'request'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: registerScriptHandler of class  PomeloClient */
#ifndef TOLUA_DISABLE_tolua_PomeloClient_luabinding_PomeloClient_registerScriptHandler00
static int tolua_PomeloClient_luabinding_PomeloClient_registerScriptHandler00(lua_State* tolua_S)
{
#if COCOS2D_DEBUG >= 1
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PomeloClient",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PomeloClient* self = (PomeloClient*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION funcID = (toluafix_ref_function(tolua_S,2,0));

#if COCOS2D_DEBUG >= 1
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'registerScriptHandler'", NULL);
#endif
  {
   self->registerScriptHandler(funcID);
  }
 }
 return 0;
#if COCOS2D_DEBUG >= 1
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'registerScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unregisterScriptHandler of class  PomeloClient */
#ifndef TOLUA_DISABLE_tolua_PomeloClient_luabinding_PomeloClient_unregisterScriptHandler00
static int tolua_PomeloClient_luabinding_PomeloClient_unregisterScriptHandler00(lua_State* tolua_S)
{
#if COCOS2D_DEBUG >= 1
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"PomeloClient",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  PomeloClient* self = (PomeloClient*)  tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unregisterScriptHandler'", NULL);
#endif
  {
   self->unregisterScriptHandler();
  }
 }
 return 0;
#if COCOS2D_DEBUG >= 1
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unregisterScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_PomeloClient_luabinding_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,"cc",0);
 tolua_beginmodule(tolua_S,"cc");
  tolua_cclass(tolua_S,"PomeloClient","PomeloClient","cocos2d::Ref",NULL);
  tolua_beginmodule(tolua_S,"PomeloClient");
   tolua_function(tolua_S,"getInstance",tolua_PomeloClient_luabinding_PomeloClient_getInstance00);
   tolua_function(tolua_S,"destroyInstance",tolua_PomeloClient_luabinding_PomeloClient_destroyInstance00);
   tolua_function(tolua_S,"connect",tolua_PomeloClient_luabinding_PomeloClient_connect00);
   tolua_function(tolua_S,"disconnect",tolua_PomeloClient_luabinding_PomeloClient_disconnect00);
   tolua_function(tolua_S,"addListener",tolua_PomeloClient_luabinding_PomeloClient_addListener00);
   tolua_function(tolua_S,"removeListener",tolua_PomeloClient_luabinding_PomeloClient_removeListener00);
   tolua_function(tolua_S,"notify",tolua_PomeloClient_luabinding_PomeloClient_notify00);
   tolua_function(tolua_S,"request",tolua_PomeloClient_luabinding_PomeloClient_request00);
   tolua_function(tolua_S,"registerScriptHandler",tolua_PomeloClient_luabinding_PomeloClient_registerScriptHandler00);
   tolua_function(tolua_S,"unregisterScriptHandler",tolua_PomeloClient_luabinding_PomeloClient_unregisterScriptHandler00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_PomeloClient_luabinding (lua_State* tolua_S) {
 return tolua_PomeloClient_luabinding_open(tolua_S);
};
#endif

