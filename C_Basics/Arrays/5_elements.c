/*  Write the following program.
Declare an integer variable ‘size’.
Take the value of ‘size’ from user using scanf.
Declare an array of any datatype, and give the integer variable ‘size’, in place of size of the array  and initialize it to some values.(syntax: float array[size] = {1.0,2.5};)
Using for loop, try to take user input using scanf. Loop should execute ‘size’ number of times.
Using for loop, print the elements of the array.
  */


#include<stdio.h>
int main()
{
	int size;
	printf("Enter the value of size:");
	scanf("%d",&size);

	int a[size];

	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}

	for(int i=0;i<size;i++)
	{
		printf(" %d",a[i]);
	}
	printf("\n");
	return 0;
}

/*

Enter the value of size:4
1 3 5 7
1 3 5 7

*/
