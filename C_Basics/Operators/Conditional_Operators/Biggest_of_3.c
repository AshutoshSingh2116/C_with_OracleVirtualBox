//WAP to find the biggest of three numbers.

#include<stdio.h>

int main()
{

	int a; int b; int c; int big;
	printf("Enter the three integers:");
	scanf("%d%d%d",&a,&b,&c);

	big=a;

	big=big<b?b:big;
	big=big<c?c:big;

	printf("The biggest number is:%d\n",big);

return 0;
}

/*Output:  int a=2, int b=5; int c=3

Result is: The biggest number is:5        */


