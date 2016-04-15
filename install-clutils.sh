#!/bin/sh
mkdir clutils
cd clutils
wget http://nturley-buildartifacts.s3-website-us-west-1.amazonaws.com/clutils.tar.gz
tar -xvzf clutils.tar.gz
sudo cp -v export/* /usr/local
sudo ln -s /usr/local/include/clutils-0.0 /usr/local/include/clutils
cd ..
LD_LIBRARY_PATH=/usr/local/lib
export LD_LIBRARY_PATH