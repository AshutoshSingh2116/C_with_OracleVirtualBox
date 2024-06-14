/*  void strcpy ( char d[] . char s[]);
copies all characters from source string (char s[]) to destination string( char d[]) , upto null character ( including null character).

*/


#include<stdio.h>

void copy(char str1[], char str2[]);

int main()
{

	char str1[100];
	char str2[100];

	printf("Enter the first string:");
	scanf("%s",str1);

	printf("Enter the second string:");
	scanf("%s",str2);

	copy(str1,str2);

	printf("\n");
}


void copy(char str1[], char str2[])
{
	int i=0;
	while(str2[i])
	{
		str1[i]=str2[i];
		printf("%c",str1[i]);
		i++;
	}
//	printf("%s",str1);
}

/* OUTPUT:

Enter the first string:ahbjbdsb
Enter the second string:123
123

*/
