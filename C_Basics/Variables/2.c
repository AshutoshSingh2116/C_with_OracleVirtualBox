 #include<stdio.h>

 int main()

 {

 int a;

 unsigned int b;

 short int c;

 unsigned short int d;

  float e;  

 double f;  

  long double g; 

  char h;   

  unsigned char i;

 long int j; 

  unsigned long int k;

printf("Take input from user for all the variables");

scanf("%d%u%hd%hu%f%lf%LF%ld%lu",&a,&b,&c,&d,&e,&f,&g,&j,&k);
scanf("%c",&i);
scanf("%c",&h);

printf("%d %u %hd %hu %f %lf %LF %ld %lu",a,b,c,d,e,f,g,j,k);                           
printf("%c",i);
printf("%c",h);

return 0;

}                                                                                                                                                                                                                                                                   
