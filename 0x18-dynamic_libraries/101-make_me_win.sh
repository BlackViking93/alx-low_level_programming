#!/bin/bash
wget -P /tmp https://github.com/BlackViking93/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=/tmp/libtest.so
