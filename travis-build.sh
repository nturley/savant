#!/bin/sh
./configure --with-clutils=/usr/local
if test "$BUILDING" = "BINARY"; then
make
else
cd doc
doxygen doxygen.config
cd ..
fi
