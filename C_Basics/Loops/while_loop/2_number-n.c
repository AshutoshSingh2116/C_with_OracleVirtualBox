//write a program to read a number n, and print sum of all the numbers from 1 to n.

#include<stdio.h>
int main()
{
	int n,sum =0,i=1;
	printf("Read the number:");
	scanf("%d",&n);

	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("Sum is %d\n",sum);
	return 0;
}



/*OUTPUT:

	Read the number:2
	Sum is 3

	Read the number:5
	Sum is 15                    */
