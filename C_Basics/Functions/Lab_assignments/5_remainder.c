// Write a function that takes two numbers a and b, and returns the remainder after dividing a with b.

#include<stdio.h>

//Function Definition

int rem(int a, int b)
{
	int remainder;
	remainder=a%b;
	return remainder;
}

//Function Call

int main()
{  int a,b;
	int remainder;

	printf("Enter two numbers to divide:");
	scanf("%d%d",&a,&b);

	if(a<b)
	{
		printf("Invalid input\n");
		return 1;
	}

	remainder= rem(a,b);

	printf("The result is:%d\n", remainder);
	return 0;
}


/* OUTPUT:


	Enter two numbers to divide:56 3
	The result is:2

	Enter two numbers to divide:23 11
	The result is:1


*/
