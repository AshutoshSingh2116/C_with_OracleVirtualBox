/*4) write a function to take the array of structures as arguments and return the structure element with the oldest date of birth.
    return the structure variable using return statement and array element with index. Return type of the function will be struct student.

eg.,
struct student oldest student(struct student arr[])
{ 

return arr[i]; // find the index at which date of  birth is oldest using date comparison function
}
*/


#include <stdio.h>

struct date

{

              int d,m,y;

};

struct date oldest(struct date [],int );

int main()

{

              struct date da[4],ret;

              int i=0;

              for(i=0;i<4;i++)

              {

                           printf("enter the %d student date of birth\n",i+1);

                           scanf("%d-%d-%d",&da[i].d,&da[i].m,&da[i].y);

              }

              ret=oldest(da,4);

              printf("the oldest date of birth is %d-%d-%d",ret.d,ret.m,ret.y);

              return 0;

 

}

struct date oldest(struct date arr[],int n)

{

              int i=0;

              struct date ptr;

              ptr=arr[0];

              for(i=1;i<n;i++)

              {

                            if((arr[i].y>ptr.y)||((arr[i].y==ptr.y)&&(arr[i].m>ptr.m))||((arr[i].y==ptr.y)&&(arr[i].m==ptr.m)&&(arr[i].d>ptr.d)))

                           {

                                         ptr=ptr;

                           }

                           else

                                         ptr=arr[i];

              }

              return ptr;

}
