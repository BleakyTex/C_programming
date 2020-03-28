// Quicker prime number list generator

#include <stdio.h>
#include <stdbool.h>

int n, p;
bool isPrime;

int main (void)
{
    for (n = 2; n <= 50; n++) {
            if (n != 2 && (n % 2 == 0))
                continue;

            isPrime = false;

    for (p = 2; p < n; p++) {
            if (p != 2 && (p % 2 == 0))
                continue;
            else if (n % p == 0)
                isPrime = true;
    }

    if (!isPrime)
        printf("%i ", n);
    }

    return 0;
}
