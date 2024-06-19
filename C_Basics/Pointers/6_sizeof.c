//declare different pointers with different data types. Print the sizes of the pointer variables using sizeof operator. Why do u think all of them are giving same size irrespective of the data type ?

#include<stdio.h>

int main()
{
	int *p1;
	char *p2;
	float *p3;

	printf("The size of pointer p1 is:%lu\n",sizeof(p1));
	printf("The size of pointer p2 is:%lu\n",sizeof(p2));
	printf("The size of pointer p3 is:%lu\n",sizeof(p3));

	return 0;
}


/* OUTPUT:

The size of pointer p1 is:8
The size of pointer p2 is:8
The size of pointer p3 is:8

*/
