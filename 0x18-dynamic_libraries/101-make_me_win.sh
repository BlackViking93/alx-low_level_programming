#!/bin/bash
wget -P /tmp https://github.com/holbertonschool/0x18.c
export LD_PRELOAD=/tmp/hacked .so
