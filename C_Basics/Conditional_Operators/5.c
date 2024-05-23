// Input an alphabet. Output its case reversed.

#include<stdio.h>

int main()
{

	char c;
	printf("Enter the character:");
	scanf("%c",&c);

	c=c<97?c+32:c-32;

	printf("Case reverse of an alphabet is:%c\n",c);

return 0;

}

/* Output: char c ='c'

   c=c<97?c+32:c-32;

result is: Case reverse of an alphabet is: C      */




