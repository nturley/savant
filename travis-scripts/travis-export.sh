#!/bin/sh
if test "$BUILDING" = "DOXYGEN"; then
mkdir deploy/savant-dox -p
cp doc/html/* deploy/savant-dox
else
sudo make install
mkdir export/include -p
mkdir export/lib/savant -p
cp /usr/local/include/savant export/include -rv
cp /usr/local/lib/*savant* export/lib -v
cp /usr/local/lib/*aire* export/lib -v
cp /usr/local/lib/savant export/lib -rv
mkdir deploy -p
tar -zcvf deploy/savant.tar.gz export
fi
