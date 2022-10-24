#!/bin/bash

exec 3> redirectfile
exec 4>> appendfile

echo "test 1"
echo "test 2" >&3
echo "test 3"
echo "test 4" >&4

exec 5>&1
exec 1> stdoutfile

echo "this should be stored in the file"
echo "along with this"
echo "this one should be in the monitor" >&5

exec 1>&5

echo "now things should be back to normal"


exec 6<&0
exec 0<stdinfile

while read line; do
    echo "line: $line"
done

exec 0<&6
read -p "now stdin should be back to keyboard: "
echo $REPLY


exec 7<>inoutfile

read line <&7
echo $line

echo "this is a test line" >&7
echo "view inoutfile:"
cat inoutfile

exec 3>&-
exec 4>&-
exec 5>&-
exec 6>&-
exec 7>&-


echo "test if the file descriptor 3 is closed" >&3

exec 3>testfile

echo "this should be in testfile" >&3
echo "testfile: "
cat testfile

exec 3>&-

exec 3>testfile

echo "this should overwrite the data in testfile" >&3
echo "testfile: "
cat testfile
