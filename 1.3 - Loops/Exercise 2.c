// Print the table of n and n^2, for n = 1 to 10

#include <stdio.h>

int main (void)
{
    int n;

    printf (" EXCERCISE 2 \n\n");
    printf ("  n      n^2 \n");
    printf (" ---    -----\n");

    for (n = 1; n <= 10; n++)
        printf ("%3i      %i \n", n, n*n);

    return 0;
}
