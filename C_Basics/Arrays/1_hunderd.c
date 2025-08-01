/* Write the following program :
   Declare an integer array of size 100.
   Assign numbers 1-100 to each element of the array.
   Print all the numbers.
   Print all even elements.
   Print all odd elements.
   Add also 5 to each element and print 6 – 105 numbers.   */


#include<stdio.h>
int main()
{
	int arr[100];

	for(int i=0;i<100;i++)
	{
		arr[i]=i+1;
		printf("%d ",arr[i]);
	}

	printf("\nEven numbers are:");
	for(int i=0;i<100;i++)
	{
		if(arr[i]%2==0)
			printf("%d ",arr[i]);
	}

	printf("\nOdd numbers are:");
	for(int i=0;i<100;i++)
	{
		if(arr[i]%2!=0)
			printf("%d ",arr[i]);
	}

	printf("\nAfter adding 5, the numbers are:");
	for(int i=0;i<100;i++)
	{
		arr[i]=(i+1)+5;
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}


/* OUTPUT:

1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 

Even numbers are:2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50 52 54 56 58 60 62 64 66 68 70 72 74 76 78 80 82 84 86 88 90 92 94 96 98 100 

Odd numbers are:1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49 51 53 55 57 59 61 63 65 67 69 71 73 75 77 79 81 83 85 87 89 91 93 95 97 99

After adding 5, the numbers are:6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 103 104 105 

*/
