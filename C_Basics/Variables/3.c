 #include<stdio.h>
 int main()
{

int p;
int n;
float r;
float SI;

float m;

printf("Please enter principle, time in months, rate of interest");
scanf("%d %d %f", &p,&n,&r);

m=n/12.0;

SI=(p*r*m)/100;

printf("%f",SI);

return 0;




}
