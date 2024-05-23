//WAP to find the biggest of two numbers using conditional operators.


#include<stdio.h>

int main()
{

int a; int b;
	printf("Enter the two numbers:");	
	scanf("%d%d", &a,&b);

	printf("%d is bigger\n",a>b?a:b);

return 0;
}

/* Output: a=2, b=3
   2>3?2:3
   Result: 3 is bigger.  */



