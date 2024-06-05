// using while ,do while and for loops :
/*           *
           * *
         * * *
       * * * *
     * * * * *
*/


#include<stdio.h>
int main() 
{
	int i,j,k,n;

	printf("Enter n for rows:");
	scanf("%d",&n) ;

	for(i=1;i<=n;i++)
	{
		for(j=n;j>i;j--)
			printf("  ");

		for(k=1;k<=i;k++)
			printf("* ");

		printf("\n");
	}
	return 0;
} 

/* OUTPUT :

Enter n for rows:5
        * 
      * * 
    * * * 
  * * * * 
* * * * *         */
