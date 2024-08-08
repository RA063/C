//eligible for admission or not
#include<stdio.h>
int main()
{
	float p,c,m,total,t_pm;
	printf("Enter marks for physics :");
	scanf("%f",&p);
	printf("Enter marks for math :");
	scanf("%f",&m);
	printf("Enter marks for chemistry :");
	scanf("%f",&c);
	total=(p+c+m);
	printf("Total marks for physcics, chemistry and math : %.1f",total);
	t_pm =(p+m);
	printf("\nTotal marks for physcics and math : %.1f",t_pm);
	
	if(((p>=55)&&(m>=65)&&(c>=50)&&(total>=190))||(t_pm>=140))
		printf("\nThe candidate is eligible for admission");
	else
		printf("\nThe candidate is not eligible for admission");
	return 0;		
}
