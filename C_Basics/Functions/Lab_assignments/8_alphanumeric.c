/*  Write a function to determine if a character is alphanumeric or not and print the appropriate output in main function. (return 1 if it is alphanumeric, 0 if it is not alpha numeric).
Hint: int fun_alpha_num(char c).  */


#include<stdio.h>

//FUNCTION DEFINIION

int alpha(char c)
{
	if((c<=122 && c>=65)||(c<=57 && c>=48) || (c<=122 && c>=97))
		return 1;

	else
		return 0;
}


//FUNCTION CALL
int main()
{
	char c;
	int result;
	printf("Enter a character:");
	scanf("%c",&c);

	result=alpha(c);
	if(result==1)
		printf("Character given is alphanumeric\n");

	else
		printf("Character given is not alphanumeric\n");

}


/* OUTPUT:

	Enter a character:W
	Character given is alphanumeric

	Enter a character:1
	Character given is alphanumeric

	Enter a character:/
	Character given is not alphanumeric
*/
