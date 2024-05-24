//Read the character and print if its alphabet or not.

#include<stdio.h>
int main()
{

	char c;


	printf("Enter the character:");
	scanf("%c",&c);

	if(c<=90 && c>=65)
	printf("Its an alphabet\n");

	else if(c<=122 && c>=97)
	printf("Its an alphabet\n");

	else
		printf("Its not an alphabet\n");

return 0;

}


/*Output:  char c= 'd'

	Result: Its an alphabet  */  

