// Calculate 3x^2 - 5x^2 + 6

#include <stdio.h>

int main (void)
{
    float x = 2.55, res;

    res = 3*x*x*x - 5*x*x + 6;
    printf("res = %g", res);

    return 0;
}
