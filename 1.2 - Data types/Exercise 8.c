// Find next largest even multiple

#include <stdio.h>

int main (void)
{
    int next_mul, i = 12258, j = 23;

    next_mul = i + j - i % j;
    printf("Next largest even multiple of %i for %i is %i.\n",
            j, i, next_mul);

    return 0;
}
