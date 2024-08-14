/*
Name:Ashutosh Kumar Singh
Date:13/08/24
File_Name:4_STR_CMP.c
Sample_Input:
Enter string1:kernel
Enter string2:kernex
Sample_Output:-1
 */

#include <stdio.h>
int mystrcmp(char s1[],char s2[])
{
	for (;*s1;s1++,s2++)
		if(*s1>*s2)
			return 1;
		else if(*s2>*s1)
			return -1;
	if(*s2)
		return -1;
	else 
		return 0;
}
int main()
{
	char s1[20],s2[20];
	int i;
	printf("Enter string1:");
	scanf("%[^\n]s",s1);
	printf("Enter string2:");
	scanf(" %[^\n]s",s2);
	i=mystrcmp(s1,s2);
	printf("%d",i);

	return 0;
}

