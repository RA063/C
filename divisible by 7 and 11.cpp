//To find a number is divisible by 7 and 11

#include<stdio.h>
int main()
{
	int num;
	printf("Enter number :");
	scanf("%d",&num);
	if((num%7==0)&&(num%11==0))
	{
		printf("%d is divided by 7 and 11",num);
	}
	else
		printf("%d can't be divided",num);
	return 0;
}
