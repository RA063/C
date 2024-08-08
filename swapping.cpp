#include<stdio.h>
int main()
{
	int a,b;
	printf ("Enter the value of a & b ");
	scanf ("%d%d",&a,&b);
	printf ("Before swapping :");
	printf ("a=%d b=%d",a,b);
	printf ("After swapping :");
	a = a + b;
	b = a - b;
	a = a - b;
	printf ("a=%d b=%d",a,b);
	return 0;
	
}
