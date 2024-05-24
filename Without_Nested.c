//Read the DOB of two candidates user into three different variables each and print the dates of person who is older and 
//also print if they are of same age without using Nested If-Else Operators.
 
  
  
#include<stdio.h>
int main()
 {
	int d1,m1,y1,d2,m2,y2;
  
      	printf("Enter the first DOB:");
        scanf("%d-%d-%d",&d1,&m1,&y1);
 
        printf("Enter the first DOB:");
        scanf("%d-%d-%d",&d2,&m2,&y2);

	if(y1>y2)
		printf("Person born on %d-%d-%d is older\n",d2,m2,y2);
	
	else if(y1<y2)
		printf("Person born on %d-%d-%d is older\n",d1,m1,y1);

	else if(m1>m2)
		printf("Person born on %d-%d-%d is older\n",d2,m2,y2);

	else if(m1<m2)
		printf("Person born on %d-%d-%d is older\n",d1,m1,y1);

	else if(d1>d2)
		printf("Person born on %d-%d-%d is older\n",d2,m2,y2);

	else if(d1<d2)
		printf("Person born on %d-%d-%d is older\n",d1,m1,y1);

	else 
		printf("Both are of same age\n");

return 0;

}



/* Output: 
		Enter the first DOB:12-6-2009
		Enter the first DOB:13-6-2009
		Person born on 12-6-2009 is older

		Enter the first DOB:3-3-2000
		Enter the first DOB:3-3-2000
		Both are of same age              */
