/*

1
2  3
4  5  6
7  8  9  10
11 12 13 14 15     */



#include <stdio.h> 
int main() 
{ 
	int i,j,n,k=0;
	printf("Enter n for rows:");
	scanf("%d",&n);

	for (int i=1; i<=n; i++)
	{

		for(j=1;j<=i;j++)
		{
			printf("%d",++k);
			printf(" ");
		}
		printf("\n");

	} 
	return 0; 
}

/* OUTPUT:

Enter n for rows:5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 	


*/
