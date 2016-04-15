#!/bin/sh
if test "$BUILDING" = "DOXYGEN"; then
cd doc
doxygen doxygen.config
cd ..
else
./configure --with-clutils=/usr/local
make
cd doc/programmers
./configure --with-clutils=/usr/local
cd ../..
fi
