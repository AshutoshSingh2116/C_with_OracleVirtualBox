// Read two numbers from the user, and print all numbers in reverse order.

#include<stdio.h>

int main()
{
	int i,n;
	printf("Read 2 numbers:");
	scanf("%d%d",&i,&n);

	while(i<=n)
	{
		printf(" %d",n);
		n--;
	}

	return 0;
}


/*OUTPUT 1:

	Read 2 numbers:2 5
	5432

OUTPUT 2:

	Read 2 numbers:10 20
	20 19 18 17 16 15 14 13 12 11 10   */
