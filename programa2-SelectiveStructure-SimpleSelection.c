/**
 * @file max_temperature.c
 * @brief Determine the highest temperature among three measurements.
 *
 * This program reads three temperature measurements from the user
 * and determines which one is the highest. It uses a simple loop
 * to read and compare the values, then outputs the maximum temperature.
 *
 * Input:
 * ------
 * - Three floating-point numbers representing temperature values in °C.
 *
 * Output:
 * -------
 * - Displays the highest temperature with two decimal places.
 *
 * Program Logic:
 * --------------
 * 1. Read 3 temperature values and store them in an array.
 * 2. Initialize the maximum with the first value.
 * 3. Compare each subsequent value to find the largest.
 * 4. Print the highest temperature.
 *
 * Example Run:
 * ------------
 * Ingrese el valor de la temperatura #1 (en C): 23.5
 * Ingrese el valor de la temperatura #2 (en C): 27.8
 * Ingrese el valor de la temperatura #3 (en C): 25.1
 * La temperatura mayor es: 27.80 C.
 *
 * Author: Daniel Beltrán
 * Date: 2025-10-16
 */

#include <stdio.h>

int main(void)
{
    float temp[3], max;
    int i;

    // Input: Read three temperature measurements
    for (i = 0; i < 3; i++)
    {
        printf("Ingrese el valor de la temperatura #%i (en C): ", i + 1);
        scanf("%f", &temp[i]);
    }

    // Initialize max with the first temperature
    max = temp[0];

    // Find the maximum temperature
    for (i = 1; i < 3; i++)
    {
        if (temp[i] > max)
        {
            max = temp[i];
        }
    }

    // Output: Display the highest temperature
    printf("La temperatura mayor es: %.2f C.", max);

    return 0;
}

