/* int strlen( char str[]);
returns the length of the string.

Implementation:
//string length is the count of characters till the first null character is found in a string
int strlen_1(char str[])
{
int i;
for(i=0; str[i] != '\0'; i++); // count all characters till null character is found.
return i;  // return the count.
}


*/


#include<stdio.h>

int stringlength(char str1[]);

int main()
{
	int ret;

	char str1[20];

	printf("Enter a string:");
	scanf("%s",str1);

	ret=stringlength(str1);
	printf("The length of string is: %d\n",ret);
}


int stringlength(char str1[])
{   
	int count =0;
	for(int i=0; str1[i]!='\0'; i++)
	{
		count ++;
	}
	return count;
}

/* OUTPUT:

Enter a string:1234
The length of string is: 4

Enter a string:abhjsd*0 123njb
The length of string is: 8

*/

