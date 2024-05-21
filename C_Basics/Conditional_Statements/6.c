//(6) Write a program to read 3 numbers and print the biggest of them.

#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the integers:");
	scanf("%d%d%d",&a,&b,&c);

	if(a>b)
	{
		if(a>c)
			printf("a is larger:%d\n",a);
                else
			printf("c is larger");

	}

	else if(b>c)
		printf("b is greater:%d\n",b);

	else
		printf("c is greater:%d\n",c);

return 0;

}



/*  Output:
	a=2, b=5, c=3
	if(a>b) is false; inner loop not executed
	else if(b>c) is true;

	Output is: b is greater    */
