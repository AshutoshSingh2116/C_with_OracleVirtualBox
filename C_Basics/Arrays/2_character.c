/* Write the following program :
   Declare a character array without size.
   Initialize the array with characters of your name.
   Print your name using for loop.  */

#include<stdio.h>
int main()
{
	char name[]={'A','S','H','U','T','O','S','H'};
	int s=sizeof(name);

	printf("My name is:");
	for(int i=0;i<s;i++)
	{
		printf("%c",name[i]);
	}
	printf("\n");
	return 0;
}

/*  OUTPUT:

  My name is:ASHUTOSH

*/
