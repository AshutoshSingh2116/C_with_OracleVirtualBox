/* Write a program to swap two arrays in reverse order.
Example: 
input :
array1 = {1,2,3,4,5};
array2 = {6,7,8,9,10};

output:
array1 : {10,9,8,7,6}
array2: { 5,4,3,2,1}   */


#include<stdio.h>
int main()
{
	int i,j,n,temp;
	printf("enter the array size\n");
	scanf("%d",&n);
	int a[n],b[n];
	printf("enter the 1st array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the second array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	for(i=0,j=n-1;i<n;i++,j--)
	{
		temp=a[i];
		a[i]=b[j];
		b[j]=temp;
	}
	printf("the first swapped array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("the second swapped array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
return 0;
}

/*enter the array size
5
enter the 1st array elements
1 2 3 4 5
enter the second array elements
6 7 8 9 10
the first swapped array is:
10 9 8 7 6 the second swapped array is:
5 4 3 2 1 */
