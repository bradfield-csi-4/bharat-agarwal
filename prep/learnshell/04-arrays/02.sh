#!/bin/bash

# In this exercise, you will need to add numbers and strings to the correct arrays.
# Add the numbers 1,2, and 3 to the "numbers" array,
# Add the words 'hello' and 'world' to the strings array.

# You will also have to correct the values of the variable NumberOfNames and the variable second_name.
# NumberOfNames should hold the total number of names in the NAMES array, using the $# special variable.
# Variable second_name should hold the second name in the NAMES array, using the brackets operator [ ].

NAMES=( John Eric Jessica )
# write your code here
NUMBERS=(1 2 3)
STRINGS=('hello' 'world')
NumberOfNames=${#NAMES[@]}
second_name=${NAMES[1]}

echo ${NUMBERS[@]}
echo ${STRINGS[@]}
echo "The number of names listed in the NAMES array: $NumberOfNames"
echo "The second name on the NAMES list is:" ${second_name}