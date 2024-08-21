// 2)Rewrite the calculator program using an array of function pointers.
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
	int dummy(int  , int );



	int (*p[])(int,int)={add,sub,mul,div,mod};
	printf("Enter your choice: 1.add, 2.sub, 3.mul, 4.Div, 5.Mod:\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1://p= add;
			printf(" Add:%d\n",p[0](x,y));
			break;
		case 2://p=sub;
			printf("Sub:%d\n",p[1](x,y));
			break;
		case  3://p=mul;
			printf("Mul:%d\n",p[2](x,y));
			break;
		case  4: //p=div;
			printf("Div:%d\n",p[3](x,y));
			break;
		case  5: //p=mod;
			printf("Mod:%d",p[4](x,y));
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

int dummy(int a , int b)
{
	return 0;
}


/* OUTPUT:

enter x and y values:4 3
Enter your choice: 1.add, 2.sub, 3.mul, 4.Div, 5.Mod:
1
 Add:7

*/
