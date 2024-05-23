//Check if the character is an alphabet or not.

#include<stdio.h>

int main()
{
    char c;


	printf("Enter the character:");
	scanf("%c",&c);

	c<=90?c>=65? printf("It is an alphabet\n"):printf("Its is not an alphabet\n"):c<=122?c>=97?printf("It is an alphabet\n"):printf("Not an alphabet\n"):printf("It is not an alphabet\n");

return 0;

}


/* Output: char c= 'd'
	result is:"Its an alphabet"      */
  



