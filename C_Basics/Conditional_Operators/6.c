//Take an integer as input and print its magnitude.



#include<stdio.h>
int main()
{

int n;

printf("Enter the integer:");
scanf("%d",&n);
	
	n>0?printf("Magnitude is:%d\n",n):printf("Magnitude is:%d\n",n*(-1));

return 0;
}


/*Output:
	int n=3
	result is: -3   */

