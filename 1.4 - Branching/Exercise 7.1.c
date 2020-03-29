// Quicker prime number list generator v1.1

#include <stdio.h>
#include <stdbool.h>

int n, p;
bool isPrime;

int main (void)
{
    printf("2 ");

    for (n = 3; n <= 50; n += 2) {
        isPrime = true;

    for (p = 3; p < n; p += 2)
        if (n % p == 0)
            isPrime = false;

    if (isPrime)
        printf("%i ", n);
    }

    return 0;
}
