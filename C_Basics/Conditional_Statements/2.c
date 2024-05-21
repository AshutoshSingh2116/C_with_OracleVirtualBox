//(2) Read an integer as an input and print whether the given number is even or odd.

#include<stdio.h>
int main()
{
	int a;
	printf("Enter an integer:");
	scanf("%d",&a);

	if(a%2==0)
		printf("Number is even\n");

	else
		printf("Number is odd\n");

return 0;


}


/* Output:
	a=6;
	a%2==0;(true)
	output is: Number is even.  */




