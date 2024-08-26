//3) Write a function to compare 2 structures and return 1 if they are equal, and 0 if they are not equal


#include <stdio.h>

#include <string.h>

struct student

{

              int id;

              char name[20];

};

int main()

{

              struct student s1={1,"krishna"};

              struct student s2={1,"krishna"};

              if((s1.id==s2.id)&&(strcmp(s1.name,s2.name)==0))

              {

                           printf("the structures are equal\n");

              }

              else

                           printf("the structures are not equal\n");

             

              return 0;

 

}
