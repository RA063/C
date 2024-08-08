//check eligible to retire or not


#include<stdio.h>
int main()
{
	int age;
	printf("Enter current age : ");
	scanf ("%d",&age);
	( age >= 60 ) ? printf ("person is eligible to retire") : printf("person is not eligible to retire");
	return 0;
}
