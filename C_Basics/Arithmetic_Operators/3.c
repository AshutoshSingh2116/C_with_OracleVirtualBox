//Take three input integers x,y and z. Write a program to rotate their values such that, x has the value of y, y has the value of z and z has the value of x.

#include<stdio.h>
int main()
{
	int x;
	int y;
	int z;
	int d;

	printf("Take inputs as x,y,z");
	scanf("%d%d%d", &x,&y,&z);
	d=x;
	x=y;
	y=z;
	z=d;

	printf("x:%d\ny:%d\nz:%d",x,y,z);


	return 0;

}


//Output:  x=1, y=2, z=3
//           d=x, d=1=x
//           x=y, x=2
//           y=z, y=3
//           z=d, z=1
// New values of x,y,z after rotation are:
//        x=2
//        y=3 
//        z=1  




