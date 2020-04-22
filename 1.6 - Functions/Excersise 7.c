/*
7. Write a function that raises an integer to a positive integer power. Call the function x_to_the_n() taking two integer arguments x and n. Have the function return a long int.
*/

#include <stdio.h>

// Function to calculate x^n

long int x_to_the_n (long int x, int n)
{
    int  i;
    int buf;
    long int prev_x;

    buf = x;

    for ( i = 1;  i < n;  i++ ) {
        prev_x = x; //store previous value to check the overflow
        x *= buf;

        if (prev_x != 0 && x / prev_x != buf) {
            printf("\nError: integer overflow!");
            return -1;
        }
    }

    return x;
}

int main (void)
{
    long int x;
    int n;

    scanf("%li", &x);
    scanf("%i", &n);

    printf ("\n%li^%i = %li\n", x, n, x_to_the_n(x, n));

    return 0;
}
