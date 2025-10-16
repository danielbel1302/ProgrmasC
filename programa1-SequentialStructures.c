/********************************************************************************
 * Project:     Basic Arithmetic Operations
 * File:        main.c
 * Description: This program reads two integer values (A and B) from user input 
 *              and calculates their sum, difference (A - B), and product. 
 *              The results are then displayed on the screen.
 *
 * Language:    C (ANSI C)
 * Compiler:    GCC / Clang
 *
 * Author:      Daniel Beltrán
 * Date:        [2025-10-14]
 ********************************************************************************/

#include <stdio.h>   // Standard I/O library for input and output functions

int main(void)
{
    int A;  // First integer value
    int B;  // Second integer value

    // Prompt and read first integer
    printf("Enter the first integer: ");
    scanf("%i", &A);

    // Prompt and read second integer
    printf("Enter the second integer: ");
    scanf("%i", &B);

    // Display arithmetic results
    printf("The sum is %i.\n", A + B);
    printf("The difference is %i.\n", A - B);
    printf("The product is %i.\n", A * B);

    return 0; // End of program
}

