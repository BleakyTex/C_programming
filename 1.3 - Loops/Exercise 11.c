// Calculate the sum of digits of the number

#include <stdio.h>

int main (void)
{
    int  number, right_digit, result = 0;

    printf ("Enter your number: ");
    scanf ("%i", &number);

    while ( number != 0 ) {
        right_digit = number % 10;
        result += right_digit;
        number = number / 10;
    }

    printf ("Sum of its digits = %i\n", result);

    return 0;
}
