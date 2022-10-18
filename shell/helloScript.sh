#! /bin/bash

echo "Hello Bash Script" > file.txt

var=$(echo "scale=4;3.44/5" | bc)
echo $var
