/*
 *  Created by 艺洋 唐 on 29/06/2017.
 *  Copyright © 2017 levelmax. All rights reserved.
 */

#ifdef __cplusplus
extern "C" {
#include "lua.h"
#include "lauxlib.h"
}
#endif

#include "RakPeer.h"
#include "lua-racknet.h"

using namespace RakNet;

RakPeerInterface* __self(lua_State* L)
{
    lua_getfield(L, 1, "__cobj");
    RakPeerInterface* ret = (RakPeerInterface*)lua_touserdata(L, -1);
    lua_pop(L, 1);
    return ret;
}

int lraknet_GetInstance(lua_State* L)
{
    RakPeerInterface* peer = RakPeer::GetInstance();
    lua_pushlightuserdata(L, peer);
    return 1;
}

int lraknet_SetTimeoutTime(lua_State* L)
{
    RakPeerInterface* peer = __self(L);
    RakNet::TimeMS timeMS = luaL_checknumber(L, 2);

    const char* systemAddress = luaL_checkstring(L, 3);
    if (!systemAddress) {
        peer->SetTimeoutTime(timeMS, UNASSIGNED_SYSTEM_ADDRESS);
    } else {
        peer->SetTimeoutTime(timeMS, SystemAddress(systemAddress));
    }
    return 0;
}

int lraknet_StartUp(lua_State* L)
{
    RakPeerInterface* peer = __self(L);
    lua_Integer maxConnections = luaL_checkinteger(L, 2);

    // for sake of simplicity, we listen only ONE port.
    const char* address = luaL_checkstring(L, 3);
    lua_Integer port = luaL_checkinteger(L, 4);

    SocketDescriptor socket(port, address);
    StartupResult result = peer->Startup(maxConnections, &socket, 1);

    lua_pushinteger(L, result);
    return 1;
}

int lraknet_SetUnreliableTimeout(lua_State* L)
{
    RakPeerInterface* peer = __self(L);
    lua_Integer timeout = luaL_checkinteger(L, 2);
    peer->SetUnreliableTimeout(timeout);
    return 0;
}

int lraknet_Send(lua_State* L)
{
    RakPeerInterface* peer = __self(L);

    size_t len = 0;
    const char* data = luaL_checklstring(L, 2, &len);
    lua_Integer priority = luaL_checkinteger(L, 3);
    lua_Integer reliability = luaL_checkinteger(L, 4);
    lua_Integer orderingChannel = luaL_checkinteger(L, 5);

    uint64_t guid = luaL_checkinteger(L, 6);
    lua_Integer broadcast = luaL_checkinteger(L, 7);

    uint32_t n = peer->Send(data,
                            len,
                            (PacketPriority)priority,
                            (PacketReliability)reliability,
                            (char)orderingChannel,
                            AddressOrGUID(RakNetGUID(guid)),
                            (bool)broadcast);

    lua_pushinteger(L, n);
    return 1;
}

int lraknet_Receive(lua_State* L)
{
    RakPeerInterface* peer = __self(L);

    Packet* packet = peer->Receive();

    lua_pushlstring(L, (const char*)packet->data, packet->length);

    return 1;
}

int luaopen_raknet_core(lua_State* L)
{
#ifdef luaL_checkversion
    luaL_checkversion(L);
#endif
    luaL_Reg l[] = {
        { "GetInstance", lraknet_GetInstance },
        { "SetTimeoutTime", lraknet_SetTimeoutTime},
        { "StartUp", lraknet_StartUp},
        { "SetUnreliableTimeout", lraknet_SetUnreliableTimeout},
        { "Send", lraknet_Send},
        { "Receive", lraknet_Receive},

        { NULL, NULL },
    };
    luaL_openlib(L, "raknet", l, 0);

    return 1;
}
