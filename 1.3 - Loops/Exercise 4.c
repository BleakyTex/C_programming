// Print the table of factorials from 1 to 10

#include <stdio.h>

int main (void)
{
    int n, result;

    printf ("   EXCERCISE 4 \n\n");
    printf ("  n          n! \n");
    printf (" ---     ----------\n");

    for (n = 1; n <= 10; n++) {
        result = 1;  //reset the result variable

        for (int i = 1; i <= n; i++)
            result *= i;

        printf ("  %-2i      %i \n", n, result);
    }

    return 0;
}
