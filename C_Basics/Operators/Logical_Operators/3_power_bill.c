//Find the power bill for the input number of units.

#include<stdio.h>

int main()
{
 int a,d,b;

	printf("Enter the units consumed:");
	scanf("%d",&a);

	if(a>0 && a<=200)
	printf("Rs. 100\n");

	else if(a>200 && a<=400)
	{
		d=100+(0.65*200);
		printf("Rs.%d\n",d);
	}

	else if(a>400 && a<=600)
	{
		d=230+(0.80*400);
		printf("Rs.%d\n",d);
	}

	else
	{
		b=a-600;
		d=390+(1*b);
		printf("Rs.%d\n",d);
	}

return 0;
}



/*Output:  a=700 units
	   b=700-600=100;
	   d=390+(1*100);
	   Result: Rs.490           */


