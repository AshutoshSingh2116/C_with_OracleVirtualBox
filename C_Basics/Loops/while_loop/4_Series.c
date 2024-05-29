//Write a program to print the value of below series:
//1 - 1/2 + 1/3 - 1/4 .... + 1/n etc

#include<stdio.h>
int main()
{
	int n,i=2;

	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("1");

	while(i<=n)
	{

		if(i%2==0)
		{
			printf("-1/%d",i);
		}
		else
		{
			printf("+1/%d",i);
}
			i++;

		
	}
	printf("\n");
	return 0;
}

/* OUTPUT:: 

	Enter the value of n:3
	1-1/2+1/3  

	Enter the value of n:5
	1-1/2+1/3-1/4+1/5
 */

