//Write a program to find the power of a number to the given number.

#include<stdio.h>
int main()
{
	int a,b,n=1, product=1;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);

	while(b>=n)
	{
		product=product*a;
		n++;
	}
	printf("Product is:%d\n",product);
	return 0;
}

/* OUTPUT:

	Enter first number:2
	Enter second number:3
	Product is:8

	Enter first number:4
	Enter second number:2
	Product is:16                   */

