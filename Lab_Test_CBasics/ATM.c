 #include<stdio.h>
  int main()
  
  {
  
          int n,a,b,c,d,e;
          printf("Enter the amount:");
          scanf("%d",&n);
  
          a=n/2000;
          n=n%2000;
  
          b=n/500;
          n=n%500;
  
          c=n/200;
          n=n%200;
  
          d=n/100;
          n=n%100;
  
          e=n/50;
          n=n%50;
          printf("Enter the amount to withdraw:%d",n);
          printf("Money dispensed as follows:\n");
          printf("No of 2000/- notes:%d\n No of 500/- notes:%d\n No of 200/- notes:%d\n No of 100/- notes: %d\n No of 50/- notes:%d\n",a,b,c,d,e);
 
  
  return 0;
  }

