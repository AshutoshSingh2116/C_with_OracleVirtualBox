//Read a number from the user, and print its multiplication table upto 10 multiples.

#include<stdio.h>

int main()
{
	int n,i,count;

	printf("Enter n numbers:");
	scanf("%d",&i);

	i=i*11;

	while(i>0)
	{
		if(i%11==0)
		{
			printf("Enter a number:");
			scanf("%d",&n);

			count=1;
			i--;
		}

		else
		{
			printf("%d*%d=%d\n",n,count,n*count);
			i--;
			count++;
		}
	}
	return 0;
}


/* OUTPUT 1:

	Enter n numbers:2
	Enter a number:4
	4*1=4
	4*2=8
	4*3=12
	4*4=16
	4*5=20
	4*6=24
	4*7=28
	4*8=32
	4*9=36
	4*10=40

	Enter a number:5
	5*1=5
	5*2=10
	5*3=15
	5*4=20
	5*5=25
	5*6=30
	5*7=35
	5*8=40
	5*9=45
	5*10=50


OUTPUT 2:

	Enter n numbers:3
	Enter a number:2
	2*1=2
	2*2=4
	2*3=6
	2*4=8
	2*5=10
	2*6=12
	2*7=14
	2*8=16
	2*9=18
	2*10=20
	Enter a number:3
	3*1=3
	3*2=6
	3*3=9
	3*4=12
	3*5=15
	3*6=18
	3*7=21
	3*8=24
	3*9=27
	3*10=30
	Enter a number:9
	9*1=9
	9*2=18
	9*3=27
	9*4=36
	9*5=45
	9*6=54
	9*7=63
	9*8=72
	9*9=81
	9*10=90
*/

