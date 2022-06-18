#!/bin/bash

# Substitution: Assign value of command using backticks ``
FILELIST=`ls`

# Substitution: Assign value of command using ${}
FileWithTimeStamp=/tmp/my-dir/file_$(/bin/date +%Y-%m-%d).txt

echo $FILELIST
echo $FileWithTimeStamp