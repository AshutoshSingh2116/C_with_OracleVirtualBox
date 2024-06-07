/* Write a calculator program with 5 functions below to do the operations of addition, subtr    action, multiplication, division for quotient and division for remainder.
    1) int add (int a, int b) // to be called when user chooses +
    2) int sub (int a,int b) // to be called when user chooses -
    3) int mul(int a, int b) // to be called when user chooses *
    4) int quotient(int a, int b) // to be called when user chooses /
    5) int remainder(int a,int b) // to be called when user choose%  */


#include<stdio.h>

//FUNCTION DEFINITION

int add(int a, int b)
{
	int A;
	A=a+b;
	printf("The sum is:%d\n",A);

}

int mul(int a, int b)
{
	int M;
	M=a*b;
	printf("The product is:%d\n",M);

}

int div(int a, int b)
{
	int D;

	if(a>b)
	{ 
		D=a/b;
		printf("The result is:%d\n",D);
	}
	else
		printf("first digit should be greater\n");
}

int sub(int a, int b)
{
	int S;
	S=a-b;
	printf("The difference is:%d\n",S);
}

int mod(int a, int b)
{
	int P;
	P=a%b;
	printf("The value is:%d",P);
}


//FUNCTION CALL

int main()
{ 
	int a,b; 
	char c;
	int result;

	printf("Enter two numbers to perform operation:");
	scanf("%d%d",&a,&b);

	printf("Enter a character:");
	scanf(" %c",&c); 

	if(c=='+')
	{
		result=add(a,b);
	}

	else if(c=='*')
	{
		result=mul(a,b);
	}

	else if(c=='/')
	{
		result=div(a,b);
	}

	else if(c=='-')
	{
		result=sub(a,b);
	}

	else if(c=='%')
	{
		result=mod(a,b);
	}
        
        else
	printf("Enter a valid character\n");
}


/* OUTPUT:

	Enter two numbers to perform operation:3 5
	Enter a character:/
	first digit should be greater

	Enter two numbers to perform operation:3 5
	Enter a character:*
	The product is:15
*/
