//find max number between three number

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 1st number :");
	scanf("%d",&a);
	printf("Enter 2nd number :");
	scanf("%d",&b);
	printf("Enter 3rd number :");
	scanf("%d",&c);
	if((a>b)&&(a>c))
	{
		printf("%d is max number",a);
	}
	else if(b>c)
	{
		printf("%d is max number",b);
	}
	else
		printf("%d is max number",c);
	return 0;
}
