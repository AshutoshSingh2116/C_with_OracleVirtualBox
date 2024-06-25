// Write down a macro to find out the biggest of two numbers.
// MAX(x,y) should define code to find biggest of x and y. Implement array sorting function using this macro (Bubble sort)

#include<stdio.h>
#define MAX(a,b) a>b?a:b
#define Bubble 

int main()
{
int a, b, n;
int arr[n];
printf("Enter two number to find the biggest:");
scanf("%d%d",&a,&b);

printf("The biggest number is:%d\n", MAX(a,b));


printf("Enter the size of array:");
scanf("%d",&n);

printf("Enter the elements of the array:");
for(int i=0;i<n;i++0)
{
scanf("%d",arr[i]);
}






























/* OUTPUT:

Enter two number sto find the biggest:12 11
The biggest number is:12

*/
