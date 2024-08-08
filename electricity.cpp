//electricity bill
#include <stdio.h>
int main() 
{
    int ID;
    char name[50];
    float unit, charge, ta, sc=0, na;
    printf("Enter Customer ID: \n");
    scanf("%d",&ID);
    fflush(stdin);
    printf("Enter Customer Name:\n");
    gets(name);
    printf("Enter Units Consumed:\n");
    scanf("%f", &unit);
    if (unit <= 199)
        charge = 1.20;
    else if ((unit>=200)&&(unit < 400))
        charge = 1.50;
    else if ((unit>=400)&&(unit <600))
        charge = 1.80;
    else
        charge = 2.00;
        
    ta = unit * charge;
    if (ta > 400)
    {
        sc = (ta *15)/100;
    	na= ta + sc;
	}
    if (na < 100)
        na = 100;
    printf("Customer ID N0: %d\n", ID);
    printf("Customer Name: %s\n", name);
    printf("Unit Consumed: %.1f\n", unit);
    printf("Amount Charges @Rs. %.1f per unit: %.1f\n", charge, ta);
    printf("Surchage Amount: %.1f\n", sc);
    printf("Net Amount Paid By the Customer: %.1f\n", na);
    return 0;
}

