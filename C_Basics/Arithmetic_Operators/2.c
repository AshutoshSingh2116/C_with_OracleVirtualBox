//Read a 4 digit number and print it in the following formats:


#include<stdio.h>
int main()
{
int a,b,c,d,e;

printf("Enter a 4 digit integer");
scanf("%d",&a);

b=a%10;

c=a%100;
{
 c=c/10;
}

e=a/100;
{
d=e%10;
a=e/10;
}

printf("%d\n%d\n%d\n%d\n",b,c,d,a);

printf("\n%d\n%d\n%d\n%d\n",a,d,c,b);

printf("\n%d",a);
printf("\n%d %d",a,d);
printf("\n%d %d %d",a,d,c);
printf("\n%d %d %d %d\n",a,d,c,b);


printf("\n%d %d %d %d",a,d,c,b);
printf("\n%d %d %d",a,d,c);
printf("\n%d %d",a,d);
printf("\n%d\n",a);


printf("\n%d %d %d %d\n", b,c,d,a);


printf("\n%7d\n",b);
printf("%5d\n",c);
printf("%3d\n",d);
printf("%d\n",a);

return 0;


}


//Output: OP1: 2    OP2: 4   OP3: 4        OP4: 4 5 3 2   OP5: 2 3 5 4   OP6:       3
//             3         5        4 5           4 5 3                             2
//             5         3        4 5 3         4 5                             5
//             4         2        4 5 3 2       4                             4
        




























