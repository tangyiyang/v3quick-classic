#!/bin/bash
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
ROOT_DIR="`dirname $DIR`"
LUAJIT_SRC_DIR="$QUICK_V3_ROOT/quick/lib/lua_bindings/luajit/LuaJIT-2.0.3"

# if [ "$CALL_BY_CONTAINER" == "" ]; then
#     SUDO=sudo
# fi
# cd $LUAJIT_SRC_DIR

# $SUDO make

# echo ""
# echo ""
# echo Install LuaJIT, please enter your password.
# echo ""
# $SUDO make install
# $SUDO make clean
echo ""
echo "DONE."
echo ""
