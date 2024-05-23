//Write a program to determine whether an integer is odd or even, and displays appropriate message.

#include<stdio.h>

int main()
{
	int a;
	printf("Enter the character:");
	scanf("%d",&a);

	a%2==0?printf("Number is even\n"):printf("Number is odd\n");

return 0;
}


/* Output: int n=8
	Result is:Number is even   */

