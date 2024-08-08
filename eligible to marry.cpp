//to check a person is eligible to marry or not
#include<stdio.h>
int main()
{
	char gen;
	printf("Enter gender(M/F) :");
	scanf("%c",&gen);
	if(gen == 'M'){
		int age;
		printf("Enter age in years:");
		scanf("%d",&age);
		if(age>=21)
		{
			printf("%d is eligible to marry",age);
		}
		else
			printf("Person is underage");
	}
	else
	{
		int age;
		printf("Enter age in years:");
		scanf("%d",&age);
		if(age>=18)
		{
			printf("%d is eligible to marry",age);
		}
		else
			printf("Person is underage");
	}
return 0;	
}
