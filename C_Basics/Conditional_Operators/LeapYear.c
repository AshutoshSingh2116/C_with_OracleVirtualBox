// Check if an year is Leap Year or not.


#include<stdio.h>

int main()
{

	int n;
	printf("Enter the year:\n");
	scanf("%d",&n);

	n%100!=0?n%4==0?printf("Leap Year\n"):n%400==0?printf("Leap Year"):printf("Not Leap Year"):printf("Not a Leap Year");

return 0;

}


/*Output: 

  	n=2015
	Result is: Not a Leap Year           */

