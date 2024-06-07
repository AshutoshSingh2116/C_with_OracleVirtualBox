#include<stdio.h>

float Simple_Interest(int P,int n,float r)
{
float SI;
float y;
y=n/12.0;
SI=(P*n*r)/100.0;
return SI;

}


int main()
{
int P,n;
float r,SI;

printf("Enter value of P,n and r:");
scanf("%d%d%f",&P,&n,&r);

if(P<1)
{
printf("Invalid Principle\n");
return 1;
}

if(r<=0)
{
printf("Invalid Rate\n");
return 1;
}

if(n<=0)
{
printf("Invalid month\n");
return 1;
}

SI= Simple_Interest( P, n, r);

printf("Simple Interest is:%f\n",SI);

return 0;
}
