  #include<stdio.h>
  
  int main()
  {
  float s;
  float area;
  float perimeter;
   
  printf("Enter the side:");
  scanf("%f", &s);
  
  area=s*s;
  
  perimeter=4*s;
  
  printf("The area is:%f",area);
  printf("The perimeter is:%f",perimeter);
  
  return 0;
  
  }

