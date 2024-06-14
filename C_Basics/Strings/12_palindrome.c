/* int palindrome (char str[])
// return 1 if the given string is a palindrome, return 0 if it is not a palindrome

*/

#include<stdio.h>

int palindrome(char str1[]);


int main()
{
	char str1[100];
	int res;
	printf("Enter the string:");
	scanf("%s",str1);

	res=palindrome(str1);
	if(res==1)
		printf("Not a palindrome");

	else
		printf("Palindrome number");

	printf("\n");


}



int palindrome(char str1[])
{   int count=0;

	for(int i=0; str1[i]!='\0'; i++)
	{
		count++;
	}

	int i=0;
	while(i<count/2)
	{
		if(str1[i]==str1[count-i-1])
		{
			i++;
		}

		else
			return 1;

	}
return 0;
}


/* OUTPUT:

Enter the string:madam
Palindrome number

Enter the string:143321
Not a Palindrome number

*/
