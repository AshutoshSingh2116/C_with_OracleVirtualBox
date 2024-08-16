//Declare a two dimensional array of characters, read names from the user and print them back with each individual character format (%c) in a loop.


#include <stdio.h>

int main()
{
	int i,j,r,c;
	printf("Enter the no of rows:");
	scanf("%d",&r);
	printf("Enter the no of columns :");
	scanf("%d",&c);

	char a[r][c],ch;
	scanf("%c",&ch);
	for(i=0;i<r;i++)
	{
		printf("Enter name %d:",i);
		for(j=0;j<20;j++)
		{
			scanf("%c",&a[i][j]);
			if(a[i][j]=='\n')
			{
				break;
			}
		}
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]=='\n')
				break;
			printf("\'%c\' ",a[i][j]);
		}

		printf("\n");
	}

	return 0;
}


/* 
OUTPUT:
 
Enter the no of rows:3
Enter the no of columns :3
Enter name 0:kernel
Enter name 1:masters
Enter name 2:hyderabad
'k' 'e' 'r'
'm' 'a' 's'
'h' 'y' 'd'
