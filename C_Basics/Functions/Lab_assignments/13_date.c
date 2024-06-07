//Write a function that takes 2 dates as inputs, and returns 1 if the first date is old, 2 if the second date is old.

#include<stdio.h>

int date(int d1, int d2, int m1, int m2, int y1, int y2)
{
	if(y1>y2)
		//	printf("Person born on %d-%d-%d is older\n",d2,m2,y2);
		return 2;
	else if(y1==y2)
	{
		if(m1>m2)
		{
			//                      printf("Person born on %d-%d-%d is older\n",d2,m2,y2);
			return 2;
		}
		else if(m1==m2)
		{
			if(d1>d2)
			{
				//                              printf("Person born on %d-%d-%d is older\n",d2,m2,y2);
				return 2;              
			}
			else if(d1==d2)
			{
				//                            printf("Both are of same age\n");
				return 0;

			}
			else
			{
				//                          printf("person born on %d-%d-%d is older\n",d1,m1,y1);
				return 1;
			}

		}
		else
		{
			//                printf("Person born on %d-%d-%d is older\n",d1,m1,y1);
			return 1;
		}
	}

	else
	{
		//      printf("Person born on %d-%d-%d is older\n",d1,m1,y1);
		return 1;

	}

}


int main()
{
	int d1,d2,m1,m2,y1,y2;
	int result;

	printf("Enter first DOB:");
	scanf("%d-%d-%d",&d1,&m1,&y1);

	printf("Enter second DOB:");
	scanf("%d-%d-%d",&d2,&m2,&y2);

	result=date(d1,d2,m1,m2,y1,y2);

	if(result==1)
		printf("First is older\n");

	else if(result==2)
		printf("Second is older\n");

	else
		printf("Both have same age\n");

	return 0;
}


/* OUTPUT:

	Enter first DOB:2-05-2000
	Enter second DOB:2-05-2001
	First is older

	Enter first DOB:2-05-2000
	Enter second DOB:2-05-2000
	Both have same age

	Enter first DOB:2-05-2000
	Enter second DOB:3-06-2000
	First is older
*/
