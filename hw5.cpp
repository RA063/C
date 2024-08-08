//To check whether a number divisible by 5 or 8

#include<stdio.h>
int main()
{
	int number = 25;
	((number % 5 == 0) || (number % 8 == 0)) ? printf ("Yes") : printf ("no");
	return 0;
}
