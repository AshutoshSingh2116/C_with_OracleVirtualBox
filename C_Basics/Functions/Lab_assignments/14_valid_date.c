//Write a  function that takes a date as input, and returns 1 if the date is valid, 0 if the date is invalid.

#include<stdio.h>

//FUNCTION DEFINITION
int date(int d, int m ,int y)
{
	int a;
	if(d>31||d<=0||m>12||m<=0)
		return 0;

	if(y%400==0||y%100!=0 && y%4==0)
	{
		switch(m)
		{
			case 2: a=(d>=1 && d<=29);
				return a;

			case 1:
			case 3:
			case 5: 
			case 7: 
			case 8:
			case 10: 
			case 12:
				return 1;

			default: a=(d>=1 && d<=30);
				 return a;
		}
	}
	else
	{
		switch(m)
		{
			case 2: a=(d>=1 && d<=28);
				return a;

			case 1: 
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				return 1;

			default: a=(d>=1 && d<=30);
				 return a;
		}
	}
}


//FUNCTION CALL
int main()
{
	int d,m,a,y;

	printf("Enter date, month, year:");
	scanf("%d-%d-%d",&d,&m,&y);

	a=date(d,m,y);

	if(a==1)
		printf("Valid date\n");

	else 
		printf("Invalid date\n");

	return 0;
}

/* OUTPUT:

	Enter date, month, year:23-05-2002
	Valid date

	Enter date, month, year:34-05-2002
	Invalid date

*/
