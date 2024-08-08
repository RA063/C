//check a number is divisible by 7 and 11

#include<stdio.h>
int main()
{
	int num;
	printf ("Enter the number");
	scanf("%d",&num);
	((num/7==0) && (num/11==0)) ? printf ("%d is divisible by 7 and 11",num) : printf ("%d is not divisible by 7 and 11",num);
	return 0;
}
