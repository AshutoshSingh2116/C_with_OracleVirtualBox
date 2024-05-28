//(3) C program to check whether a number is positive, negative or zero.

#include<stdio.h>
int main()

{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);

	if(n>0)
		printf("Number is positive\n");

	else if(n<0)
		printf("Number is negative\n");

	else
		printf("Number is zero\n");

return 0;


}


/*Output:
      n=5;
	if(n>0) is true.
 so, output is "Number is positive"  */


