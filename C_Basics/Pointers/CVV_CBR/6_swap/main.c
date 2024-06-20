//Write two source files, main.c and swap.c. The main function initializes a two-element array of ints, and then calls the swap function to swap the pair.


#include<stdio.h>
void swap(int arr[]);

int main()
{
	int i;
	int arr[2];

	printf("Enter the elements of the array:");
	for(int i=0;i<2;i++)
	{
		scanf("%d",&arr[i]);
	}

	swap(arr);
	printf("After swapping thw array is:");
	for(int i=0;i<2;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0; 
}


/* OUTPUT:

Enter the elements of the array:3 7
After swapping thw array is:7 3 

*/
