//  Program to divide two integers

#include <stdio.h>

int main (void)
{
    int num1, num2;

    printf ("Enter your numbers, divided by space: ");
    scanf ("%i %i", &num1, &num2);

    if (num2 == 0)
        printf ("Can't divide by zero.\n");
    else
        printf ("%i / %i = %.3f\n", num1, num2,
                (float) num1 / num2);

    return 0;
}
