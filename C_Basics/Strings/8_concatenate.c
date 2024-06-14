/*  void strcat( char d[] , char s[]);
    concatenates the content from source string to the end of destination string ( copy paste characters from s to  d , from null character index in d ) */

#include<stdio.h>

void concate(char str1[], char str2[]);


int main()
{
	char str1[100];
	char str2[100];

	printf("Enter the first string:");
	scanf("%s",str1);

	printf("Enter the second string:");
	scanf("%s",str2);

	concate(str1,str2);
	printf("\n");

}


void concate(char str1[], char str2[])
{  
	int i=0, count=0; 
	for(int i=0;str1[i]!='\0';i++)
	{
		count++;
	}

	while(str2[i]!='\0')
	{
		str1[count]=str2[i];
		i++;
		count++;
	}
	printf("%s",str1);
}

/*OUTPUT:

Enter the first string:sdf
Enter the second string:23
sdf23


*/

