/*
Name:Ashutosh Kumar Singh
Date:13/08/24
File_Name:11_REPLACE.c
Sample_Input:
Enter the string:BOOM
Enter the substring:OO
Enter the replace string:AA
Sample_Output:BAAM
*/

#include <stdio.h>
char * mystrreplace(char str[],char sub[],char rep[])
{
	char *subs=sub,*strs=str,*temp;
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
		{
			for(;*rep;rep++,str++)
			{
				*str=*rep;
			}
			return strs;
		}
	}
}
int main()
{
	char str[20],sub [20],rep[20],*res;
	printf("Enter the string:");
	scanf("%[^\n]s",str);
	printf("Enter the sub string u want to replace:");
	scanf(" %[^\n]s",sub);
	printf("Enter the replace string:");
	scanf(" %[^\n]s",rep);
	res =mystrreplace(str,sub,rep);
	printf("%s",res);

	return 0;
}

