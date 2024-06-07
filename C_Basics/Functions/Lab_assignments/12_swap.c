//Write a function ,that can take two integers, swap their values and print their new values. return type should be void. function should print the values.

#include<stdio.h>

//FUNCTION DEFINITION

void swap(int a, int b)
{
	int n;
	n=a;
	a=b;
	b=n;

	printf("The new value of a is:%d and b is:%d\n",a,b);

}


//FUNCTION CALL
int main()
{
	int a,b;


	printf("Enter two integers a and b:");
	scanf("%d%d",&a,&b);

	swap(a,b);

	return 0;
}

/* OUTPUT:

	Enter two integers a and b:43 54
	The new value of a is:54 and b is:43

	Enter two integers a and b:23 12
	The new value of a is:12 and b is:23
*/
