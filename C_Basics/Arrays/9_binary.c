//Write a program to print an integer in binary format using arrays.

#include<stdio.h>

int main()
{
	int n;
	int a[n];
	printf("Enter a number for conversion:");
	scanf("%d",&n);

	int i=0;
	while(n>0)
	{

		a[i]=n%2;
		n=n/2;
		i++;

	}

	printf("Binary number is:");

	for(int j=i-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}
	printf("\n");
	return 0;
}

/* OUTPUT:

Enter a number for conversion:17
Binary number is:10001

*/
