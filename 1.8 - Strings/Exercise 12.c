/*
12. Write a function called strToFloat() that converts a character string
into a floating-point value.
*/

#include <stdio.h>
#include <stdbool.h>

// Function to convert a string to an integer
double  strToFloat (const char  string[])
{
    int  i, j, floatPosition = 0, powFraction = 1;
    int intValue, integer = 0;
    double fraction = 0;
    double result = 0;
    bool isNegative = false;
    bool isFractional = false;

    for  ( i = 0; (string[i] >= '0' && string[i] <= '9') ||
                    string[i] == '-' || string[i] == '.'; i++ )
    {
        if (string[i] == '-') {
            isNegative = true;
            continue; // so '-' code isn't treated as number
        }

        if (string[i] == '.') {
            isFractional = true;
            floatPosition = i;
            continue;
        }

        if (!isFractional) {
            intValue = string[i] - '0';
            integer = integer * 10 + intValue;
        }
        else {
            intValue = string[i] - '0';
            fraction = fraction * 10 + intValue;
        }

    }

    for ( j = 1; j < (i - floatPosition); j++ )
        powFraction *= 10;

    result = integer + fraction / powFraction;

    if (isNegative)
        result = -result;

    return result;
}

int main (void)
{
    double  strToFloat (const char  string[]);

    printf ("%f\n", strToFloat("-867.6921"));

    return 0;
}
