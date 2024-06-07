/* Write a function that takes two numbers a and b, and returns the quotient after dividing a with b.  */

#include<stdio.h>

//Function Definition

float quo(float a,float b)
{
	float quotient;
	quotient=a/b;
	return quotient;
}

//FUnction Call

int main()
{
	float a,b;
	float quotient;
	printf("Enter two numbers to divide:");
	scanf("%f%f",&a,&b);

	if(a<b)
	{
		printf("Invalid input:first input should be bigger:\n");
		return 1;
	}

	quotient=quo(a,b);

	printf("The result is:%f\n",quotient);
	return 0;
}

/* OUTPUT:

	Enter two numbers to divide:55 11
	The result is:5.000000

	Enter two numbers to divide:33.98 12.3
	The result is:2.762602
*/
