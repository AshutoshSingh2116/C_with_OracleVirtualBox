/*
5
54
543
5432
54321

*/


#include<stdio.h>
int main()
{
	int i,j,n;

	printf("Enter n for rows:");
	scanf("%d",&n);

	for(i=n;i>0;i--)
	{
		for(j=n;j>=i;j--)
			printf("%d",j);

		printf("\n");
	}
	return 0;
}

/* OUTPUT:

Enter n for rows:5
5
54
543
5432
54321

*/
