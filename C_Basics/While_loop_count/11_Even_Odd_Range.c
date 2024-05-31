// Read two numbers from the user, and print all odd numbers between those numbers and then all even numbers.

#include<stdio.h>
int main()
{
	int a,b,i,j;

	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	i=a;
	j=b;
	printf("Even Numbers:\n");

	while(a<=b)
	{
		if(a%2==0)
		{
			printf("%d\n",a);
			a=a+2;
		}
		else
		{
			a++;
		}
	}

	printf("\nOdd Numbers:\n");

	while(i<=j)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
			i=i+2;
		}
		else
			i++;
	}
	return 0;
}


/* OUTPUT 1:

	Enter two numbers:1 5
	Even Numbers:
	2
	4

	Odd Numbers:
	1
	3
	5

OUTPUT 2: 
	Enter two numbers:33 41
	Even Numbers:
	34
	36
	38
	40

	Odd Numbers:
	33
	35
	37
	39
	41
              */
