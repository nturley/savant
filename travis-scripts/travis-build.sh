#!/bin/sh
if test "$BUILDING" = "DOXYGEN"; then
cd doc
doxygen doxygen.config
cd ..
elif test $BUILDING = "PLUGIN"; then
cd doc/programmers
./configure --with-clutils=/usr/local
cd ../..
else
./configure --with-clutils=/usr/local
make
fi
