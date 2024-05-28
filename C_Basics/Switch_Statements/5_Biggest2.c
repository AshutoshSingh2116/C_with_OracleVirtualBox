//C program to find biggest of two numbers using switch statement.

#include<stdio.h>
int main()
{
	int a, b;
	int d;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);

	d=a>b?1:0;

	switch(d)
	{
		case 1:
			printf("%d:Number a is big\n",a);
			break;

		default:
			printf("%d:Number b is big\n",b);

	}
	return 0;
}



/*OUTPUT:

	Enter two numbers:3
	5
	5:Number b is big

	Enter two numbers:67
	56
	67:Number a is big        */


