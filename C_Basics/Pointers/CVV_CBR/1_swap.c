//  Write a program to swap two numbers using Call by Value and Call by Reference.

void swapcbv(int a, int b);
void swapcbr(int* a, int* b);


#include<stdio.h>

int main()
{
	int d;
	int a,b;

	printf("Enter the values of a and b:");
	scanf("%d%d",&a,&b);

	swapcbv(a,b);
	swapcbr(&a,&b);

	return 0;
}

void swapcbv(int a, int b)
{
	int t;
	t=a;
	a=b;
	b=t;

	printf("Swapped values by CBV is:a=%d,b=%d\n",a,b);

}


void swapcbr(int* p, int* q)
{
	int t;

	t=*p;
	*p=*q;
	*q=t;

	printf("Swapped value by CBR is:a=%d,b=%d",*p,*q);

}

/* OUTPUT:

Enter the values of a and b:32 54
Swapped values by CBV is:a=54,b=32
Swapped value by CBR is:a=54,b=32


*/
