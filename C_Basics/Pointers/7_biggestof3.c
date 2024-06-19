//Write a program to find the biggest of three numbers using pointers that point to those numbers.

#include<stdio.h>

int main()
{
	int a; int b; int c;

	printf("Enter the first number:");
	scanf("%d",&a);

	printf("Enter the second number:");
	scanf("%d",&b);

	printf("Enter the third number:");
	scanf("%d",&c);

	int *p1=&a;
	int *p2=&b;
	int *p3=&c;

	if(*p1 > *p2 && *p1 > *p3)
		printf("%d is greater\n",*p1);

	else if(*p2 > *p3)
		printf("%d is greater\n",*p2);

	else
		printf("%d is greater\n",*p3);

	return 0;
}

/* OUTPUT:

Enter the first number:2
Enter the second number:4
Enter the third number:6
6 is greater

*/
