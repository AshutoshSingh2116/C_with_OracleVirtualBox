/*
Name:Ashutosh Kumar Singh
Date:13/08/24
File_Name:7_STR_CAT.c
Sample_Input:
enter the source string:world
enter the destination string:hello
Sample_Output:helloworld
*/

#include <stdio.h>
char* mystrcat(char d[],char s[])
{
	char *start=d;
	for(;*d;d++);
	for(;*s;d++,s++)
	{
		*d=*s;
	}
	*d='\0';
	return start;
}
int main()
{
	char s[20],d[20],*temp;
	printf("enter the source string:");
	scanf("%[^\n]s ",s);
	printf("enter the destination string:");
	scanf(" %[^\n]s ",d);
	printf("%s",mystrcat(d,s));


	return 0;
}
