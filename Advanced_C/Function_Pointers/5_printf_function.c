/* 5) Read an integer and print it back using function pointers for printf and scanf.

printf declaration to use : int printf(char * , ...);
scanf declaration to use : int scanf(char *, ...);

Try it again using alias name and array of function pointers.

*/

#include<stdio.h>
//int (*p)(char *,...);
int (*myscanf)(const char*,...)=&scanf;
int (*myprintf)(const char*,...)=&printf;
int main()
{
int a;
printf("Enter an integer:");

myscanf("%d",&a);
myprintf("%d\n",a);
return 0;
}

/* OUTPUT:

Enter an integer:45
45

*/
