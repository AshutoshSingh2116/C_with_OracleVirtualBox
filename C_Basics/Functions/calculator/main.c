#include<stdio.h>

int main()
{
char c;
int a,b;
int A,S,D,M;

printf("Enter two numbers:");
scanf("%d%d",&a,&b);

printf("Enter the operator:");
scanf(" %c",&c);

switch(c)
{
case '+':  A=add(a,b);
	   printf("%d+%d=%d\n",a,b,A);
	   break;

case '-':  S=sub(a,b);
	   printf("%d-%d=%d\n",a,b,S);
	   break;

case '/':  D=div(a,b);
	   printf("%d/%d=%d\n",a,b,D);
	   break;

case '*':  M=mul(a,b);
	   printf("%d*%d=%d\n",a,b,M);
	   break;
}
return 0;
}
