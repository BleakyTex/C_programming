// 4. Define a macro MAX3 that gives the maximum of three values.
#include <stdio.h>

#define MAX3(a,b,c) (  ((a) > (b)) ? ((a) > (c)) ? (a) : (c) : ((b) > (c)) ? (b) : (c) )

int main (void)
{
     int a = 25;
     int b = 35;
     int c = 60;

     printf ("%i\n", MAX3(a, b, c));
     return 0;
}

/* Ternary operator algorithm:

if (a > b)
     if (a > c)
          return a
     else
          return c
else if (b > c)
     return b
else
     return c
*/