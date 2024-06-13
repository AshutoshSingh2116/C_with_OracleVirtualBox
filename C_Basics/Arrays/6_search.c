/* Write a function to search for a specific element given by the user, in an array and display its index.  Function takes array and element to search as inputs, and returns the index as output. If element not found, return -1.  */

#include<stdio.h>

int search(int a[], int d, int n)
{

	
	int index;
	for(int i=0;i<n;i++)
	{
		if(a[i]==d)
		{
			index=i;
			return index;
		}

		
	}
	return -1;
}



int main()
{
	int i;int n;
	int d;int res;int index;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];

	printf("Enter the %d elements:",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Enter the element to be searched:");
	scanf("%d",&d);

	res=search(a,d,n);
	if(res>=0)
	{
		printf("The index is:%d\n",res);
	}

	else
		printf("Element not found\n");

}


/*  OUTPUT:

Enter the size of array:4
Enter the 4 elements:1 2 3 4
Enter the element to be searched:2
The index is:1

*/
