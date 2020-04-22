/*
8. Write a program to solve a quadratic equation. The program should allow the user to enter the values for a, b, and c. If the discriminant is less than zero, a message should be displayed that the roots are imaginary; otherwise, the program should then proceed to calculate and display the two roots of the equation.
*/

#include <stdio.h>

// Function to calculate the absolute value of a number

double absoluteValue (double x)
{
    if ( x < 0 )
        x = -x;
    return (x);
}

// Function to compute the square root of a number

double squareRoot (float x, double epsilon)
{
    double guess = 1.0;

    while  ( absoluteValue ((x / (guess * guess)) - 1) >= epsilon ) {
        guess = ( x / guess + guess ) / 2.0;
    }

    return guess;
}

int main (void)
{
    const double precision = 1e-15;

    float a, b, c, discr;
    double x1, x2;

    printf("    ax^2 + bx + c = 0\n\n");
    printf("Enter equation coefficients\na = ");
    scanf ("%g", &a);
    printf("b = ", &b);
    scanf ("%g", &b);
    printf("c = ", &c);
    scanf ("%g", &c);

    discr = b * b - 4 * a * c;

    if (discr < 0)
        printf("Error: equation roots are imaginary!");
    else
        x1 = (-b + squareRoot (discr, precision)) / (2 * a);
        x2 = (-b - squareRoot (discr, precision)) / (2 * a);

        printf ("\nx1 = %g\nx2 = %g\n", x1, x2);

    return 0;
}
