//Declare an integer array of size 10 and initialize it to some values. Print the addresses of each element of the array using a pointer. using indirection operator , print the value stored in each element of the array.

#include<stdio.h>

int main()
{
	int arr[10];

	int i;

	printf("Enter 10 elements of an array:");
	for(int i=0; i<10; i++)
		scanf("%d",&arr[i]);

	int *p1=&arr[i];

	for(int i=0;i<10;i++)
	{
		p1=&arr[i];
		printf("The address of %d is:%p\n",arr[i],p1);
	}
	

	for(int i=0;i<10;i++)
	{
		p1=&arr[i];	
		printf("The value in index %d is:%d\n",i,*p1);
	}


return 0;

}

/* OUTPUT:

Enter 10 elements of an array:1 2 3 4 5 6 7 8 9 10
The address of 1 is:0x7ffef4ae1cf0
The address of 2 is:0x7ffef4ae1cf4
The address of 3 is:0x7ffef4ae1cf8
The address of 4 is:0x7ffef4ae1cfc
The address of 5 is:0x7ffef4ae1d00
The address of 6 is:0x7ffef4ae1d04
The address of 7 is:0x7ffef4ae1d08
The address of 8 is:0x7ffef4ae1d0c
The address of 9 is:0x7ffef4ae1d10
The address of 10 is:0x7ffef4ae1d14
The value in index 0 is:1
The value in index 1 is:2
The value in index 2 is:3
The value in index 3 is:4
The value in index 4 is:5
The value in index 5 is:6
The value in index 6 is:7
The value in index 7 is:8
The value in index 8 is:9
The value in index 9 is:10

*/
