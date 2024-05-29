//Write a program to multiply two numbers without using * operator.

#include<stdio.h>
int main()
{
	int a,b,n=1,sum=0;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);

	while(n<=b)
	{
		sum=sum+a;
		n++;
	}
	printf("Product of 2 numbers is:%d\n",sum);
	return 0;
}


/*OUTPUT:

	Enter first number:2
	Enter second number:3
	Product of 2 numbers is:6

	Enter first number:4
	Enter second number:5
	Product of 2 numbers is:20   */
