/*  1) Practice scanf and printf on each member of the structure using a structure variable using the below structure template:

struct student
{
int ID;
char name[50];
int marks[6];
int d,m,y;
float per;
char gender
};

create a structure variable of the above type and read ID , name and marks of 6 subjects, date of birth and date of joining using scanf and printf.
Then calculate the percentage of marks, and store the percentage using per pointer member, and print it.Write a function to calculate the percentage ,and update the percentage member of the structure using function (send only per member using call by reference).

*/


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

 

void percentage(int [6],float *);

int main()

{

              struct student stu;

              int i=0;

              printf("enter the id and nameof student:\n");

              scanf("%d %s",&stu.ID,stu.name);

              printf("enter the six subject marks:\n");

              for(i=0;i<6;i++)

              {

                           scanf("%d",&stu.marks[i]);

              }

              printf("enter the dob\n");

              scanf("%d-%d-%d",&stu.dob.d,&stu.dob.m,&stu.dob.y);

              printf("enter the doj:\n");

              scanf("%d-%d-%d",&stu.doj.d,&stu.doj.m,&stu.doj.y);

              percentage(stu.marks,&stu.per);

              printf("the id=%d ,name= %s\n",stu.ID,stu.name);

              printf("the six subjects marks are:\n");

              for(i=0;i<6;i++)

              {

                           printf("%d   ",stu.marks[i]);

              }

              printf("\n");

              printf("the date of birth is: %d-%d-%d\n",stu.dob.d,stu.dob.m,stu.dob.y);

              printf("the date of joining is :%d-%d-%d\n",stu.doj.d,stu.doj.m,stu.doj.y);

              printf("the percentage is:%f\n",stu.per);

              return 0;

 

}

 

void percentage(int arr[6],float *per)

{

              int i=0;

              int sum=0;

              for(i=0;i<6;i++)

              {

                           sum=sum+arr[i];

              }

              printf("sum=%d\n",sum);

              *per=(sum/6.0);

}

 
