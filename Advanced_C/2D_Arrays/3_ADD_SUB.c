//Write a program  for matrix addition and subtraction.

#include<stdio.h>

int main()
{
	int row1,col1;
	int row2,col2;
	int row3,col3;

	//int arr3[row1][col1];
	//MATRIX 1
	printf("Enter rows for matrix 1:");
	scanf("%d",&row1);
	printf("Enter columns for matrix 1:");
	scanf("%d",&col1);
	int arr1[row1][col1];

	//MATRIX 2
	printf("Enter rows for matrix 2:");
	scanf("%d",&row2);
	printf("Enter columns for matrix 2:");
	scanf("%d",&col2);
	int arr2[row2][col2];

	//input for MATRIX 1:
	printf("Enter the numbers for matrix 1:");
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col1;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}

	//input for MATRIX 2:
	printf("Enter the numbers for matrix 2:");
	for(int i=0;i<row2;i++)
	{
		for(int j=0;j<col2;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}

	printf("The matrix after addition is:");
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col1;j++)
		{
			printf("%d",arr1[i][j]+arr2[i][j]);
		}
		printf("\n");
	}
	printf("\n");


	printf("The matrix after subtraction is:");
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col1;j++)
		{
			printf("%d",arr1[i][j]-arr2[i][j]);
		}
		printf("\n");
	}
	printf("\n");



	return 0;
}


/*Output:

Enter rows for matrix 1:3
Enter columns for matrix 1:3
Enter rows for matrix 2:3
Enter columns for matrix 2:3

Enter the numbers for matrix 1:5 6 7 
8 7 9
4 5 6
Enter the numbers for matrix 2:1 2 3
3 4 5
2 3 4
The matrix after addition is:6810
11 11 14
6  8  10

The matrix after subtraction is:444
5 3 4
2 2 2

*/
