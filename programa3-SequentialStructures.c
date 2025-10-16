/**
 * @file format_date.c
 * @brief Formats and displays a date in "DD/MM/YYYY" format.
 *
 * This program reads three natural numbers from the user representing:
 *   - Day (DD)
 *   - Month (MM)
 *   - Year (YYYY)
 *
 * It then displays the date in a standardized format: "DD/MM/YYYY",
 * ensuring that day and month are always shown with two digits, and year with four digits.
 *
 * Example:
 * Input:
 *   Day: 7
 *   Month: 3
 *   Year: 2025
 * Output:
 *   Formato fecha: 07/03/2025
 *
 * Author: Daniel Beltrán
 * Date: 2025-10-14
 */

#include <stdio.h>

int main(void)
{
    int dia;   // Variable to store the day
    int mes;   // Variable to store the month
    int anio;  // Variable to store the year

    // Prompt the user for day, month, and year
    printf("Ingrese un numero entero para el dia: ");
    scanf("%i", &dia);

    printf("Ingrese un numero entero para el mes: ");
    scanf("%i", &mes);

    printf("Ingrese un numero entero para el anio: ");
    scanf("%i", &anio);

    // Display the formatted date with zero-padding
    printf("Formato fecha: %02i/%02i/%04i\n", dia, mes, anio);

    return 0;
}

