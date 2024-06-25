// Sort the array such that 0 should come at last and the alphabets should shift left adjacently.


#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter integer elements: ");
    for (i=0;i<n; i++) 
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n; i++) 
    {
        for (j=0;j<n-1; j++)
        {
            if (arr[j]==0 && (arr[j+1]>0 || arr[j+1]<0)) 
            {
                arr[j]=arr[j+1];
                arr[j+1]=0;
            }
        }
    }
    printf("Output: Array: ");
    for (i=0;i<n; i++) 
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

/* OUTPUT:

Enter the size of an array: 4
Enter integer elements: 1 0 3 4
Output: Array: 1 3 4 0 

*/
