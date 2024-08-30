# Question 1. Write shell script that will add two nos, which are supplied as command line argument, and if this two nos are not given show error and its usage



#!/bin/sh

echo "Enter two numbers to add"

if [ $# -eq 2 ]
then
	echo "Two arguments given"
          c=`expr $1 + $2`
		  echo "Sum=$c"
else
	echo "Two arguments not given"
fi

# OUTPUT:
#	Enter two numbers to add
#	Two arguments given
#	Sum=48
