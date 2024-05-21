//(10) check if a given year is a leap year or not.

#include<stdio.h>
int main()
{
	int year;
	printf("Enter a year");
	scanf("%d",&year);

	if(year%4==0)
	{
		if(year%100!=0)
			printf("Its a leap year");
		else
			printf("Its not a leap year");
	}
	
	else if(year%400==0)
		printf("Its a leap year");

	else
		printf("Its not a leap year");

return 0;
}


/* Output: year:2012
	if(year%4==0) is true
inner loop: if(year%100!=0) is also true,

so, The output wii be: "Its a leap year"              */








