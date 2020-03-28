// Print every 5th triangular number from 5 to 50

#include <stdio.h>

int main (void)
{
    int n;

    printf ("    EXERCISE 3 \n\n");
    printf ("  n       Triangle \n");
    printf (" ----     --------\n");

    for (n = 5; n <= 50; n += 5)
        printf ("  %2i       %i \n", n, n*(n+1)/2);

    return 0;
}
