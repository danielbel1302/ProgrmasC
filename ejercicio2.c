/**
 * @file payment_options.c
 * @brief Calculates different payment options based on a given purchase amount.
 *
 * This program takes a real number as input, representing the total amount of a purchase,
 * and displays three different payment options:
 *   - 1 installment with no surcharge.
 *   - 2 installments with a 5% surcharge.
 *   - 6 installments with a 40% surcharge.
 *
 * The program then calculates and displays both the amount per installment and
 * the total amount to be paid for each option.
 *
 * Author: Daniel Beltrán
 * Date: 2025-10-14
 */

#include <stdio.h>

int main(void)
{
    float monto;  // Variable to store the purchase amount

    // Prompt the user to enter the amount to pay
    printf("Ingrese el monto a pagar: $");
    scanf("%f", &monto);

    // Display payment options with respective surcharges
    printf("\nFormas de pago:\n");

    // Option 1: One installment (no surcharge)
    printf("1 cuota de: $%.2f\n", monto);

    // Option 2: Two installments with a 5% surcharge
    float total_2_cuotas = monto * 1.05;
    float cuota_2 = total_2_cuotas / 2;
    printf("2 cuotas de: $%.2f | Total: $%.2f\n", cuota_2, total_2_cuotas);

    // Option 6: Six installments with a 40% surcharge
    float total_6_cuotas = monto * 1.40;
    float cuota_6 = total_6_cuotas / 6;
    printf("6 cuotas de: $%.2f | Total: $%.2f\n", cuota_6, total_6_cuotas);

    return 0;
}

