#!/bin/sh
set -e
if test "$BUILDING" = "DOXYGEN"; then
cd doc
doxygen doxygen.config
cd ..
elif test $BUILDING = "PLUGIN"; then
# HACK this is so I don't have to wait for savant to make; make install /hack
ln -s src/aire/iir/IIRBase doc/programmers/src/XML/savant
cd doc/programmers
./configure --with-clutils=/usr/local
make
cd ../..
else
./configure --with-clutils=/usr/local
make
fi
