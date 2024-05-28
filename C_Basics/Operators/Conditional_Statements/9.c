//(9)  Read a character and print if the given character is a digit or not.

#include<stdio.h>

int main()
{
	char c;
	printf("Enter the character:");
	scanf("%c",&c);

	if(c>=48)
	{	
		if(c<=57)
		printf("It is a digit");
		else
		printf("It is not a digit");
	}

	else
		printf("It is not a digit");

return 0;

}


/*Output: if char c=4;
   	if(c>=48) is true; 
inner loop  if(c<=90) is also true;

so, the output is: It is a digit.     */



