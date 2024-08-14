/*
Name:Ashutosh Kumar Singh
Date:13/08/24
File_Name:8_STR_LWR.c
Sample_Input:STriNg
Sample_Output:string
 */

#include <stdio.h>
char *mystrlwr(char s[])
{
	char *start=s;
	for(;*s;s++)
	{
		if(*s>64&&*s<91)
			*s=*s+32;
	}
	return start;
}
int main()
{
	char s[20],*res;
	printf("Enter the string:");
	scanf("%[^\n]s",s);
	res =mystrlwr(s);
	printf("%s",s);
	return 0;
}

