/*  Program to test if number is evenly
    divisible by other number        */

#include <stdio.h>

int main (void)
{
    int num1 = 0, num2 = 0;

    printf ("Enter your numbers, divided by space: ");
    scanf ("%i %i", &num1, &num2);

    if (num2 == 0)
        printf ("Can't divide by zero.\n");
    else if (num1 % num2 == 0)
        printf ("%i is evenly divisible by %i.\n", num1, num2);
    else
        printf ("%i isn't evenly divisible by %i.\n", num1, num2);

    return 0;
}
