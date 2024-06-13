//i Declare an array of size 10. Enter 10 elements and save them in the array. Print the array . Find out the biggest and smallest numbers and their indexes and print.

#include<stdio.h>
int main()
{
	int index;
	int a[10];
	int big, small;
	printf("The 10 elements are:");

	for(int i=0;i<=9;i++)
	{
		scanf("%d",& a[i]);
		big=a[0];
		small=a[0];
	}


	for(int i=0;i<=9;i++)
	{
		if(a[i]>big)
		{
			big=a[i];
			index=i;
		}}
	printf("The index number of biggest number is:%d\n",index);
	printf("The biggest number is:%d\n",big);



	for(int i=0;i<=9;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
			index=i;
		}}
	printf("The index number of smallest number is:%d\n",index);

	printf("The smallest number is:%d\n",small);


	return 0;
}

/* OUTPUT:

The 10 elements are:12 33 4 56 3 6 57 3 4 9 
The index number of biggest number is:6
The biggest number is:57
The index number of smallest number is:4
The smallest number is:3

*/
