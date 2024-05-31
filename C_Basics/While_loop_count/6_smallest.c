//Read  n numbers from the user ,and print the smallest number of all.

#include<stdio.h>
int main()
{
	int n,a,b,c,z,d=2;

	printf("Enter the total numbers:");
	scanf("%d",&n);

	printf("Enter first number:");
	scanf("%d",&a);

	c=a;

	while(d<=n)
	{
		printf("Enter any number:");
		scanf("%d",&b);

		if(c<b)
		{
			z=c;

		}
		else
		{
			z=b;

		}
		c=z;
		d++;

	}
	printf("%d is smallest\n",z);

	return 0;
}

/* OUTPUT 1:

	Enter the total numbers:3
	Enter first number:23
	Enter any number:43
	Enter any number:34
	23 is smallest

OUTPUT 2:
	
	Enter the total numbers:3
	Enter first number:56
	Enter any number:65
	Enter any number:6
	6 is smallest
*/
