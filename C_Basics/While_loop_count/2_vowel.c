//Read n characters from user, and print if each character is vowel or not.

#include<stdio.h>
int main()
{
	char c;
	int n,d=1;

	printf("Total number of characters:");
	scanf("%d",&n);

	while(d<=n)
	{

		printf("Enter any character:");
		scanf(" %c",&c);

		if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
		{
			printf("It's a vowel\n");
		}
		else
		{
			printf("It's not a vowel\n");
		}
		d++;
	}
	return 0;
}


/*OUTPUT 1:

	Total number of characters:2
	Enter any character:a
	It's a vowel
	Enter any character:1
	It's not a vowel


OUTPUT 2:

	Total number of characters:3
	Enter any character:a
	It's a vowel
	Enter any character:
	l
	It's not a vowel
	Enter any character:S
	It's not a vowel

*/
