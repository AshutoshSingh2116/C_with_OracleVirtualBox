// int strchr( char str[], char ch)
// search the character ch ,in string str , whenever the first matching occurs, return the matching index. 


#include<stdio.h>

int index(char str1[], int n);


int main()
{
int res;
char str1[100];

printf("Enter the string:");
scanf("%s",str1);

printf("Enter the number to be searched:");
scanf("%d",&n);

res=index(str1);


}


int index(char str1[], int n)
{
int i=0;
while(str1[i]!='\0')
{
if(str1[i]==n)
{
str1[i]



