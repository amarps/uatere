#!/bin/sh

clang-tidy -header-filter=.* src/*.cc include/uatere/*.h
