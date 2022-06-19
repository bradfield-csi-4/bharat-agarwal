#!/bin/bash

# Pass "Shell is fun" (3 arguments) to the script
# as an arguments and print the length of the arguments.

function File {
    # think you are inside the file
    echo $# # gives you number of arguments
}

# Do not change anything
if [ ! $# -lt 1 ]; then
    File $*
    exit 0
fi

# change here
# here you can pass the arguments
bash 02.sh Shell is fun