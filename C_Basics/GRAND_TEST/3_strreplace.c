// WAP to replace a substring with another substring such that the length of the substrings are same.

#include <stdio.h>
#define SIZE 200
int mystrReplace(char [],char [],char []);
int main()
{
    char srcStr[SIZE],subStr[SIZE],repStr[SIZE];
    int check;
    printf("Enter a string :");
    scanf("%[^\n]s",srcStr);
    printf("Enter substring which you want to find: ");
    scanf("\n%[^\n]s",subStr);
    printf("Enter a replace string: ");
    scanf("\n%[^\n]",repStr);
    check=mystrReplace(srcStr, subStr, repStr);
    if (check==-1) 
    {
        printf("SubString Not Found !!\n");
    }
    else 
    {
        printf("output_string: %s\n",srcStr);
    }
    return 0;
}


int mystrReplace(char srcStr[], char subStr[], char repStr[])
{
    int i,subStrLen=0,repFlag=0;
    
    //logic to find substring length

    while (subStr[subStrLen]) 
    {
        subStrLen++;
    }
    
    //logic to find substring in a string

    for (i=0; srcStr[i]; i++) 
    {
        if (srcStr[i]==subStr[0]) 
        {
            int subStrIndx=1,srcStrIndx=i+1;
            while (subStr[subStrIndx]) 
            {
                if (subStr[subStrIndx]!=srcStr[srcStrIndx]) 
                {
                    break;
                }
                else 
                {
                    subStrIndx++;
                    srcStrIndx++;
                }
            }
            if (subStrIndx==subStrLen) 
            {
                repFlag=1;      //replace flag set to 1
                subStrIndx=0;   // reinitialising to initial value
                srcStrIndx=i;   // reinitialising to initial value
                while (repStr[subStrIndx]) 
                {
                    srcStr[srcStrIndx]=repStr[subStrIndx];
                    srcStrIndx++;
                    subStrIndx++;
                }
            }
        }
    }
    if (repFlag==0) 
    {
        return -1;
    }
}

/* OUTPUT:

Enter a string :All is bell
Enter substring which you want to find: bell
Enter a replace string: well
output_string: All is well

*/
