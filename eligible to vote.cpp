//to check a person is eligible to vote or not

#include<stdio.h>
int main()
{
	int age;
	printf("Enter age :");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("%d is eligible to vote",age);
	}
	else
		printf("%d is not eligible to vote",age);
	return 0;
	
}
