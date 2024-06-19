//Take three input integers x,y and z. Write a program to rotate their values such that, x has the value of y, y has the value of z and z has the value of x. Do this using pointers that point to x,y and z.

#include<stdio.h>

int main()
{
	int temp;
	int x; int y; int z;
	printf("Enter the value of x:");
	scanf("%d",&x);

	printf("Enter the value of y:");
	scanf("%d",&y);

	printf("Enter the value of z:");
	scanf("%d",&z);


	int *p1=&x;
	int *p2=&y;
	int *p3=&z;

	temp=*p1;
	*p1=y;
	*p2=z;
	*p3=temp;

	printf("The value of *p1 is:%d\n",*p1);
	printf("The value of *p2 is:%d\n",*p2);
	printf("The value of *p3 is:%d\n",*p3);

	return 0;
}

/* OUTPUT:

Enter the value of x:4
Enter the value of y:5
Enter the value of z:6
The value of *p1 is:5
The value of *p2 is:6
The value of *p3 is:4

*/
