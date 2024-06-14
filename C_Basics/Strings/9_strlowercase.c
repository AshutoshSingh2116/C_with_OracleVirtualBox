/* void strlwr( char str[]);
// convert all upper case alphabets to lower case in the given string
*/


#include<stdio.h>

void lowercase(char str1[]);

int main()
{
	char str1[100];

	printf("Enter a string:");
	scanf("%s",str1);

	printf("The string in lowercase is:");
	lowercase(str1);

	printf("\n");
}


void lowercase(char str1[])
{
	int i=0;
	while(str1[i]!='\0')
	{
		if(str1[i]<=90 && str1[i]>=65)
		{
			str1[i]=str1[i]+32;
			printf("%c",str1[i]);
			i++;
		}
		else
		{
			printf("%c",str1[i]);
			i++;
		}
	}

}


/* OUTPUT:

Enter a string:AsHuToSh
The string in lowercase is:ashutosh

Enter a string:ABCD RT
The string in lowercase is:abcd

*/
