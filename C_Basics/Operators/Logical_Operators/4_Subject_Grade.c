//Read the percentage for 6 subjects and print the grade using if else and type casting operator.

#include<stdio.h>

int main()
{

	float a,b,c,d,e,f;
	float percent;

	printf("Enther the marks of 6 subjects:");
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);

	percent=((a+b+c+d+e+f)*100)/600;

	if(percent>=80 && percent<=100)
		printf("Honours\n");

	else if(percent>=60 && percent<=79)
		printf("First Division\n");

	else if(percent>=50 && percent<=59)
		printf("Second Division\n");

	else if(percent>=40 && percent<=49)
		printf("Third Division\n");

	else
		printf("Fail");

return 0;

}


/*Output: a=35.00, b=34.45, c=76.98, d=65.58, e=45.98, f=23.00

	percent: ((a+b+c+d+e+f)*100)/600;

	Result: Third Division                                            */

