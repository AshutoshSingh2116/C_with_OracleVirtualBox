//write a function that can take an integer as input and return 1 if the number is prime number,  return 0 if it is not prime and print appropriate output message in main according to output.return type is integer. function name IsPrime - returns int (0 or 1)

#include<stdio.h>

//FUNCTION DEFINITION

int prime(int n)
{   
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;

		else
			return 1;

	}
	return 0;
}



int main()
{
	int n;
	int result;

	printf("Enter a number:");
	scanf("%d",&n);

	if(n<=1)
	{
		printf("Invalid Input\n");
		return 1;
	}

     result=prime(n);
	if(result==1)
		printf("%d is not a prime number\n",n);

	else
		printf("%d is a prime number\n",n);
}


/* OUTPUT:

	Enter a number:1
	Invalid Input

	Enter a number:17
	17 is a prime number

*/
