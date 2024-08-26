//5) Write a function to take an array of structures as arguments, and convert all their names into capital letters( strupr implementation). print the data in tihe main function.


#include <stdio.h>

#include<string.h>

struct student

{

              char name[20];

};

void mystr(struct student *,int);

int main()

{

              struct student arr[5];

              int i=0;

              for(i=0;i<5;i++)

              {

                           printf("enter the %d student name:\n",i+1);

                           scanf("%s",arr[i].name);

              }

              mystr(arr,5);

              for(i=0;i<5;i++)

              {

                           printf("the strupr of %d student name is:\n",i+1);

                           printf("%s\n",arr[i].name);

              }

              return 0;

}

void mystr(struct student *p,int n)

{

              int i=0,j=0;

              for(i=0;i<n;i++)

              {

                           for(j=0;p[i].name[j];j++)

                           {

                                         if(p[i].name[j]>=97&&p[i].name[j]<=122)

                                                       p[i].name[j]-=32;

                           }

              }

}
