/*

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/


#include<stdio.h>
int main()
{
	int i,j,n;

	printf("Enter n for rows:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");

		for(j=1;j<=2*i-1;j++)
			printf("*");

		printf("\n");
	}
	n--;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf(" ");

		for(j=1;j<=2*(n-i)+1;j++)
			printf("*");

		printf("\n");
	}
	return 0;
}



/* OUTPUT:


Enter n for rows:5
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/
