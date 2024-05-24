//Read the DOB of two candidates user into three different variables each and print the dates of person who is older and 
//also print if they are of same age using Nested If-Else Operators.




#include<stdio.h>
int main()
{

	int d1,m1,y1,d2,m2,y2;

	printf("Enter the first DOB:");
	scanf("%d-%d-%d",&d1,&m1,&y1);

        printf("Enter the first DOB:");
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
				 printf("Person born on %d-%d-%d is older\n",d1,m1,y1);
		        }

		}		
		else
		{
			 printf("Person born on %d-%d-%d is older\n",d1,m1,y1);

	        }
        }
	
	else
		 printf("Person born on %d-%d-%d is older\n",d1,m1,y1);

return 0;

}



/* Output: 

	Enter the first DOB:22-05-2024
        Enter the first DOB:22-06-2024
        Person born on 22-5-2024 is older 


	Enter the first DOB:22-05-2000
        Enter the first DOB:2-05-2000
        Person born on 2-5-2000 is older
				           


        Enter the first DOB:1-2-2000
	Enter the first DOB:17-02-2001
	Person born on 1-2-2000 is older

 */
