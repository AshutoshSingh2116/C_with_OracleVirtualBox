 #include<stdio.h>

int main()
{
	int SP;
	int Profit;
	int n;
	int CP;
	int d;

	printf("Selling Price is:");
	scanf("%d",&SP);

	printf("Enter profit:");
	scanf("%d",&Profit);

	printf("Enter the number of items");
	scanf("%d",&n);

	CP=SP-Profit;

	d=CP/n;

	printf("%d",d);

	return 0;







}
