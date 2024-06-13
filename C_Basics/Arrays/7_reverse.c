// Write a program to print an array in reverse order


#include<stdio.h>
int main()
{ 
	int i;
	int j;
	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];

	printf("Enter the elements in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(j=n-1;j>=0;j--)
	{
		printf("%d ",arr[j]);

	}
	return 0;
}

/* OUTPUT:

	Enter the elements in array: 5 6 7 8
	8 7 6 5
	Enter the elements in array:12 34 56 76
	76 56 34 12
*/
