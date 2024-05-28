//WAP to check whether a character is vowel or not.


#include<stdio.h>
int main()
{
	char c;
	printf("Enter a character:");
	scanf("%c",&c);

	switch(c)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o': 
		case 'u':

	printf("%c is a vowel\n",c);
	break;
	

	default:

	printf("%c is a consonant\n",c);

	}
	return 0;
}


/*Output:
  	  Enter a character:a
		a is a vowel


	Enter a character:l
		l is a consonant          */



