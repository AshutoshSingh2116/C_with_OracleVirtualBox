// 2)  char * strrev( char s[]); // returns string base address

#include<stdio.h>

char *string_reverse(char str[]);

int main()
{
int* d;
int str[100];
printf("Enter the string:");
scanf("%s",str);

d=string_reverse(str);
printf("%s",d);
}

char *string_reverse(char str[])
{
int count =0; int a;
for(int i=0; str[i]!='\0';i++)
{
  count++ ;
 }

for(int i=0;i<count/2;i++)
{
a=str[i];
str[i]=str[count-i-1];
str[count-i-1]=a;
}

return str;
}



