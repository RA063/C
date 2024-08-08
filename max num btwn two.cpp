//find max number between two number

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 1st number :");
	scanf("%d",&a);
	printf("Enter 2nd number :");
	scanf("%d",&b);
	if(a>b)
	{
		printf("%d is max number",a);
	}
	else
		printf("%d is max number",b);
	return 0;
}
