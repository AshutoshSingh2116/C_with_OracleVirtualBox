//Write down a macro to find the biggest of four numbers using biggest of 2 macro.

#include<stdio.h>
#define MAX1(a,b) a>b?a:b

int main()
{
int a,b,c,d;
int x,y;

printf("Enter the values of a,b,c,d:");
scanf("%d%d%d%d",&a,&b,&c,&d);

printf("The biggest of a and b is:%d\n",MAX1(a,b));
x=MAX1(a,b);

printf("The biggest of c and d is:%d\n",MAX1(c,d));
y=MAX1(c,d);

printf("The biggest of a,b,c,d is:%d\n",MAX1(x,y));

}

/* OUTPUT:

Enter the values of a,b,c,d:12 32 43 13
The biggest of a and b is:32
The biggest of c and d is:43
The biggest of a,b,c,d is:43

*/
