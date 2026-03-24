/* Name: NAIWUMBWE ASSUMPTA */
/* Student Number: 24/U/BIE/08557/PE */

#include <stdio.h>

int main(void)
{
    float distance_km;
    float fuel_litres;
    float fuel_efficiency;

    printf("Enter distance (km): ");
    scanf("%f", &distance_km);

    printf("Enter fuel used (litres): ");
    scanf("%f", &fuel_litres);

    fuel_efficiency = distance_km / fuel_litres;

    printf("\n------- FUEL EFFICIENCY REPORT -------\n");
    printf("Distance Travelled: %.2f km\n", distance_km);
    printf("Fuel Used: %.2f litres\n", fuel_litres);
    printf("Fuel Efficiency: %.2f km/l\n", fuel_efficiency);
    printf("--------------------------------------\n");
    
    return 0;
}
