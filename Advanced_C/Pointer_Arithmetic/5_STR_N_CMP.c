/*
Name:Ashutosh Kumar Singh
Date:13/08/24
File_Name:5_STR_N_CMP.c
Sample_Input:
Enter string1:abcd
Enter string2:abca
Enter n:4
Sample_Output:1
 */

#include <stdio.h>
int mystrncmp(char s1[],char s2[], int n)
{
	for (;n;n--,s1++,s2++)
	{
		if(*s1>*s2)
			return 1;
		else if (*s2>*s1)
			return -1;
	}
	return 0;
}
int main()
{
	char s1[20],s2[20];
	int i,n;
	printf("Enter string1:");
	scanf("%s",s1);
	printf("Enter string2:");
	scanf("%s",s2);
	printf("Enter n:");
	scanf("%d",&n);
	i=mystrncmp(s1,s2,n);
	printf("%d",i);
	return 0;
}

/*
