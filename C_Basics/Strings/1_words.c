//Q.Take a string as an input, and count the number of words in the string. Take space, comma,exclamation, question mark and fullstop as delimitters for word counting.

#include <stdio.h>
int main()
{
    int i=0,c=0;
    char str[50];
    printf("enter string:");
    scanf("%[^\n]s",str);
    while(str[i])
    {
        if(str[i]==' '||str[i]=='?'||str[i]=='.'||str[i]=='!'||str[i]==',')
            c++;
        i++;
    }
    printf("no of words in a string: %d\n",c+1);
}


/*
 
OUTPUT:
    
    enter string:ewtwf!kyhsgk,gfnvs
    no of words in a string: 3

*/
