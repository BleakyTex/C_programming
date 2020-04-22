/*
9. Write a function lcm() that takes two integer arguments and returns their lcm. The lcm() function should calculate the least common multiple by calling the gcd() function from Program 7.6.
*/

#include <stdio.h>

// function to find the greatest common divisor

int  gcd (int u, int v)
{
    int  temp;

    while ( v != 0 ) {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

// function to find the least common multiple

float lcm (int u, int v)
{
    float lcm;

    if (u < 0 || v < 0) {
        printf ("Error: negative arguments into lcm.\n");
        return -1;
    }
    else
        lcm = (u * v) / gcd(u, v);

    return lcm;
}

int main (void)
{
    printf ("The lcm of 15 and 10 is %g.\n", lcm (15, 10));

    return 0;
}