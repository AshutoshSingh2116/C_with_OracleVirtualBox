/*Declare a two-dimensional array of elements for sales details of a store, for each item, for each salesman. Take the sales values as input and print the array in matrix form.
Find out and print the following :
1. Total sales by each sales man
2. Total sales for a item
3. Total sales  */



#include<stdio.h>

int main()
{
int d=0;
int sales[3][2];
int sum=0;

printf("Input rows and columns:");

//Taking matrix as input
for(int i=0;i<3;i++)
{
for(int j=0;j<2;j++)
{
scanf("%d",&sales[i][j]);
}
}

//Printing the matrix as output
for(int i=0;i<3;i++)
{
for(int j=0;j<2;j++)
{
printf("%d",sales[i][j]);
}
printf("\n");
}

//printing columns: To find out total sales by each man:
for(int j=0;j<2;j++)
{
for(int i=0;i<3;i++)
{
sum+=sales[i][j];
}
printf("Total sales by man:%d is=%d\n",j,sum);
d+=sum;        // to find the total sales.                                   
sum=0;        
}



//printing rows: To find out total sales for a item:
for(int i=0;i<3;i++)
{
for(int j=0;j<2;j++)
{
sum+=sales[i][j];
}
printf("Total sales for item:%d is=%d\n",i,sum);
sum=0;
}

//Finding total sales:
printf("Total sales is:%d\n",d);

return 0;
}


/*
OUTPUT:

Input rows and columns:1 2 3
4 5 6
12
34
56
Total sales by man:0 is=9
Total sales by man:1 is=12
Total sales for item:0 is=3
Total sales for item:1 is=7
Total sales for item:2 is=11
Total sales is:21

*/

