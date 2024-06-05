//using while ,do while and for loops :
/*	*
	* *
	* * *
	* * * *
	* * * * *         */

#include<stdio.h>
int main()
{
	int i,j,n;

	printf("Enter n for rows:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");}

	return 0;
}

/* output:

	Enter n for rows:5
	* 
	* * 
	* * * 
	* * * * 
	* * * * *     */
