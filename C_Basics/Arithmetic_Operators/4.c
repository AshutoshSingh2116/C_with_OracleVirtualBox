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


//Output:  
// char a='3'
// char b='4'
// char c='5'

//   x='a'-'0'
//   x='3'-'0'
//   x=3

//    y='b'-'0'
//    y='4'-'0'
//    y=4

//    z='c'-'0'
//    z='5'-'0'
//    z=5

//    x=x*100
//     =3*100
//     =300

//    y=y*10
//     =4*10
//     =40

//    z=z*1
//     =5*1 
//     =5

//    i=x+y+z
//     =300+40+5
//     =345

// The output is: int i= 345




























