/* Name: NAIWUMBWE ASSUMPTA */
/* Student Number: 24/U/BIE/08557/PE */

#include <stdio.h>

int main(void) {
    float amount_to_send;
    float fee_percent;
    float fee_amount;
    float total_amount_deducted;

    printf("Enter amount to send: ");
    scanf("%f", &amount_to_send);

    printf("Enter transaction fee (%%): ");
    scanf("%f", &fee_percent);

    fee_amount = (fee_percent / 100) * amount_to_send;
    total_amount_deducted = amount_to_send + fee_amount;

   	printf("\n----- TRANSACTION SUMMARY -----\n");
    printf("Amount Sent: %.2f UGX\n", amount_to_send);
    printf("Transaction Fee: %.2f UGX\n", fee_amount);
    printf("Total Amount Deducted:  %.2f UGX\n", total_amount_deducted);
    printf("--------------------------------\n");
   
    return 0;
}
