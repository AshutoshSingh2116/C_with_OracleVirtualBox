/*Q13. int mystrchr( char str[], char ch)
    // search the character ch ,in string str , whenever the first matching occurs, return the matching index.And print afterwards 
*/

#include <stdio.h>
int mystrchr(char[],char);
int main(void)
{
    char str[100], ch;
    int check;
    printf("Enter a string: ");
    scanf("%99[^\n]s",str);
    printf("Enter character you want to search: ");
    scanf("\n%c",&ch);
    check=mystrchr(str,ch);
    if (check == -1) 
    {
        printf("Given character is not found\n");
    }
    else 
    {
        printf("Index of given character is at %d\n",check);
        while (str[check]) 
        {
            printf("%c",str[check]);
            check++;
        }
        printf("\n");
    }
    return 0;
}


int mystrchr(char str[], char ch)
{
    int i,len=0;
    char temp;
    while (str[len]) 
    {
        len++;
    }
    for(i=0;i<len;i++)
    {
        if (str[i]==ch) 
        {
            return i;
        }
        
    }
    return -1;
}

/*OUTPUT:

Enter a string: pineapple
Enter character you want to search: e
Index of given character is at 3
eapple


*/
