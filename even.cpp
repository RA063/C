//to check a number a number is EVEN or ODD

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number :");
	scanf ("%d",&n);
	if(n%2==0)
	{
		printf("It is even number");
	}
	else
		printf("It is odd number");
	return 0;
}
