#!/bin/sh
set -e
if test "$BUILDING" = "DOXYGEN"; then
cd doc
doxygen doxygen.config
cd ..
./configure --with-clutils=/usr/local
make
fi
