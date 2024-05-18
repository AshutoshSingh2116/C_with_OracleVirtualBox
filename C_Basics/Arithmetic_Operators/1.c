

// Write a program that reads an integer and displays the right-most digit of the number.


#include<stdio.h>

int main()
{
int a;
int d;
printf("Enter an integer from the user");
scanf("%d",&a);

d=a%10;

printf("The number is:%d",d);
return 0;

}


//Output: 
//    a=456; 
//    d=a%10; 
//    d=456%10 
//     =6

