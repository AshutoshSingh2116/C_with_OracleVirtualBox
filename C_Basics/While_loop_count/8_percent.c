// For n students from a class, read 6 subject marks for every student, and calculate their percentage of marks, and print who is the topper of all (print the student number).


#include<stdio.h>
int main()
{
	int id;float per2;int n,m=1; float a,b,c,d,e,f,per1;

	printf("Enter the total number of students:");
	scanf("%d",&n);

	printf("Enter 1st student marks:");
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);

	per1=((a+b+c+d+e+f)/600.00)*100.00;

	printf("Student 1 percentage is:%f\n",per1);


	while(m+1<=n)
	{
		printf("Enter %d student marks:",m+1);
		scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);

		per2=((a+b+c+d+e+f)/600.00)*100.00;

		printf("Student %d percentage is:%f\n",m,per2);

		if(per1>per2)
		{
			id=m;

		}
		else

			id=m+1;

		m++;

	}

	printf("Topper Student percentage is:%d\n",id);
	return 0;
}


/*OUTPUT:  
	Enter the total number of students:2
	Enter 1st student marks:2 3 4 5 6 7
	Student 1 percentage is:4.500000
	Enter 1 student marks:1 2 3 4 5 6
	Student 1 percentage is:3.500000
	Topper Student percentage is:1

	Enter the total number of students:3
	Enter 1st student marks:2 3 4 5 6 7   
	Student 1 percentage is:4.500000
	Enter 1 student marks:1 2 3 4 5 6 
	Student 1 percentage is:3.500000
	Enter 2 student marks:7 8 9 6 7 8
	Student 2 percentage is:7.500000
	Topper Student percentage is:3           */
