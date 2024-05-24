//Read 4 numbers and print the biggest.

#include<stdio.h>

int main()
{

	int a,b,c,d;
	printf("Enter the 4 numbers:");	
	scanf("%d%d%d%d",&a,&b,&c,&d);

	if(a>b && a>c && a>d)
		printf("a is biggest\n");

	else if(b>a && b>c && b>d)
		printf("b is biggest\n");

	else if(c>a && c>b && c>d)
		printf("c is biggest\n");

	else 
		printf("d is biggest\n");

return 0;
}


/*Output: a=2, b=5, c=8, d=1

	Result is:c is biggest   */
