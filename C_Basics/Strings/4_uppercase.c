//  Write a program to convert a string into upper case and print.

#include<stdio.h>

void upper(char str1[]);


int main()
{
	char str1[100];

	printf("Enter the string:");
	scanf("%s",str1);
	
	printf("The string in Uppercase is:");
	upper(str1);
	printf("\n");
}


void upper(char str1[])
{
	int i=0;

	while( str1[i]!='\0')
	{
		if(str1[i]<=122 && str1[i]>=97)
		{
			str1[i]=str1[i]-32;
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

Enter the string:aBCde
ABCDE
Enter the string:AsHuToSh
ASHUTOSH

*/
