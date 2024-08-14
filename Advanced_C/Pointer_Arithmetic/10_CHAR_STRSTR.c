/*
Name:Ashutosh Kumar Singh
Date:13/08/24
File_Name:10_CHAR_STRSTR.c
Sample_Input:
Enter the string:kernelmasters
Enter the substring:mas
Sample_Output:masters
 */

#include <stdio.h>
char * mystrstr(char str[],char sub[])
{
	char *subs=sub,*strs=str,*temp=str;
	for(;*str;str++)
	{
		if(*subs==*str)
		{
			for(temp=str,sub=subs;*sub;sub++,str++)
				if(*sub!=*str)
					break;
			str=temp;
		}
		if(!(*sub))
			return temp;
	}
	return strs;
}
int main()
{
	char str[20],sub[20],*res;
	printf("Enter the string:");
	scanf("%[^\n]s ",str);
	printf("Enter the substring:");
	scanf(" %[^\n]s",sub);
	res=mystrstr(str,sub);
	printf("%s",res);
	return 0;
}
