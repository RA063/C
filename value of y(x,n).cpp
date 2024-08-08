						//find the value of y(x,n)
#include<stdio.h>
int main()
{
int x,n,y;
printf("Enter value of x :");
scanf("%d",&x);
printf("Enter value of n :");
scanf("%d",&n);
	if (n==1)
	{
		y=(x+5);
		printf("%d",y);
	}
	else if(n==2)
	{
		y=(1+(x/n));
		printf("%d",y);
	}
	else if(n==3)
	{
		y=(1+x+n);
		printf("%d",y);
	}
	else if(n>=4)
	{
		y=(1+(n*x));
		printf("%d",y);
	}
return 0;
}

