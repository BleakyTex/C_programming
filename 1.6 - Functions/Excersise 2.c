/*
Modify Program 7.4 so the value of triangularNumber is returned by the function. 
*/

#include <stdio.h>

// Function to calculate the nth triangular number

int calculateTriangularNumber (int n)
{
    int  i, triangularNumber = 0;

    for ( i = 1;  i <= n;  ++i )
        triangularNumber += i;

    return triangularNumber;
}

int main (void)
{
    int result;
    int n = 10;

    result = calculateTriangularNumber (n);

    printf ("Triangular number %i is %i\n", n, result);

    return 0;
}
