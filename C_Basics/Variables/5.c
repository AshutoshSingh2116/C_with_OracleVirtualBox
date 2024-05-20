  #include<stdio.h>
 
 int main()
 {
	  float l;
	  float b;
	  float perimeter;
	  float area;
  
	  printf("Enter the length:");
	  scanf("%f", &l);
  
 	  printf("Enter the breadth:");
 	  scanf("%f", &b);


	  area=l*b;
  
	  perimeter=2*(l+b);
  
	  printf("The area is:%f",area);
	  printf("The perimeter is:%f",perimeter);
  
	  return 0;
  
 }

