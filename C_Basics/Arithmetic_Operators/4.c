//Input 3 digits, read them into three different characters. Make one integer out of them and display.


#include<stdio.h>
int main()
{
char a, b, c;
int x, y, z;
int i;

printf("Enter the characters");
scanf("%c%c%c",&a,&b,&c);

x=a-'0';
y=b-'0';
z=c-'0';

x=x*100;
y=y*10;
z=z*1;

i=x+y+z;

printf("int i:%d",i);
return 0;

}
