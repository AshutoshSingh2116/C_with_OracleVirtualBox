/*4)
"Write the calculator program using a function that accepts an array of function pointers and the operand values and operator character as arguments and invokes appropriate function based on the character. In main function, simply invoke this function by sending the array and operator character and operands as input.
eg.,
in main
case '+' :invokeptr( fparr, x,y, ch);


invokeptr(int (*fptr[]) (int,int) , int x, int y ,char ch)
{
//based on ch value, choose which index to apply on fptr and invoke the function
}
*/

#include<stdio.h>
int add(int ,int );
int sub(int,int);
int mul(int,int);
int div(int,int);
int mod(int,int);
int (*p[])(int,int)={add,sub,mul,div,mul};
int fun(int(*p[])(int,int),int ,int,char ch);
int main()
{
	int a,b;
	char ch;
	printf("Enter two values: ");
	scanf("%d%d",&a,&b);
	printf("Enter character{+,-,*,/,%}: ");
	scanf(" %c",&ch);
	switch(ch)
	{
		case '+':
			fun(p,a,b,ch);
			break;
		case '-':
			fun(p,a,b,ch);
			break;
		case '*':
			fun(p,a,b,ch);
			break;
		case '/':
			fun(p,a,b,ch);
			break;
		case '%':
			fun(p,a,b,ch);
			break;
	}
	return 0;
}
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
int mod(int a,int b)
{
	return a%b;
}
int fun(int (*p[])(int,int),int a,int b,char ch)
{
	if(ch=='+')
	{
		printf("Add: %d\n",p[0](a,b));
	}
	else if(ch=='-')
	{
		printf("Sub: %d\n",p[1](a,b));
	}
	else if(ch=='*')
	{
		printf("MUl: %d\n",p[2](a,b));
	}
	else if(ch=='/')
	{
		printf("Div: %d\n",p[3](a,b));
	}
	else if(ch=='%')
	{
		printf("Mod: %d\n",p[4](a,b));
	}


}


/* OUTPUT:

Enter two values: 2 3
Enter character{+,-,*,/,%}: 
*
MUl: 6


*/
