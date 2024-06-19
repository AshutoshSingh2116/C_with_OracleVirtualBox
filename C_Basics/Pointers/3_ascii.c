//Write a program to take input for two character variables using pointers and find out which character has higher ascii value.

#include<stdio.h>

int main()
{
	char a; char b;


	char *p1=&a;
	char *p2=&b;

	printf("Enter the two characters:");
	scanf("%c %c",&a,&b);


	if(*p1 > *p2)
		printf("%c has the higher ascii value\n",*p1);


	else
		printf("%c has the higher ascii value\n",*p2);

	return 0;
}

/* OUTPUT:

Enter the two characters:v A
v has the higher ascii value

*/
