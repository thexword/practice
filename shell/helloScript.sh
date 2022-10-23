#!/bin/bash

echo "Hello Bash Script" > file.txt

var=$(echo "scale=2;3.44/5" | bc)
echo $var

var1=$(bc << EOF
scale=5
a=3.24
b=4
a/b
EOF
)
echo $var1
