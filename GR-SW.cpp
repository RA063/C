//grade by SWITCH-CASE 
#include<stdio.h>
int main()
{
	char Gr;
	printf("Enter grade(O/E/V/G/A/F) :");
	scanf("%c",&Gr);
	switch(Gr)
	{
		case'O': printf("You have got : Outstanding");
				 break;
		case'E': printf("You have got : Excellent");
				 break;
		case'V': printf("You have got : Very good");
				 break;
		case'G': printf("You have got : Good");
				 break;
		case'A': printf("You have got : Average");
				 break;
		case'F': printf("You have got : Fail");
				 break;
		default: printf("Invalid input !!!");	  
	}
	return 0;
}
