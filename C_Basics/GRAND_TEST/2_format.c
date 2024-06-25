// Print the format.

#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Input: ");
    scanf("%d",&n);
    for (i=1;i<=n; i++) 
    {
        if (i%2!=0) 
        {
            printf("$# ");
        }
        else 
        {
            printf("$");
            for (j=i; j>0; j--) 
            {
                printf("#");
            }
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}

/* OUTPUT:

Input: 10
$# $## $# $#### $# $###### $# $######## $# $########## 

*/
