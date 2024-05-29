//Write  a program to read n numbers from the keyboard and find their sum.


#include<stdio.h>
int main()
{
	int n,d=1,sum=0,b;
	printf("Enter how many numbers we want to add:");
	scanf("%d",&n);

	//while(d<=n)
	printf("Enter %d numbers",n);
	while(d<=n)
	{

		scanf("%d",&b);
		sum=sum+b;
		d++;
	}
	printf("Sum is:%d\n",sum);
	return 0;
}



/*OUTPUT:
	Enter how many numbers we want to add:3
	Enter 3 numbers3 4 5
	Sum is:12
	
	Enter how many numbers we want to add:4
	Enter 4 numbers1 2 3 4 
	Sum is:10

