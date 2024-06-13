// Write a program to reverse an array and print it (Reverse the array by swapping both edges of the array and move inside and repeat till middle of the array):  
//Input : array1 ={1,2,3,4,5};
//Output : array1 = {5,4,3,2,1};

#include<stdio.h>
int main()
{
	int i;
	int n,d;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];

	printf("Enter the elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(int i=0;i<n/2;i++)
	{
		d=a[i];
		a[i]=a[n-1-i];
		a[n-i-1]=d;
	}

	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}


	return 0;
}

/* OUTPUT:

Enter the size of array:4
Enter the elements:1 2 3 4
4321

*/
