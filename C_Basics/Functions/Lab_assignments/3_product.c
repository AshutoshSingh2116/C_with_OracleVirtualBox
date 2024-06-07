/* Write a function that takes two numbers a and b as input arguments and returns their product as return value , without using * operator.  */


#include<stdio.h>

//Function Definition

int prod(int a, int b)
{ 
	int product=0;
	for(int i=1;i<=b;i++)
	{
		product=product+a;
	} 
	return product;
}



//FUnction call

int main()
{
	int a,b;
	int product;
	printf("Enter two numbers to find products:");
	scanf("%d%d",&a,&b);

	if(a==0||b==0)
	{
		printf("The product is:0\n");
		return 1;
	}

	product=prod(a,b);

	printf("The product is:%d\n",product);
	return 0;
}

/* OUTPUT:

	Enter two numbers to find products:34 9
	The product is:306

	Enter two numbers to find products:12 12
	The product is:144


*/
