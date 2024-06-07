// Write a function to accept a month and year as input, and return the number of days in that month as output. print the number of days in main.

#include<stdio.h>

//FUNCTION DEFINITION

int days(int m, int y) 
{
	if(y%400==0||y%100!=0 && y%4==0)
	{
		switch(m)
		{
			case 2: return 29;

			case 1: 
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:  return 31;

			default:  return 30;
		}
	}

	else
	{
		switch(m)
		{
			case 2: return 28;

			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:   return 31;

			default:   return 30;
		}
	}
}

//FUNCTION CALL

int main()
{
	int m,y,c;

	printf("Enter month and year:");
	scanf("%d%d",&m,&y);

	if(m<=0||m>12)
	{
		printf("Invalid month\n");
		return 1;
	}

	c=days(m,y) ;

	printf("%d days\n",c);
	return 0;
} 

     
/* OUTPUT:

	Enter month and year:03-2000
	31
	Enter month and year:02-2000
	29

*/
