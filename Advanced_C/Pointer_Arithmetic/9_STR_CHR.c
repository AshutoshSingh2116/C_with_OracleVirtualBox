/*
Name:Ashutosh Kumar Singh
Date:14/08/24
File_Name:9_STR_CHR.c
Sample_Input:
Enter the string:kernel
Enter a character:n
Sample_Output:3
 */

#include <stdio.h>
int mystrchr (char s[],char c)
{
	int i=0;
	for (;*s;s++)
	{
		if(*s ==c)
			return i;
		i++;
	}
	return -1;
}
int main()
{
	char s[20],ch;
	int i;
	printf("Enter the string:");
	scanf("%[^\n]s",s);
	printf("Enter a character:");
	scanf(" %c",&ch);
	i=mystrchr(s,ch);
	printf("%d",i);
	return 0;
}
