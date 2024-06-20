//Write a function that can rotate the values of three variables. print the results in the main function.

void rotate(int* x, int* y, int* z );

#include<stdio.h>

int main()
{
	int a,b,c;


	printf("Input three numbers to rotates their values:");
	scanf("%d%d%d",&a,&b,&c);

	rotate(&a,&b,&c);

	printf("The swapped values are:a=%d, b=%d, c=%d\n",a,b,c);
	return 0;
}


void rotate(int* x, int* y, int* z)
{
	int temp;


	temp=*x;
	*x=*y;
	*y=*z;
	*z=temp;

}

/* OUTPUT:

Input three numbers to rotates their values:12 34 65
The swapped values are:a=34, b=65, c=12

*/
