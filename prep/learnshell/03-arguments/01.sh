#!/bin/bash

# $1 variable references the first argument
# $2 variable references the second argument
# $0 references the current script

echo "File name is $0"
echo "$3" # 3rd argument
Data=$5
echo "A $Data costs just $6"
echo "$@" # Space delimited string of all arguments
echo $# # total number of arguments
