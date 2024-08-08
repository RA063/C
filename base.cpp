#include<stdio.h>
int main()
{
	float n1, n2,dif;
	printf("Enter two decimal number:");
	scanf("%f\n%f",&n1,&n2);
	printf("Basic operations");
	printf("\nAddition :%f",n1 + n2);
	if(n1<n2)
	{
	 	dif = n2-n1;
	 	printf("\nSubstraction: %f",dif);
	}
	else 
	{
		dif = n1-n2;
	 	printf("\nSubstraction: %f",dif);
	}
	printf("\nmultiplication :%f",n1*n2);
	printf("\n division: %f",n1/n2);
	return 0;
}
