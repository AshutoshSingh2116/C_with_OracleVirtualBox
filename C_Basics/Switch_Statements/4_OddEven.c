//C program to check whether a number is odd or even using switch statement


#include<stdio.h>

int main()
{
	int n,d;
	printf("Enter an integer:");
	scanf("%d",&n);

	d=n%2;

	switch(d)
	{
		case 0:
			printf("Number is Even\n");
			break;

		default:
			printf("Number is Odd\n");

	}
	return 0;
}


/*OUTPUT:

	Enter an integer:4
	Number is Even

	Enter an integer:5
	Number is Odd           */

