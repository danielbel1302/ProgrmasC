/**
 * @file division_operations.c
 * @brief Calculates fractional and remainder values based on user input.
 *
 * This program reads an integer from the user and performs the following operations:
 *   a) Calculates one fifth (1/5) of the value.
 *   b) Calculates the remainder of the division by 5.
 *   c) Calculates one seventh (1/7) of the result obtained in step (a).
 *
 * Example:
 * --------
 * Input:
 *   100
 * Output:
 *   a) La quinta parte es: 20.00
 *   b) El resto de la division por 5 es: 0
 *   c) La septima parte del resultado del punto a) es: 2.86
 *
 * Author: Daniel Beltrán
 * Date: 2025-10-14
 */

#include <stdio.h>

int main(void)
{
    int valor;  // Variable to store the input integer

    // Prompt the user to enter an integer value
    printf("Ingrese un valor entero: ");
    scanf("%i", &valor);

    // a) Calculate one fifth of the value
    printf("a) La quinta parte es: %.2f.\n", (float)valor / 5);

    // b) Calculate the remainder when dividing by 5
    printf("b) El resto de la division por 5 es: %i.\n", valor % 5);

    // c) Calculate one seventh of the result from (a)
    printf("c) La septima parte del resultado del punto a) es: %.2f.\n", (float)valor / 5 / 7);

    return 0;
}

