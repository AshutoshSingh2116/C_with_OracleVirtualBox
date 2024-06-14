/*    Write a program to replace a given character by another character in a string.  WAP to d      isplay the word expansion of a number.
      eg., Input String : "789"
      Output : Seven Eight Nine"   */


#include<stdio.h>

void mystr(char str1[]);


int main()
{
	int a;
	char str1[100];

	printf("Enter a string:");
	scanf("%s",str1);

	mystr(str1);

}


void mystr(char str1[])
{
	int i=0;
	while(str1[i])
	{
		switch(str1[i])
		{
			case '0':	printf("Zero ");
					break;

			case '1':	printf("One ");
					break;

			case '2':	printf("Two ");
					break;

			case '3':       printf("Three ");
					break;

			case '4':       printf("Four ");
					break;

			case '5':       printf("Five ");
					break;

			case '6':       printf("Six ");
					break;

			case '7':       printf("Seven ");
					break;

			case '8':       printf("Eight ");
					break;

			case '9':       printf("Nine ");
					break;

		}
		i++;
	
	}
printf("\n");
}

/* OUTPUT:

Enter a string:123
One Two Three 

Enter a string:1347
One Three Four Seven

*/
