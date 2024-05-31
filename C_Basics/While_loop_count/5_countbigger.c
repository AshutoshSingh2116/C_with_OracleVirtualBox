//Read n numbers in ascending order. If a number entered is bigger than the previous number, then count it. If it is smaller, then don't count it, instead let the loop repeat itself and read another number.

#include<stdio.h>

int main()
{
	int n,a,b,c,d=2,z=0;

	printf("Enter total number to input:");
	scanf("%d",&n);

	printf("Enter first number:");
	scanf("%d",&a);

	c=a;

	while(d<=n)
	{
		printf("Enter any number:");
		scanf("%d",&b);

		if(a<b)
			z++;

		c=b;
		d++;
	}
	printf("%d\n",z);

	return 0;

}


/* OUTPUT 1:

	Enter total number to input:3
	Enter first number:45
	Enter a number:32
	Enter a number:21

OUTPUT 2:

	Enter total number to input:3
	Enter first number:43
	Enter a number:21
	Enter a number:56
*/
