//(8) Read a character and print if the given character is an alphabet or not.

#include<stdio.h>
int main()
{
	char c;
	printf("Enter a character:");
	scanf("%c",&c);
	
	if(c<=90)
	{
		if(c>=65)
			printf("%c: It is an alphabet",c);

		else 
			printf("Its not an alphabet");
	}

	else if(c>=97)
	{
		if(c<=122)
			printf("Its an alphabet");
		else
			printf("its noy an alphabet");
	}

	else
		printf("its not an alphabet");


return 0;

}



/* Output: char c= 'a'
      if(c>=65) is true;
  so, the output is: "It is an alphabet"    */

