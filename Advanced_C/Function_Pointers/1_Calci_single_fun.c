//1. Write the calculator program using function pointers for add, sub, mul, div and mod functions, using a single function pointer.

#include<stdio.h>

int main()
{
	int x,y,c;
	printf("Enter x and y values:");
	scanf("%d%d",&x,&y);
	int add(int,int);
	int sub(int,int);
	int mul(int,int);
	int div(int,int);
	int mod(int,int);
	int (*p)(int,int);

	//int (*p[](int,int))={add,sub,mul,div,mod};
	printf("Enter your choice: 1.add:, 2.sub:, 3.mul:, 4.Div:, 5.Mod:\n");
	scanf("%d",&c);

	switch(c)
	{
		case 1:p= add;
		       printf(" Add:%d\n",p(x,y));
		       break;
		case 2:p=sub;
		       printf("Sub:%d\n",p(x,y));
		       break;
		case  3:p=mul;
			printf("Mul:%d\n",p(x,y));
			break;
		case 4: p=div;
			printf("Div:%d\n",p(x,y));
			break;
		case 5: p=mod;
			printf("Mod:%d\n",p(x,y));
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

/* OUTPUT:

Enter x and y values:3 2
Enter your choice: 1.add:, 2.sub:, 3.mul:, 4.Div:, 5.Mod:
2   
Sub:1

*/
