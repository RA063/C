//To find a number +ve,-ve or 0

#include<stdio.h>
int main()
{
int number = 21;
(number > 0) ? printf("%d is +ve",number) : (number < 0) ? printf ("%d is -ve",number) : printf ("0");
return 0;
}
