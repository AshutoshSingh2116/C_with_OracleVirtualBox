//(4) Take an integer as input and print its magnitude (remove sign and print only number).

#include<stdio.h>

int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);

	if(n<0)
	{	
		n=n*(-1);
		printf("%d\n",n);
	}

	else
		printf("%d\n",n);

return 0;


}


/* Output:
        n=-3
	if(n<0) is true,
	n=-3*(-1)
	 =3

the ouput is: 3   */



