/**
 * @file age_category.c
 * @brief Categorizes a person based on their age into different groups.
 *
 * This program prompts the user to input an age and then classifies it
 * according to the following rules:
 *   - "Minor" if the age is less than or equal to 12.
 *   - "Cadet" if the age is between 13 and 18 (inclusive).
 *   - "Youth" if the age is greater than 18 and up to 25.
 *   - "Adult" if the age does not meet any of the above conditions.
 *
 * @version 1.0
 * @date 2025-10-16
 * @author
 * Daniel Beltrán
 */

#include <stdio.h>

int main(void)
{
    int age;  // Variable to store the user's age

    /* === Input Section === */
    printf("Enter age: ");
    scanf("%i", &age);

    /* === Classification Logic ===
       - Minor:        age <= 12
       - Cadet:        13 <= age <= 18
       - Youth:        19 <= age <= 25
       - Adult:        age > 25
    */
    if (age <= 12)
    {
        printf("Minor.\n");
    }
    else
    {
        if (age >= 13 && age <= 18)
        {
            printf("Cadet.\n");
        }
        else
        {
            if (age > 18 && age <= 25)
            {
                printf("Youth.\n");
            }
            else
            {
                printf("Adult.\n");
            }
        }
    }

    return 0;
}

