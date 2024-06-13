/*  write a function to take an array as input, and count how many times the biggest number is     repeated in that array, and return the count.  */

#include<stdio.h>
int main()
{
	int n;
	int big;
	int count=0;

	printf("Enter the size of an array:");
	scanf("%d",&n);

	int a[n];

	printf("The elements of the array are:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	big=a[0];

	for(int i=0;i<n;i++)
	{
		if(a[i]>big)
		{
			big=a[i];
		}
	}
	printf("The biggest number is:%d\n",big);


	for(int i=0;i<n;i++)
	{
		if(a[i]==big)
			count++;
	}

	printf("The biggest number is repeated %d times.\n",count);
	return 0;
}


/* OUTPUT:

Enter the size of an array:5
The elements of the array are:1 4 4 3 4          
The biggest number is:4
The biggest number is repeated 3 times.
 
*/
