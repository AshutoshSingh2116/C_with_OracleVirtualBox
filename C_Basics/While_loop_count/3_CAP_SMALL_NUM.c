//Read n characters from user and print if each character is a capital alphabet, small alphabet, numeric character  or special character.

#include<stdio.h>
int main()
{
	int n,i=1;
	char c;

	printf("Enter the total number of characters:");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("Enter a character:");
		scanf(" %c",&c);

		if(c>='A' && c<='Z')
		{
			printf("It is a Capital Alphabet\n");
		}
		else if(c>='a' && c<='z')
		{
			printf("It is a Small Alphabet\n");
		}
		else if(c>='0' && c<='9')
		{
			printf("It is a numeric\n");
		}
		else
		{
			printf("It is a special character\n");
		}
		i++;
	}

	return 0;
}


/*OUTPUT 1:

	Enter the total number of characters:3
	Enter a character:*
	It is a special character
	Enter a character:2
	It is a numeric
	Enter a character:D
	It is a Capital Alphabet

OUTPUT 2:

	Enter the total number of characters:3
	Enter a character:2
	It is a numeric
	Enter a character:a
	It is a Small Alphabet
	Enter a character:F
	It is a Capital Alphabet

*/
