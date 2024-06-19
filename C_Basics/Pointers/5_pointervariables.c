// Declare 3 pointer variables of integer type, and an integer variable. Assign the address of integer variable to the 3 pointers. Print the variable value using indirection on each pointer variable. Change the variable value directly and check the values of each of the pointers using indirection. Change the variable value , using each pointer and print the variable value and indirected values of all pointers every time you change.

#include<stdio.h>

int main()
{
	int *p1, *p2, *p3;

	{
		int a;
		printf("Enter the value of a:");
		scanf("%d",&a);

		p1=&a;
		p2=&a;
		p3=&a;

		printf("The value of variable a is:%d\n",*p1);
		printf("The value of variable a is:%d\n",*p2);
		printf("The value of variable a is:%d\n",*p3);
	}
	int a=4;
	p1=&a;
	p2=&a;
	p3=&a; 

	printf("The value of variable a is:%d\n",*p1);
	printf("The value of variable a is:%d\n",*p2);
	printf("The value of variable a is:%d\n",*p3);

	*p1=9;
	*p2=8;
	*p3=7;

	printf("The value of variable a is:%d\n",*p1);
	printf("The value of variable a is:%d\n",*p2);
	printf("The value of variable a is:%d\n",*p3);

	return 0;

}


/* OUTPUT:

Enter the value of a:16
The value of variable a is:16
The value of variable a is:16
The value of variable a is:16
The value of variable a is:4
The value of variable a is:4
The value of variable a is:4
The value of variable a is:7
The value of variable a is:7
The value of variable a is:7


*/
