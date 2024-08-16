/*Write the following program :
  Declare a two dimensional array of elements and find and print its transpose.
  eg., if the matrix is :       1 3
                                4 5
                                7 8

  its transpose should be :     1 4 7
                                3 5 8

*/

#include<stdio.h>

int main()
{
	//int i,j;
	int rows;
	int col;
	//int arr[rows][col];

	printf("Enter the rows:");
	scanf("%d",&rows);
	printf("Enter the columns:");
	scanf("%d",&col);

		int arr[rows][col];

	printf("Enter the numbers for rows and columns:");
//	taking input 
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}


	printf("The input matrix is:\n");
	// print 
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}

	//printing Transpose:
	printf("The transpose is:\n");

	for(int j=0;j<col;j++)
	{
		for(int i=0;i<rows;i++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
