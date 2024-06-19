// Write a program to add two variables using their pointers.

#include<stdio.h>

int main()
{
	int a; int b; int p;

	printf("Enter two values to add:");
	scanf("%d%d",&a,&b);

	int *p1=&a;
	int *p2=&b;

	p=(*p1) + (*p2);

	printf("The sum is:%d\n",p);

	return 0;
}

/* OUTPUT:

Enter two values to add:14 6
The sum is:20
