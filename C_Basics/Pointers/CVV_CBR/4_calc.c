//Write a function that can take two integers as input, and gives 5 outputs : addition, subtraction, multiplication, quotient and reminder of those two numbers. Print the outputs in the main function.

#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int rem(int a, int b);

int main()
{
	int a,b;
	int d;

	printf("Enter two numbers for calculation:");
	scanf("%d%d",&a,&b);

	d=add(a,b);
	printf("The value after addition is:%d\n",d);

	d=sub(a,b);
	printf("the value after subtraction is:%d\n",d);

	d=mul(a,b);
	printf("The value after multiplication is:%d\n",d);

	d=div(a,b);
	printf("The value after division is:%d\n",d);

	d=rem(a,b);
	printf("The value after modulus is:%d\n",d);

	return 0;
}


int add(int p, int q)
{
	int d;

	d=p+q;

	return d;
}


int sub(int p, int q)
{
	int d;

	d=p-q;

	return d;
}


int mul(int p, int q)
{
	int d;

	d=p*q;

	return d;
}


int div(int p, int q)
{
	int d;

	d=p/q;

	return d;
}


int rem(int p, int q)
{
	int d;

	d=p%q;

	return d;
}


/* OUTPUT:

Enter two numbers for calculation:7 3
The value after addition is:10
the value after subtraction is:4
The value after multiplication is:21
The value after division is:2
The value after modulus is:1

*/
