//Write the calculator program using switch case statement.



#include<stdio.h>

int main()
{
	int a,b; float d;
	printf("Enter the operands:");
	scanf("%d%d",&a,&b);
	char c;
	printf("Enter a character:");
	scanf(" %c",&c);

	switch(c)
	{
		case '*':
			d=a*b;
			printf("Answer is:%f\n",d);
			break;

		case '+':
			d=a+b;
			printf("Answer is:%f\n",d);
			break;

		case '-':
			d=a-b;
			printf("Answer is:%f\n",d);
			break;

		case'/':
			d=a/b;
			printf("Answer is:%f\n",d);
			break;

		default:
			printf("Not a desired character");
       }
	
	return 0;
}



/* OUTPUT:

	Enter the operands:12 4
	Enter a character:+
	Answer is:16.000000


	Enter the operands:12 4
	Enter a character:*
	Answer is:48.000000                  */

