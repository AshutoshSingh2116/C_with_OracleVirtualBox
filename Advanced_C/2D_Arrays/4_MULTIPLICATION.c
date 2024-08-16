// Write a program for matrix multiplication.

#include<stdio.h>

int main()
{
	int sum;
	int row1,col1;
	int row2,col2;

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


	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col2;j++)
		{
			sum=0;
			for(int k=0;k<col1;k++)
			{
				sum+=arr1[i][k]*arr2[k][j];
				printf("%d ",sum);
			}
			printf("\n");
		}
	}
		return 0;
	}

/* OUTPUT:

Enter rows for matrix 1:2
Enter columns for matrix 1:2
Enter rows for matrix 2:2
Enter columns for matrix 2:2
Enter the numbers for matrix 1:1 2 3 4
Enter the numbers for matrix 2:1 2 3 3
1 7 
2 8 
3 15 
6 18 

*/



















