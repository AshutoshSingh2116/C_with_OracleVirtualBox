// Write a program to print the address of a variable , its value ,its size, try different executions and note the address printed. Assign the address of the variable to a pointer variable.Print the size of pointer and its indirected value (apply * operator).


#include<stdio.h>

int main()
{
	int a;
	int *p;
	p=&a;

	printf("Enter the value of a:");
	scanf("%d",&a);

	printf("The address of the variable is:%p\n",&a);
	printf("The value of variable is:%d\n",a);
	printf("The size of the variable is:%lu\n",sizeof(a));
	printf("The size of pointer is:%lu\n",sizeof(*p));

	return 0;
}

/*OUTPUT:

Enter the value of a:16
The address of the variable is:0x7ffe22a7b51c
The value of variable is:16
The size of the variable is:4
The size of pointer is:4

*/
