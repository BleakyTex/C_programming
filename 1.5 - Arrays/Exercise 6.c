// Fibonacci numbers generator using only 3 variables

#include <stdio.h>

int main (void)
{
     int  f0, f1 = 0, f2 = 1, i;

     printf("0\n1\n");

     for (i = 2;  i < 15;  ++i) {
          f0 = f1 + f2;
          printf ("%i\n", f0);
          f1 = f2;
          f2 = f0;
     }

     return 0;
}
