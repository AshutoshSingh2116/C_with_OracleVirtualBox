/*  void strrev( char str[]);

//reverse the string (without using any extra array)
eg., input : str[] = "Kernel";
output : str[] = "lenreK"

*/


#include<stdio.h>

void reverse(char str1[]);

int main()
{
	char str1[100];

	printf("Enter a string:");
	scanf("%s",str1);

	reverse(str1);

	printf("\n");

}


void reverse(char str1[])
{
	int count=0; int d;
	for(int i=0;str1[i]!='\0';i++)
	{
		count++;
	}

	for(int i=0;i<count/2;i++)
	{
		d=str1[i];
		str1[i]=str1[count-1-i];
		str1[count-1-i]=d;

	}
	printf("%s",str1);

}

/* OUTPUT:

Enter a string:asdf
fdsa

Enter a string:asdfghj
jhgfdsa

*/
