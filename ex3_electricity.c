/* Name: NAIWUMBWE ASSUMPTA */
/* Student Number: 24/U/BIE/08557/PE */

#include <stdio.h>

int main(void) 
{
    int   units_consumed;
    float cost_per_unit;
    float total_bill;

    printf("Enter units consumed: ");
    scanf("%d", &units_consumed);

    printf("Enter cost per unit: ");
    scanf("%f", &cost_per_unit);

    total_bill = units_consumed * cost_per_unit;

    printf("\n-------- ELECTRICITY BILL SUMMARY --------\n");
    printf("Units Consumed: %d units\n",    units_consumed);
    printf("Cost Per Unit:  %.2f UGX\n",   cost_per_unit);
    printf("Total Bill:     %.2f UGX\n",   total_bill);
    printf("------------------------------------------\n");

    return 0;
}
