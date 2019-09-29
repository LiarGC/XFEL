#!/bin/bash
cd Source/
rm XFEL.pro.user
cd ..
mkdir build
cd build
qmake ../Source/
make