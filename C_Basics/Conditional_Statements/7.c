//(7) Write a calculator program that takes two integer numbers from the user, and one of the operands +,-,* and / as a character and prints the appropriate result using if else.

#include<stdio.h>

int main()
{
	float  a,b;
	float  d;
	char c;
	

	printf("Input the operator to be used:");
	scanf("%c",&c);

        printf("Enter the two operands:");
        scanf("%f%f",&a,&b);



	if(c=='+')
	{	
		d=a+b;
		printf("%f\n",d);
	}
	
	else if(c=='-')
        {
                d=a-b;
                printf("%f\n",d);
        }

        else if(c=='*')
        {
                d=a*b;
                printf("%f\n",d);
        }

	else
        {
		d=a/b;
		printf("%f\n",d);

	}

return 0;

}




/* Output:
	Enter the operator:*
	Enter the operands: 2.0 and 3.0
	else if(c=='*') is true
	d=a*b
	 =2.0*3.0=6.0 
  	ouput is: 6.0              */

