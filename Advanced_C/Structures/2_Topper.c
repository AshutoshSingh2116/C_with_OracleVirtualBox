//2) Create an array of structures using the above template. read the data for all elements of the array. and print the topper name with the highest percentage


#include <stdio.h>

struct date

{

              int d,m,y;

};

struct student

{

int ID;

char name[50];

int marks[6];

struct date dob,doj;

float per;

char gender;

};

 

float percentage(int [6],float *);

int main()

{

              float ret;

              struct student stu[3];

              int i=0,j=0;

              int topper=0;

              float topperper=0;

              for(i=0;i<3;i++)

              {

              printf("enter the id and nameof student:\n");

              scanf("%d %s",&stu[i].ID,stu[i].name);

              printf("enter the six subject marks:\n");

              for(j=0;j<6;j++)

              {

                           scanf("%d",&stu[i].marks[j]);

              }

              printf("enter the dob\n");

              scanf("%d-%d-%d",&stu[i].dob.d,&stu[i].dob.m,&stu[i].dob.y);

              printf("enter the doj:\n");

              scanf("%d-%d-%d",&stu[i].doj.d,&stu[i].doj.m,&stu[i].doj.y);

              ret=percentage(stu[i].marks,&stu[i].per);

              if(ret>topperper)

              {

                           topper=i;

                           topperper=ret;

              }

              }

              printf("the id=%d ,name= %s\n",stu[topper].ID,stu[topper].name);

              printf("the six subjects marks are:\n");

              for(i=0;i<6;i++)

              {

                           printf("%d   ",stu[topper].marks[i]);

              }

              printf("\n");

              printf("the date of birth is: %d-%d-%d\n",stu[topper].dob.d,stu[topper].dob.m,stu[topper].dob.y);

              printf("the date of joining is :%d-%d-%d\n",stu[topper].doj.d,stu[topper].doj.m,stu[topper].doj.y);

              printf("the percentage is:%f\n",stu[topper].per);

              return 0;

 

}

 

float percentage(int arr[6],float *per)

{

              int i=0;

              int sum=0;

              for(i=0;i<6;i++)

              {

                           sum=sum+arr[i];

              }

              printf("sum=%d\n",sum);

              *per=(sum/6.0);

              return *per;

}
