//calculate grade(if-else)
#include<stdio.h>
int main()
{
	float phy,chem,bio,math,com,per;
	printf("Enter mark's of physics :");
	scanf("%f",&phy);
	printf("Enter mark's of chemistry :");
	scanf("%f",&chem);
	printf("Enter mark's of biology :");
	scanf("%f",&bio);
	printf("Enter mark's of mathematics :");
	scanf("%f",&math);
	printf("Enter mark's of computer :");
	scanf("%f",&com);
	per= (phy+chem+bio+math+com)/5;
	printf("Percentage : %.1f\n",per);
	if(per>=90)
		printf("Grade A");
	else if((per<90)&&(per>=80))
		printf("Grade B");
	else if((per<80)&&(per>=70))
		printf("Grade C");
	else if((per<70)&&(per>=60))
		printf("Grade D");
	else if((per<60)&&(per>=50))
		printf("Grade E");
	else
		printf("Grade F");
	return 0;
}
