//check character/digit/sp. ch
#include<stdio.h>
int main()
{
	char c;
	printf("Enter the character(ASCII only) ::");
	scanf("%c",&c);
	if((c>=65 && c<=90) || (c>=97 && c<=122))
		printf("%c is Alphabet",c);
	else if(c>=48 && c<=57)
		printf("%c is Digit",c);
	else
		printf("%c is Special Character",c);
	return 0;
}
