// Calculate a triangular number for a number typed by user

#include <stdio.h>

int main (void)
{
    int  iter, n, number, triangularNumber, counter;

    printf ("How many calculations do you want? ");
    scanf ("%i", &iter);
    printf ("\n");

    for ( counter = 1;  counter <= iter;  ++counter ) {
        printf ("What triangular number do you want? ");

        scanf  ("%i", &number);

        triangularNumber = 0;

        for ( n = 1;  n <= number;  ++n )
            triangularNumber += n;

        printf ("Triangular number %i is %i\n\n", number,
                triangularNumber);
    }

    return 0;
}
