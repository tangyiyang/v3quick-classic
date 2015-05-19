#!/bin/bash
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

echo $QUICK_V3_ROOT

BIN="$QUICK_V3_ROOT/player3.app/Contents/MacOS/player3"
if [ ! -f $BIN ]; then
    echo "PLEASE BUILD $QUICK_V3_ROOT/quick/player/proj.mac/player3.xcodeproj FIRST"
    exit
fi

ARG="-debugger-codeide -workdir $DIR"
SIZE="-portrait"
CMD="$BIN $ARG $SIZE"

until $CMD; do
    echo ""
    echo "------------------------------------------------------"
    echo ""
    echo ""
    echo ""
done
