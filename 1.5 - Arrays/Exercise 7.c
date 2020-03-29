// Prime numbers generator using the Sieve of Eratosthenes

#include <stdio.h>

int main (void)
{
    int  n, i, j;

    printf("Upper margin to search for prime numbers: ");
    scanf("%i", &n);

    int list[n + 1];

    for (i = 0; i < (n + 1); i++)
        list[i] = 0;

    for (i = 2; i < n; i++) {
       for (j = 2; i * j <= n; j++)
            list[i * j] = 1;
    }

    for (i = 2; i < n; i++)
       if (!list[i])
        printf("%i\n", i);

    return 0;
}
