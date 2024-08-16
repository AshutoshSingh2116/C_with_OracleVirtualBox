//Search for an element in a two dimensional array, and print its position - as row and column numbers. write a search function that will receive the array and return row and column indexes as output.

#include<stdio.h>
void search (int[][10],int ,int ,int ,int*,int*);
int main()
{
	int n;
	int row1,col1;
//	int *R1=&r1;
//	int *C1=&c1;
	int r1,c1;

	//MATRIX 1
	printf("Enter rows for matrix 1:");
	scanf("%d",&row1);
	printf("Enter columns for matrix 1:");
	scanf("%d",&col1);
	int arr1[row1][10];

	//input for MATRIX 1:
	printf("Enter the numbers for matrix 1:");
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col1;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}

	printf("Enter the element to be searched:");
	scanf("%d",&n);

		search(arr1,row1,col1,n,&r1,&c1);
	printf("%d,%d\n",r1,c1);

}



void search(int arr1[][10],int row1,int col1,int n,int *r1,int *c1) 
{
	int f=0;
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col1;j++)
		{
			if(arr1[i][j]==n)
			{
				f=1;
				*r1=i;*c1=j;
				break;
			}
			
		}
		if(f==1)
			break;
		else
		//	printf("Not found\n");

	}
}


/*
OUTPUT:

Enter rows for matrix 1:3
Enter columns for matrix 1:2
Enter the numbers for matrix 1:1 2 3 4 5 6 
Enter the element to be searched:5
2,0

*/
