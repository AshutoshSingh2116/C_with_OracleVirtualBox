//  WAP to print if  a character is alphanumeric or special character, using macro conditions

#include<stdio.h>
#define IsALPHANUMERIC(c) ((c>='A' && c<='Z') || (c>='a' && c<='z')  ||  (c>='0' && c<='9'))

int main()
{ 
char c;

printf("Enter a character:");
scanf("%c",&c);

if(IsALPHANUMERIC(c))
{
printf("It is alphanumeric character\n");
}

else
{
printf("Its a special character\n");
}

}

/* OUTPUT:

Enter a character:d
It is alphanumeric character

*/
