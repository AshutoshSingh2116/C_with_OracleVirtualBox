/*Question: Read the dates of births of two candidate's user into 3 different variables each, and print which date born person is the older of the two.
            If date is 28-01-2000, then store 28 in day variable, 1 in month variable and 2000 in year variable.
            Compare two years, two months and two days separately, based on how we normally compare dates to see which is old and which is new.
  
  eg: DOB-1: 28-1-2000
      DOB-2: 28-2-2001
      Output: Person born on 28-01-2000 is older.       */








#include<stdio.h>
int main()
{
  int d1,m1,y1,d2,m2,y2;

  	printf("Enter the 1st DOB:");
	scanf("%d-%d-%d",&d1,&m1,&y1);

	printf("Enter the 2nd DOB:");
	scanf("%d-%d-%d",&d2,&m2,&y2);

	if(y1>y2)
	{
		printf("Person born on %d-%d-%d is older\n",d2,m2,y2);
	}
	
	else if(y1==y2)
	{
		if(m1>m2)
		{
			printf("Person born on %d-%d-%d is older\n",d2,m2,y2);
		}
		else if(m1==m2)
		{
	 		if(d1>d2)
			{
				printf("Person born on %d-%d-%d is older\n",d2,m2,y2);
			}
			else if(d1==d2)
			{	
				printf("Both are of same age\n");

			}
			else
			{
				printf("person born on %d-%d-%d is older\n",d1,m1,y1);
			}

		}
		else
		{
			printf("Person born on %d-%d-%d is older\n",d1,m1,y1);
		}
	}
	
	else
	{
		printf("Person born on %d-%d-%d is older\n",d1,m1,y1);

	}

return 0;

}




/* eg: DOB-1: 28-1-2000
       DOB-2: 28-2-2001
       Output: Person born on 28-01-2000 is older.    */
