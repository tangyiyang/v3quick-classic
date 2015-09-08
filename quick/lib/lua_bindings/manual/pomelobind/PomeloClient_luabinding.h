
#ifndef __POMELOCLIENT_LUABINDING_H_
#define __POMELOCLIENT_LUABINDING_H_
#include "PomeloClient.h"

extern "C" {
#include "lua.h"
#include "tolua++.h"
#include "tolua_fix.h"
}

TOLUA_API int luaopen_PomeloClient_luabinding(lua_State* tolua_S);

#endif // __POMELOCLIENT_LUABINDING_H_
