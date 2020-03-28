// Fahrenheit to Celsius conversion

#include <stdio.h>

int main (void)
{
    float C, F = 27;

    C = (F - 32) / 1.8;
    printf ("%g degrees F = %g degrees in C\n", F, C);

    return 0;
}
