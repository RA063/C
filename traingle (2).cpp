//check a triangle can be formed or not
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter length of 3 side of the traingle :");
	scanf("%f%f%f",&a,&b,&c);
	if((a+b>c)&&(b+c>a)&&(c+a>b))
		printf("The traingle can be formed");
	else
		printf("The traingle can not be formed");
	return 0;
}
