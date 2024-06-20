//"Write a function that communicates with main using a single static variable without taking any input arguments.
//Everytime function returns something using the static variable,after using it, main sends another input using the same variable and calls the function again.

#include<stdio.h>
int* arr();

int main()
{
int n;

printf("Enter the value of n:");
scanf("%d",&n);

for(int i=0;i<n;i++)
{
scanf("%d",arr());
}
return 0;
}


int* arr()
{ int i;
static int a;

if(a==0)
{
printf("Enter element %d:",i);
i++;
}
else
{
printf("Square of array[%d]:%d\n",i,a*a);
printf("Enter element %d:",i);
i++;
}

return &a;
}
