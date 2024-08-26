//6) Count and print how many girls and how many boys there are in the class.

#include <stdio.h>

struct student

{

              char name;

};

int main()

{

              struct student stu[8];

              int i=0,cg=0,cb=0;

              for(i=0;i<8;i++)

              {

                           printf("enter the %d student:\n",i+1);

                           scanf(" %c",&stu[i].name);

              }

              for(i=0;i<8;i++)

              {

                           if(stu[i].name=='g')

                                         cg=cg+1;

                           else

                                         cb=cb+1;

              }

              printf("the no of girls in class is %d\n",cg);

              printf("the no of boys in class is %d\n",cb);

 

              return 0;

 

}
