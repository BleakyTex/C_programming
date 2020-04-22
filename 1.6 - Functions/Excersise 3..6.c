/*
3. Modify Program 7.8 so that the value of epsilon is passed as an argument to the function. Try experimenting with different values of epsilon to see the effect that it has on the value of the square root.
4. Modify Program 7.8 so that the value of guess is printed each time through the while loop. Notice how quickly the value of guess converges to the square root.
5. The criteria used for termination of the loop in the squareRoot() function of Program 7.8 is not suitable for use when computing the square root of very large or very small numbers. Rather than comparing the difference between the value of x and the value of guess2, the program should compare the ratio of the two values to 1. 
6. Modify Program 7.8 so that the squareRoot() function accepts a double precision argument and returns the result as a double precision value. 
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
        printf ("guess = %.16g\n", guess);
    }

    return guess;
}

int main (void)
{
    const double precision = 1e-15;
    float number;

    printf("Enter number: ");
    scanf ("%f", &number);

    printf ("\nsquareRoot(%g) = %.16g\n", number, squareRoot (number, precision));

    return 0;
}
