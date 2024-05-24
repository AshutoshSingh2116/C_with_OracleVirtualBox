//Read 3 numbers and print the biggest of three.

#include<stdio.h>

int main()

{

	int a,b,c;
	printf("Enter the three numbers:");
	scanf("%d%d%d",&a,&b,&c);

	if(a>b && a>c)
		printf("a is bigger\n");

	else if(b>a && b>c)
		printf("b is bigger\n");

	else

		printf("c is bigger\n");

return 0;
}


/*Output: a=2, b=1, c=3

 	Result is: c is bigger   */
