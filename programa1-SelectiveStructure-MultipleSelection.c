/**
 * @file days_in_month.c
 * @brief Determine the number of days in a given month and year.
 *
 * This program takes a **month** (1–12) and a **year** (YYYY) as input
 * and outputs the number of days in that month, correctly handling leap years.
 *
 * ## Program Logic
 * 1. Prompt the user to enter a month (1–12) and a year.
 * 2. If the month has 31 days (January, March, May, July, August, October, December),
 *    display 31.
 * 3. If the month has 30 days (April, June, September, November), display 30.
 * 4. If the month is February:
 *    - Check if the year is divisible by 4 → **leap year**, 29 days.
 *    - Otherwise → 28 days.
 *
 * ## Example
 * ```
 * Input:
 *   Month: 2
 *   Year: 2024
 * Output:
 *   The month in the entered year has 29 days.
 * ```
 *
 * @note This implementation simplifies leap year logic by only checking divisibility by 4.
 *       (It does not account for century years not divisible by 400.)
 *
 * @author
 * Daniel Beltrán
 * @version 1.0
 * @date 2025-10-23
 */

#include <stdio.h>

int main(void)
{
    int mes, anio;

    printf("Enter a month (1 to 12): ");
    scanf("%i", &mes);

    printf("Enter a year (YYYY): ");
    scanf("%i", &anio);

    // Check for months with 31 days
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        printf("The month in the entered year has 31 days.\n");
    }
    else
    {
        // Check for February
        if (mes == 2)
        {
            if (anio % 4 == 0)
            {
                printf("The month in the entered year has 29 days.\n");
            }
            else
            {
                printf("The month in the entered year has 28 days.\n");
            }
        }
        else
        {
            // Remaining months have 30 days
            printf("The month in the entered year has 30 days.\n");
        }
    }

    return 0;
}
