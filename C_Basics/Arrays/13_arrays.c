/* write a function to take 2 arrays as input and return 1 if they are equal and 0 if they are not equal ( sizes to be sent as seperate arguments) */



#include <stdio.h>
int compare(int arr1[],int arr2[],int a1,int a2);
int main()
{
        int i,c,a1,a2;
        
	printf("Enter size of array1:");
        scanf("%d",&a1);

	printf("Enter size of array2:");
	scanf("%d",&a2);

        if(a1!=a2)
	{
	printf("Not equal\n");	
	return 1;
	}

	int arr1[a1];
        printf("Enter elements of array1:");
        for(i=0;i<a1;i++)
        scanf("%d",&arr1[i]);
        
	int arr2[a2];
        printf("Enter elements of array2:");
        for(i=0;i<a1;i++)
        scanf("%d",&arr2[i]);
        
	
	c=compare(arr1,arr2,a1,a2);
        if(c==1)
        printf("Both are same\n");
        else
        printf("Not equal\n");
}
int compare(int arr1[],int arr2[],int a1, int a2)
{
    int i;
    for(i=0;i<a1;i++)
    {
        if(arr1[i]==arr2[i])
            continue;
        else
            return 0;
    }
    return 1;
}


/* output:
 
   Enter size of array1:3
Enter size of array2:3
Enter elements of array1:1 3 5
Enter elements of array2:1 3 5
Both are same

*/
