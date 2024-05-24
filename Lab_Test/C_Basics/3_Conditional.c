//Read the DOB of two candidates user into three different variables each and print the dates of person who is older and 
//also print if they are of same age using Conditional Operators.
 

#include<stdio.h>
int main()
 {
        int d1,m1,y1,d2,m2,y2;
	 
        printf("Enter the 1st DOB:");
        scanf("%d-%d-%d",&d1,&m1,&y1);
  
        printf("Enter the 2nd DOB:");
        scanf("%d-%d-%d",&d2,&m2,&y2); 


y1>y2 ? printf("Person born on %d-%d-%d is older\n",d2,m2,y2) : y1<y2 ? printf("Person born on %d-%d-%d is older\n",d1,m1,y1) : m1>m2 ? printf("Person born on %d-%d-%d is older\n",d2,m2,y2) : m1<m2 ? printf("Person born on %d-%d-%d is older\n",d1,m1,y1) : d1>d2 ? printf("Person born on %d-%d-%d is older\n",d2,m2,y2) : d1<d2 ?  printf("Person born on %d-%d-%d is older\n",d1,m1,y1) : printf("Both are of same age\n");

return 0;

}



/* Output:
 	Enter the 1st DOB:23-05-2001
        Enter the 2nd DOB:24-05-2001
        Person born on 23-5-2001 is older.

	Enter the 1st DOB:23-05-2001
	Enter the 2nd DOB:23-05-2001
	Both are of same age.                              */
