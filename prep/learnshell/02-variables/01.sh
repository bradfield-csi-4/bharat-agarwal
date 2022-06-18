#!/bin/bash

# Variable name is case sensitive

PRICE_PER_APPLE=5
MyFirstLetters=ABC
greeting='Hello        world!'

# escape using backlash
echo "The price of an Apple today is: \$HK $PRICE_PER_APPLE"

# Use ${} to avoid ambiguity
echo "The first 10 letters in the alphabet are: ${MyFirstLetters}DEFGHIJ"

# Encapsulate variable name with "" to preserve whitespace
echo $greeting # Hello world!
echo "$greeting" # Hello        world!