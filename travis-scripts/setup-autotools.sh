#!/bin/sh
set -e
if test "$BUILDING" = "BINARY"; then
aclocal
autoconf
libtoolize
automake --add-missing
fi

