/*

5
44
333
2222
11111

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
			printf("%d",i);

		printf("\n");
	}
	return 0;
}

/* OUTPUT :

Enter n for rows:5
5
44
333
2222
11111
*/
