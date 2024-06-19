//Declare 3 integer variables. Declare an integer pointer. Assign the address of each variable to the pointer in succession and print the value of the variable using indirection operator on the pointer.


#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the values of a,b and c:");
	scanf("%d%d%d",&a,&b,&c);

	int *p1;

	*p1=a;
	printf("The value of a is:%d\n",*p1);

	*p1=b;
	printf("The value of b is:%d\n",*p1);

	*p1=c;
	printf("The value of c is:%d\n",*p1);

	return 0;
}


/* OUTPUT:

Enter the values of a,b and c:2 4 6
The value of a is:2
The value of b is:4
The value of c is:6

*/
