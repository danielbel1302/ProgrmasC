/**
 * @file triangle_type.c
 * @brief Classifies a triangle as equilateral, isosceles, or scalene based on its side lengths.
 *
 * The program prompts the user to enter the lengths of the three sides of a triangle
 * and determines its type according to the following definitions:
 *  - Equilateral: all three sides are equal.
 *  - Isosceles: exactly two sides are equal.
 *  - Scalene: all three sides are different.
 *
 * @version 1.0
 * @date 2025-10-14
 * @author
 * Daniel Beltrán
 */

#include <stdio.h>

int main(void)
{
    int sides[3];               // Array to store the three side lengths
    int i;                      // Iterator variable
    int equilateral = 1;        // Flag indicating if the triangle is equilateral
    int isosceles = 1;          // Flag indicating if the triangle is isosceles
    int scalene = 1;            // Flag indicating if the triangle is scalene

    /* === Input Section === */
    for (i = 0; i < 3; i++)
    {
        printf("Enter side #%i: ", i + 1);
        scanf("%i", &sides[i]);
    }

    /* === Triangle Type Determination ===
       A triangle is:
       - Equilateral if all sides are equal.
       - Scalene if all sides are different.
       - Isosceles if exactly two sides are equal.
    */

    // Check if it's not equilateral (at least one side is different)
    if (sides[1] != sides[0] || sides[1] != sides[2] || sides[0] != sides[2])
    {
        equilateral = 0;
    }

    // Check if it's not isosceles (all sides are different)
    if (sides[1] != sides[0] && sides[1] != sides[2] && sides[0] != sides[2])
    {
        isosceles = 0;
    }

    // If it's equilateral or isosceles, it cannot be scalene
    if (equilateral || isosceles)
    {
        scalene = 0;
    }

    /* === Output Section === */
    if (equilateral)
    {
        printf("The triangle is equilateral.\n");
    }
    else
    {
        if (scalene)
        {
            printf("The triangle is scalene.\n");
        }
        else
        {
            printf("The triangle is isosceles.\n");
        }
    }

    return 0;
}

