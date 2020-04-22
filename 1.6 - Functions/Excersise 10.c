/*
10. Write a function prime() that returns 1 if its argument is a prime number and returns 0 otherwise.
*/

#include <stdio.h>

// function to check if number is prime

int isPrime (int num)
{
    int isPrime = 1;
    int i;

    if (num <= 1)
        return 0;
    else
        for (i = 2; i < num; i++)
            if (num % i == 0)
                isPrime = 0;

    return isPrime;
}

int main (void)
{
    int num;

    printf ("Enter the number to test: ");
    scanf ("%i", &num);

    printf("\n%i\n", isPrime(num));

    return 0;
}
