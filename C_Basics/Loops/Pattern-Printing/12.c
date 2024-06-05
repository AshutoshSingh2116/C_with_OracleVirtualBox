/* 

*
**
***
****
*****
		*/

#include<stdio.h>
int main()
{
	int i,j,n;

	printf("Enter n for rows:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{

		j=0;
j:     if(j<=i)
       {
	       printf("*");
	       j++;
	       goto j;
       }

       else
       { 
	       printf("\n");

       }
	}
	return 0;
}

/* OUTPUT:

	Enter n for rows:5
	*
	**
	***
	****
	*****
*/
