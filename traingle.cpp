//check a triangle equilateral,isosceles,scalene triangle
#include <stdio.h>
int main()
{
float a,b,c;
printf("Enter lengths of three sides of the triangle:\n");
scanf("%f %f %f", &a, &b, &c);
if ((a <= 0)|| (b <= 0)|| (c <= 0))
    printf("\nInvalid !!.....All sides must be positive");
else if ((a==b) && (b==c))
	printf("\nIt's an equilateral triangle");
else if ((a==b)||(a==c)||(b==c))
    printf("\nIt's an isosceles triangle");
else
    printf("\nIt's a scalene triangle");
return 0;
}

