// Write a function that takes an integer number as input and prints its multiplication table.return type is  void.


#include<stdio.h>

//FUNCTION DEFINITION

void table(int a)
{ 
	int multiply;

	for(int i=1;i<=10;i++)
	{
		multiply=a*i;
		printf("%d*%d=%d\n",a,i,multiply);
	}
}


//FUNCTION CALL
int main()
{
	int a;

	printf("Enter a number to print its table:");
	scanf("%d",&a);

	if(a<=0)
	{
		printf("Invalid Input\n");
		return 1;
	}

	table(a);

	return 0;
}

/* OUTPUT:

Enter a number to printf its table:4
4*1=4
4*2=8
4*3=12
4*4=16
4*5=20
4*6=24
4*7=28
4*8=32
4*9=36
4*10=40


Enter a number to printf its table:0
Invalid Input

*/
