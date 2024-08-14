/*
Name:Ashutosh Kumar Singh
Date:13/08/24
File_Name:3_CHAR_STRCPY.c
Sample_Input:kernel
Sample_Output:kernel
 */

#include <stdio.h>

char * mystrcpy(char d[],char s[])
{
	char *start=d;
	for(;*s;s++,d++)
	{
		*d=*s;
	}
	*d='\0';
	return start;
}
int main()
{
	char s[20],d[20],*cpy;
	printf("Enter source string:");
	scanf("%[^\n]s",s);
	cpy=mystrcpy(d,s);
	printf("%s",cpy);

	return 0;
}

