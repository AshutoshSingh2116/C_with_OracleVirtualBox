#include<stdio.h>

int main()

{
	int a,b,c,d;
	int add;
	float average;
	printf("Take 4 intrgers from user:");
	scanf("%d%d%d%d",&a,&b,&c,&d);

	add=a+b+c+d;

	average=add/4.0;

	printf("%f",average);

	return 0;

}
