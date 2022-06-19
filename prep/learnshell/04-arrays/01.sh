#!/bin/bash

my_array=(apple banana "Fruit Basket" orange)
new_array[2]=apricot

echo ${#my_array[@]} # prepend '#' and set '@' in the index section
echo ${my_array[3]} # 0-index, 4th value

my_array[4]=carrot

echo ${my_array[4]}
echo ${#my_array[@]}
echo ${my_array[${#my_array[@]} - 1]}