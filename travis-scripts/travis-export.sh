#!/bin/sh
if test "$BUILDING" = "DOXYGEN"; then
mkdir deploy/savant-dox -p
cp doc/html/* deploy/savant-dox
else
sudo make install
mkdir deploy -p
fi
