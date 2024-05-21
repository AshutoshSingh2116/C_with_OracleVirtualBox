//(11) Write a program to read 4 numbers and print the biggest of them.

#include<stdio.h>

int main()
{
	int a,b,c,d;
	printf("Enter 4 numbers:");
	scanf("%d%d%d%d",&a,&b,&c,&d);

	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
				printf("a is larger");
			else 
				printf("a is not larger");
		}

	}

	else if(b>c)
	{
		if(b>d)
			printf("b is larger");
		else
			printf("b is not larger");
	}
	
	else if(c>d)
		printf("c is larger");

	else
		printf("d is larger");
	

return 0;
}



/* Output: a=2, b=5, c=1, d=9;
	if(a>b) is false.

	else if(b>c) is true, but not greater than c.

so, next: else: print output: "d is larger"    */
