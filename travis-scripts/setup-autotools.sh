#!/bin/sh
if test "$BUILDING" = "BINARY"; then
aclocal
autoconf
libtoolize
automake --add-missing
elif test $BUILDING = "PLUGIN"; then
cd doc/programmers
aclocal
autoconf
libtoolize
automake --add-missing
cd ../..
fi

