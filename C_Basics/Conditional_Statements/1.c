//(1) Write a progran to read 2 numbers and print the biggest:


#include<stdio.h>
int main()
{
	int a;
	int b;
	printf("Enter two numbers from the user:");
	scanf("%d%d",&a,&b);

	if(a>b)
		printf("%d is greater",a);

	else
		printf("%d is greater",b);

return 0;




}


/* Output: a=43, b=54
   else statement will be executed..
   output is: "54 is greater"  */
