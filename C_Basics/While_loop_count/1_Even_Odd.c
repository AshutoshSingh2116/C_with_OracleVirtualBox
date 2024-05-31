//Read n number of numbers from user (n value taken as input) and print if each number is even or odd.

#include<stdio.h>

int main()
{
	int n,c,d=1,a,b;

	printf("Enter total number of numbers:");
	scanf("%d",&n);

	printf("Enter the number:");

	while(d<=n)
	{

		scanf("%d",&a);
		c=a%10;
		a=a/10;

		if(c%2==0)
			printf("%d is even\n",c);

		else
			printf("%d is odd\n",c);

		d++;
	}
	return 0;
}


/*OUTPUT:
	Enter total number of numbers:3
	Enter the number:2 4 1
	2 is even
	4 is even
	1 is odd

	Enter total number of numbers:5
	Enter the number:34 5 12 4 67
	4 is even
	5 is odd
	2 is even
	4 is even
	7 is odd             */

