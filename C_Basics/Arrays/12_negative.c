/*Write a function to modify the array such that all negative numbers are converted to positive.   */


#include<stdio.h>

int array(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
			a[i]=a[i]*(-1);
	}


	for(int i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}

	return 0;
}

int main()
{

	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);

	int a[n];

	printf("Enter the elements of array:");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	array(a,n);

	printf("\n");
}


/* OUTPUT:

Enter the size of array:5
Enter the elements of array:-21 -11 16 50 5
 21 11 16 50 5

*/
