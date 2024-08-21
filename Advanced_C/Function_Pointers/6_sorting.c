/* 6) sorting a list of names received from the keyboard, with options using callback functions.
1 :  sort with case sensitivity (strcmp)
2 : sort without case sensitivity (stricmp)

*/

#include<stdio.h>
#include<string.h>
int (*mystrcmp)(const char *,const char *)=strcmp;
void fun(int,int (*mystrcmp)(const char *,const char *),char a[][50]);
int main()
{
	int n,i,r;
	printf("Enter number of names: \n");
	scanf("%d",&r);
	char a[r][50];
	for(i=0;i<r;i++)
	{
		printf("name %d: ",i+1);
		scanf("%s",a[i]);
	}
	fun(r,mystrcmp,a);
	for(i=0;i<r;i++)
	{
		printf("%s \n",a[i]);
	}
	//fun(r,mystrcmp,a);
	return 0;
}

void fun(int r,int(*mystrcmp)(const char*,const char *),char a[][50])
{
	char temp[50];
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<r-1;j++)
		{
			int r=(*mystrcmp)(a[j],a[j+1]);
			if(r>0)
			{
				strcpy(temp,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],temp);
			}
		}
	}
}

/* OUTPUT:

Enter number of names: 
3
name 1: ashu
name 2: sahu
name 3: usha
ashu 
sahu 
usha 


*/
