//Write a proigram to print all prime numbers between two given integers.



#include<stdio.h>
int main()
{
	int a,b,i,n,p=0;

	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);

	for(a;a<=b;a++)
	{
		for(i=2;i<=a/2;i++)
		{
			if(a%i==0)
			{
				p=0;
				break;
			}
			else 
				p=1;     
		}
		if(p==1||a==2||a==3)
			printf("%d\n",a);
	}
	return 0;
}
/* OUTPUT:

Enter two numbers:21 29
23
29

*/
