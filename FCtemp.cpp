//Farenheit to centigrade and check condition
#include<stdio.h>
int main()
{
	float F,c;
	printf("Enter temperature in Farenheit :");
	scanf("%f",&F);
	c=((F-32)*5)/9;
	printf("Temperature in centigrade : %.2f",c);
	if((c>0)&&(c<10))
		printf("\nvery cold weather");
	else if((c>10)&&(c<20))
		printf("\ncold weather");
	else if((c>20)&&(c<30))
		printf("\nNormal in temp");
	else if((c>30)&&(c<40))
		printf("\nIts Hot");
	else if(c>=40)
		printf("\nIts very hot");
	else
		printf("\nFreezing weather");
	return 0;
}
