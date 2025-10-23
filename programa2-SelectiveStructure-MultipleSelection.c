/**
 * @file calculator_menu.c
 * @brief Simple calculator that performs addition, subtraction, or multiplication on two integers.
 *
 * This program prompts the user to input two integers and then displays a menu
 * of operations to choose from:
 * 
 * - **1. Addition**
 * - **2. Subtraction**
 * - **3. Multiplication**
 *
 * After selecting an option, the program performs the chosen operation and 
 * displays the result.
 *
 * ## Program Logic
 * 1. Request two integer numbers from the user.
 * 2. Display a menu with three options.
 * 3. Perform the operation according to the user's choice:
 *    - Option 1 → Sum
 *    - Option 2 → Subtract
 *    - Option 3 → Multiply
 * 4. Show the result on screen.
 *
 * ## Example
 * ```
 * Input:
 *   Enter the first number: 5
 *   Enter the second number: 3
 *   Menu:
 *     1. Add
 *     2. Subtract
 *     3. Multiply
 *   Option: 2
 *
 * Output:
 *   The subtraction is: 2
 * ```
 *
 * @note This implementation assumes the user enters valid integers and
 *       a valid option (1–3). No input validation is performed.
 *
 * @author
 * Daniel Beltrán
 * @version 1.0
 * @date 2025-10-23
 */

#include <stdio.h>

int main(void)
{
    int num1, num2, op;

    // Request user input
    printf("Enter the first number: ");
    scanf("%i", &num1);

    printf("Enter the second number: ");
    scanf("%i", &num2);

    // Display operation menu
    printf("------------- Menu -------------\n");
    printf("1. Add\n2. Subtract\n3. Multiply\nOption: ");
    scanf("%i", &op);

    // Display result header
    printf("------------- Result -------------\n");

    // Perform operation according to user's choice
    if (op == 1)
    {
        printf("The sum is: %i\n", num1 + num2);
    }
    else if (op == 2)
    {
        printf("The subtraction is: %i\n", num1 - num2);
    }
    else if (op == 3)
    {
        printf("The multiplication is: %i\n", num1 * num2);
    }
    else
    {
        printf("Invalid option.\n");
    }

    return 0;
}
