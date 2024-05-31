//Read two numbers from the user, and print all serial numbers between those numbers.

#include<stdio.h>

int main()
{
	int a,b;

	printf("Enter first number:");
	scanf("%d",&a);

	printf("Enter second number:");
	scanf("%d",&b);

	while(a<=b)
	{
		printf("%d\n",a);
		a++;
	}

	return 0;
}

/*OUTPUT 1:

	Enter first number:4
	Enter second number:9
	4 5 6 7 8 9.

OUTPUT 2:
	Enter first number:56
	Enter second number:63
	56 57 58 59 60 61 62 63    */
