// Define  a macro that receives an array and the number of elements in the array as arguments. Write a program using this macro to print out the elements of the array. Try using this macro for different data types of arrays.

#include<stdio.h>
#define  ARR(a,size)  a[size]
int main()
{
   int size,i;
   printf("enter size of array \n");
   scanf("%d",&size);
   int ARR(arr1,size);
   float ARR(arr2,size);
   char ARR(arr3,size);


   /*for(i=0;i<size;i++)
       scanf("%d",&ARR(arr1,i));
   for(i=0;i<size;i++)
       printf("%d ",ARR(arr1,i));
   printf("\n");
   for(i=0;i<size;i++)
       scanf("%f",&ARR(arr2,i));
   for(i=0;i<size;i++)
       printf("%f ",ARR(arr2,i));
   printf("\n");*/
   for(i=0;i<size;i++)
       scanf(" %c",&ARR(arr3,i));
   for(i=0;i<size;i++)
       printf("%c ",ARR(arr3,i));
   printf("\n");

}

/* OUTPUT:

enter size of array 
4
1 2 3 4
1 2 3 4 

*/
