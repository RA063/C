//FIND SMALLEST BETWEEN 2 NUMBERS

#include <stdio.h>
int main()
{
	int a,b;
	printf ("Enter two numbers : ");
	scanf ("%d\n%d",&a,&b);
	(a > b) ? printf("%d is smallest",b) : printf ("%d is smallest",a);
	return 0;
}
