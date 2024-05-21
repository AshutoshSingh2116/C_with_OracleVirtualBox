//(5) For one type of mobile service, if cost is 250/- upto 100 calls and 1.25/- for each call made over and above 100 calls.
//    Write a program to read the number of calls made and compute and print the bill.


#include<stdio.h>

int main()
{

	int n;
	int a,b,d;
	printf("Enter the number of calls:");
	scanf("%d",&n);
	
	if(n>100)
	{
		d=n-100;
		a=d*(1.25);
		b=a+250;
		printf("The bill is:Rs.%d\n",b);	
	}

	else
		printf("The bill is: Rs.250\n");

return 0;

}



/*Output:
	n=200;	
	if(n>100) is true;
	d=n-100
	 =200-100
	 =100
	a=d*1.25
	 =100*1.25
	b=a+250
	b=125+250
	 =350
So, the output is: 375   */
