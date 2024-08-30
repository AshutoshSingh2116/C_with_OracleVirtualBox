# Question 3. Write script to print given number in reverse order, for eg. If no is 123 it must print as 321.

#!/bin/sh

echo "Enter a number to reverse:"
read a
while [ $a != 0 ]
do

b=$((a%10))
echo -n $b
a=$((a/10))
 
done



#outpu:
#234
#432



