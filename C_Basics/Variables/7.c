#include<stdio.h>

int main()
{
float radius;
float area;
float perimeter;

printf("Enter the radius:");
scanf("%f", &radius);

area=3.14*radius*radius;

perimeter=2*3.14*radius;

printf("The area is:%f",area);
printf("The perimeter is:%f",perimeter);

return 0;

}
