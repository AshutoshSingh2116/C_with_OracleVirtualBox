/* Write a function to calculate simple interest. Call it in main function with appropriate inputs and print the total amount the user will get after the tenure (principle + interest) */


#include<stdio.h>

float Simple_Interest(int P,int n,float r)
{
	float SI;
	float y;
	//float A;
	y=n/12.0;
	SI=(P*y*r)/100.0;
	//A=SI+P;
	return SI;
	
}


int main()
{
	int P,n;
	float r,SI;
	float A;
	printf("Enter value of P,n and r:");
	scanf("%d%d%f",&P,&n,&r);

	if(P<1)
	{
		printf("Invalid Principle\n");
		return 1;
	}

	if(r<=0)
	{
		printf("Invalid Rate\n");
		return 1;
	}

	if(n<=0)
	{
		printf("Invalid month\n");
		return 1;
	}

	SI= Simple_Interest( P, n, r);

	printf("Total amount is:%f\n",SI+P);

	return 0;
}

/* OUTPUT:

	Enter value of P,n and r:1320 4 24
	Total amount is:2587.199951

	Enter value of P,n and r:123 5 0
	Invalid Rate

*/
