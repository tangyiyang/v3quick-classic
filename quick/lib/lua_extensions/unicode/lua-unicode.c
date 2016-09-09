#include <stdlib.h>
#include <memory.h>

#include "lua.h"
#include "lauxlib.h"

#include "ConvertUTF.h"


static int unicode_16_to_8(unsigned long unic, unsigned char *out, int outSize) {
    if (unic <= 0x0000007F) {
        // * U-00000000 - U-0000007F:  0xxxxxxx
        *out = (unic & 0x7F);
        return 1;
    } else if (unic >= 0x00000080 && unic <= 0x000007FF) {
        // * U-00000080 - U-000007FF:  110xxxxx 10xxxxxx
        *(out + 1) = (unic & 0x3F) | 0x80;
        *out = ((unic >> 6) & 0x1F) | 0xC0;
        return 2;
    } else if (unic >= 0x00000800 && unic <= 0x0000FFFF) {
        // * U-00000800 - U-0000FFFF:  1110xxxx 10xxxxxx 10xxxxxx
        *(out + 2) = (unic & 0x3F) | 0x80;
        *(out + 1) = ((unic >> 6) & 0x3F) | 0x80;
        *out = ((unic >> 12) & 0x0F) | 0xE0;
        return 3;
    } else if (unic >= 0x00010000 && unic <= 0x001FFFFF) {
        // * U-00010000 - U-001FFFFF:  11110xxx 10xxxxxx 10xxxxxx 10xxxxxx
        *(out + 3) = (unic & 0x3F) | 0x80;
        *(out + 2) = ((unic >> 6) & 0x3F) | 0x80;
        *(out + 1) = ((unic >> 12) & 0x3F) | 0x80;
        *out = ((unic >> 18) & 0x07) | 0xF0;
        return 4;
    } else if (unic >= 0x00200000 && unic <= 0x03FFFFFF) {
        // * U-00200000 - U-03FFFFFF:  111110xx 10xxxxxx 10xxxxxx 10xxxxxx 10xxxxxx
        *(out + 4) = (unic & 0x3F) | 0x80;
        *(out + 3) = ((unic >> 6) & 0x3F) | 0x80;
        *(out + 2) = ((unic >> 12) & 0x3F) | 0x80;
        *(out + 1) = ((unic >> 18) & 0x3F) | 0x80;
        *out = ((unic >> 24) & 0x03) | 0xF8;
        return 5;
    } else if (unic >= 0x04000000 && unic <= 0x7FFFFFFF) {
        // * U-04000000 - U-7FFFFFFF:  1111110x 10xxxxxx 10xxxxxx 10xxxxxx 10xxxxxx 10xxxxxx
        *(out + 5) = (unic & 0x3F) | 0x80;
        *(out + 4) = ((unic >> 6) & 0x3F) | 0x80;
        *(out + 3) = ((unic >> 12) & 0x3F) | 0x80;
        *(out + 2) = ((unic >> 18) & 0x3F) | 0x80;
        *(out + 1) = ((unic >> 24) & 0x3F) | 0x80;
        *out = ((unic >> 30) & 0x01) | 0xFC;
        return 6;
    }
    
    return 0;
}

int lconvert_16_8(lua_State* L) {
    
    size_t len = 0;
    const char* utf16 = lua_tolstring(L, 1, &len);
    unsigned long code = strtol(utf16, NULL, 0);

    unsigned char out[7] = "";

    unicode_16_to_8(code, &out[0], 7);

    lua_pushstring(L, (char*)out);
    return 1;
}

LUALIB_API int luaopen_unicode(lua_State *L)
{
    static const struct luaL_Reg bit_funcs[] = {
        { "convert_16_8", lconvert_16_8},
        { NULL, NULL }
    };
    
#if LUA_VERSION_NUM < 502
    luaL_register(L, "bit", bit_funcs);
#else
    luaL_newlib(L, bit_funcs);
#endif
    return 1;
}

