//Write a program to read a number n and print the factorial of n.

#include<stdio.h>
int main()
{
	int i=1,n,fact=1;
	printf("Enter a number:");
	scanf("%d",&n);

	while(i<=n)
	{
		fact=fact*n;
		n--;
	}
	printf("Factorial is:%d\n",fact);
	return 0;
}



/*OUTPUt:
	 Enter a number:3
	 Factorial is:6


	 Enter a number:5
	 Factorial is:120

