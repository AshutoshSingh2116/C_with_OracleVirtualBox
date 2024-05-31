//Read n numbers from the user, and while reading every number, print if the number is bigger or smaller than the previous number. For the first number, there won't be any output as it is the first one.

#include<stdio.h>
int main()
{
	int n,a,b,c,d=2;

	printf("Enter total numbers:");
	scanf("%d",&n);

	printf("Enter first number:");
	scanf("%d",&a);
	c=a;
	while(d<=n)
	{
		printf("Enter a number:");
		scanf("%d",&b);

		if(c>b)
			printf("%d is bigger\n",c);

		else
			printf("%d is bigger\n",b);

		c=b;
		d++;
	}

	return 0;
}


/* OUTPUT 1:

	Enter total numbers:2
	Enter first number:3
	Enter a number:7
	7 is bigger

OUTPUT 2:

	Enter total numbers:3
	Enter first number:5
	Enter a number:7
	7 is bigger
	Enter a number:1
	7 is bigger         */
