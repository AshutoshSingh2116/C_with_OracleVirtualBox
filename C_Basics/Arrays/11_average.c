/* Write a function to return the average of marks of all students in a class. */


#include<stdio.h>
float marks(int a[],int);
int main()
{
	int n,i;
	float avg;
	printf("Enter the array size\n");
	scanf("%d",&n);
	int a[n];

	printf("Enter the elements of an array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	avg=marks(a,n);
	printf("Avg of students =%f\n",avg);
	return 0;
}
float marks(int a[],int n)
{
	int i;
	float sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	sum=sum/n;
	return sum;
}

/*enter the array size
5
100 50 60 60 80
avg of students =70.000000*/
