#!/bin/bash

echo "======> input options and parameters"

set -- $(getopt a:bc "$@")
echo

while [ -n "$1" ]; do
    case "$1" in
        -a) echo "option: a with paramter value: $2"
            shift;;
        -b) echo "option: b";;
        -c) echo "option: c";;
        --) shift
            break;;
        *) echo "parameter: $1";;
    esac
    shift
done

for var in $@; do
    echo "parameter: $var"
done