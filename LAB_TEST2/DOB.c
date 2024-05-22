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





