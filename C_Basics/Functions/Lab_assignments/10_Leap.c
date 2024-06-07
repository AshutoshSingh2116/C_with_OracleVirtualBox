// Write a function to accept a year as input and return 1 if the year is a leap year, otherwise 0.

#include<stdio.h>

//FUNCTION DEFINITION
int leap(int n)
{

	if((n%100!=0) && (n%4==0) || (n%400==0))
		return 1;

	else 
		return 0;
}

//FUNCTION CALL
int main()
{
	int n;
	int result;


	printf("Enter a year:");
	scanf("%d",&n);

	result=leap(n);
	if(result==1)
		printf("The year is leap year\n");

	else
		printf("The year is not leap year\n");

	return 0;
}

/* OUTPUT:

	Enter a year:2000
	The year is leap year

	Enter a year:1999
	The year is not leap year
*/
