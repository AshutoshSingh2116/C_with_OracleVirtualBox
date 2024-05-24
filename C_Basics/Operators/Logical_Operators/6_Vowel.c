//Read a character and print if its vowel or not.

#include<stdio.h>

int main()
{

	char c;
	printf("Enter a character:");
	scanf("%c",&c);

	if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U')
		printf("Its a vowel\n");

	else
		printf("Its not a Vowel\n");

return 0;

}

/*Output: char c=='d'
	Result: Its not a Vowel.    */


