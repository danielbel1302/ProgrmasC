/**
 * @file max_of_two.c
 * @brief Determines the larger of two distinct integer values entered by the user.
 *
 * This program reads two different integer values from the user and compares them.
 * It then displays a message indicating which value is greater.
 *
 * Example:
 * --------
 * Input:
 *   Ingrese el primer valor: 12
 *   Ingrese el segundo valor (distinto al anterior): 8
 * Output:
 *   El valor 12 es el mas grande.
 *
 * Notes:
 * ------
 * - The two values must be different.
 * - The program uses a simple conditional structure (if-else) to determine the larger number.
 *
 * Author: Daniel Beltrán
 * Date: 2025-10-14
 */

#include <stdio.h>

int main(void)
{
    int valor1, valor2;  // Variables to store the two integer values

    // Prompt the user for the first value
    printf("Ingrese el primer valor: ");
    scanf("%i", &valor1);

    // Prompt the user for the second value
    printf("Ingrese el segundo valor (distinto al anterior): ");
    scanf("%i", &valor2);

    // Determine and display which value is greater
    if (valor1 > valor2)
    {
        printf("El valor %i es el mas grande.\n", valor1);
    }
    else
    {
        printf("El valor %i es el mas grande.\n", valor2);
    }

    return 0;
}

