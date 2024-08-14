//  1) int strlen(char s[]);

#include<stdio.h>

int stringlength(char *);

int main()
{
	int d;
	char str1[100];
	printf("Enter the string:");
	scanf("%s",str1);

	d=stringlength(str1);
	printf("%d",d);
}
int stringlength(char *p1)
{
	int r=0;
//	int *p1=str1;
//	int *p2=str1;

		while(1)
		{
			if(*p1!='\0'){
				p1++;
				r++;}

			else
				break;
		}

			

//	r=p1-p2;
	return r;
}

