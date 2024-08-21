/*3)"Write the calculator program using a function that accepts a function pointer and the operand values as arguments and invokes it. In the main function, simply invoke this function by sending the appropriate function address, based on the operator chosen.
eg.,
in main
case '+' :invokeptr(add , x,y);


invokeptr(int (*fptr) (int,int) , int x, int y)
{
printf(""%d\n"",fptr(x,y));
}"
*/


#include<stdio.h>

int main()
{
	int x,y;char c;
	printf("enter x and y values:");
	scanf("%d%d",&x,&y);
	int add(int,int);
	int sub(int,int);
	int mul(int,int);
	int div(int,int);
	int mod(int,int);



	int invokeptr(int (*fptr) (int,int) , int x, int y);

	//invokeptr (*p[])(int,int)={add,sub,mul,div,mod};
	printf("Enter operator: +,-,*,/,%%:");
	scanf(" %c",&c);
	switch(c)
	{
		case '+':printf("add:\n");
			 invokeptr(add,x,y);

			 break;
		case '-':printf("sub:\n");
			 invokeptr(sub,x,y);
			 break;
		case  '*':printf("mul:\n");
			  invokeptr(mul,x,y);

			  break;
		case  '/':printf("Div:\n");
			  invokeptr(div,x,y);

			  break;
		case  '%':printf("mod:\n");
			  invokeptr(mod,x,y);
			  break;
		default:printf("Invalid operation\n");    
	}
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

int invokeptr(int (*fptr) (int,int) , int x, int y)
{
	printf("%d\n",fptr(x,y));
}


/* OUTPUT:

enter x and y values:3 4
eneter operator: +,-,*,/,%:+
add:7

*/
