/*
Name:Ashutosh Kumar Singh
Date:13/08/24
File_Name:6_STR_I_CMP.c
Sample_Input:
Enter the string1:STRing
Enter the string2:string
Sample_Output:0
 */

#include <stdio.h>
int mystricmp(char s1[],char s2[])
{
	for(;*s1;s1++,s2++)
	{
		if(*s1>*s2&& (*s1-*s2-32))
			return 1;
		else if(*s2>*s1&&(*s2-*s1-32))
			return -1;
	}
	if(*s2)
		return -1;
	else 
		return 0;
}
int main()
{
	char s1[20],s2[20];
	int i;
	printf("Enter the string1:");
	scanf("%s",s1);
	printf("Enter the string2:");
	scanf("%s",s2);
	i=mystricmp(s1,s2);
	printf("%d",i);

	return 0;
}
