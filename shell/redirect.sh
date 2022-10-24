#!/bin/bash

exec 3> redirectfile
exec 4>> appendfile

echo "test 1"
echo "test 2" >&3
echo "test 3"
echo "test 4" >&4