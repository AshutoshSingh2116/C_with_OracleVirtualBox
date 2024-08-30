# Question 2. Write Script to find out biggest number from given three nos. Nos are supplied as command line arguments. Print error if sufficient arguments are not supplied.

echo "Enter the three numbers"

if [ $1 -gt $2 ] && [ $1 -gt $3 ]
then
	echo "$1 is greatest"

elif [ $2 -gt $3 ]
then
	echo "$2 is greatest"

else 
	echo "$3 is greatest"

fi


# OUTPUT:
#	$ ./2_BIGGEST.sh 15 10 20
#	Enter the three numbers
#	20 is greatest
	
