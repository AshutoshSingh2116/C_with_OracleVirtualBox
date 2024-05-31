//write the calculator program to read two numbers and one character (+, -, *, / , %) from the user, and based on character, do appropriate operations on numbers and print the output. Modify the program to repeat this task n number of times.

#include<stdio.h>
int main()
{
	int a,b,n,i=1; char ch; 

	printf("Number of times to be performed:");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("Enter two numbers:");
		scanf("%d%d",&a,&b);

		printf("Enter a character:");
		scanf(" %c",&ch);

		if(ch=='*')
			printf("%d*%d=%d\n",a,b,a*b);

		else if(ch=='+')
			printf("%d+%d=%d\n",a,b,a+b);

		else if(ch=='-')
			printf("%d-%d=%d\n",a,b,a-b);

		else
			printf("%d/%d=%d\n",a,b,a/b);

		i++;
	}

	return 0;
}


/*OUTPUT 1:

	Number of times to be performed:2
	Enter two numbers:2 6
	Enter a character:+
	2+6=8
	Enter two numbers:4 2
	Enter a character:/
	4/2=2

OUTPUT 2:
	Number of times to be performed:3
	Enter two numbers:34 6
	Enter a character:+
	34+6=40
	Enter two numbers:34 4
	Enter a character:*
	34*4=136
	Enter two numbers:22 11
	Enter a character:/
	22/11=2
*/
