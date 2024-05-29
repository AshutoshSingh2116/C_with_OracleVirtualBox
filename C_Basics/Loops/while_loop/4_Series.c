//Write a program to print the value of below series:
//1 - 1/2 + 1/3 - 1/4 .... + 1/n etc

#include<stdio.h>
int main()
{
	int n,i=1;float d=0;

	rintf("Enter the value of n:");
	scanf("%d",&n);

	while(i<=n)
	{
		if(i%2==0)
			d=d-1.00/i;
		else
			d=d+1.00/i;
		i++;
	}

	printf("Sum is:%f\n",d);
	return 0;
}

/* OUTPUT: 

	Enter the value of n:4
	Sum is:0.583333


	Enter the value of n:4
	Sum is:0.583333     */

