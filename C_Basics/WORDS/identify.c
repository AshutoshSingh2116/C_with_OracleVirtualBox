#include<stdio.h>

int Change_Value = 0; //int is a keyword, change_value is an identifier, 0 is a constant 
  int Sum_it (int, int); //int is a keyword, sum_it is an identifier
  void error_with_code (void); //void is a keyword, error_with_code is an identifier
 int main (void) //int is a keyword
 {  
    int Arg_1 = 20, Arg_2 = 40; //int is a keyword, Arg_1 & Arg_2 are identifiers, 20 & 40 are constants
    int i;  // int is a keyword, i is a identifier
     for (i = 0; i < 10;i++) //for is a keyword, 0 & 10 are constants, i is an identifier
     {
        if (Arg_1 > Arg_2)   //if is a keyword, Arg_1 & Arg_2 are identifiers
             Arg_2 = Sum_it (Arg_1, Arg_2); // Arg_1 & Arg_2 and sum_it are identifiers
        else //else is a keyword
            Arg_1 = Sum_it (Arg_1, Arg_2); // Arg_1 & Arg_2 and sum_it are identifiers

     }
     error_with_code (); //it is an identifier
 }   /* End of main() */

 int Sum_it (int a, int b) //int is a keyword, sum_it, a, b is an identifier 
 {
     return a+b; //return is a keyword, a+b is an identifier
 } /* End of Sum_it */

 void error_with_code(void) //void is a keyword, error_with_code is an identifier
 {
    int divide_value; //int is a keyword, divide_value is an identifier
    int result;  //int is a keyword, result is an identifier
    divide_value = Change_Value; //they are identifiers
    result = 10 / divide_value; //10 is a constant, rest are identifiers
    return ; //return is a keyword

 } /* End of error_with_code() */

