/* Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n.  */

#include<stdio.h>
#include<math.h>


//function definition

double power(double a,int n)
{
	int Power=1,i;
	for(i=1;i<=n;i++)
	{
		Power=Power*a;
	}
	return Power;
}


//call function

int main()
{
	double a; int n;
	double result;

	printf("Enter two numbers:");
	scanf("%lf%d",&a,&n);

	if(a<=0 && n<=0)
	{
		printf("Invalid numbers\n");
		return 1;
	}

	result= power(a,n);
	printf("The value is:%lf\n",result);
	return 0;
}


/* OUTPUT:

	Enter two numbers:2.43 8
	The value is:724.000000

	Enter two numbers:12.23 3
	The value is:1785.000000

*/
