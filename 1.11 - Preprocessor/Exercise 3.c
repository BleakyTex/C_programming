// 3. Define a macro MIN that gives the minimum of two values.
#include <stdio.h>

#define MIN(a,b) ( ((a) < (b)) ? (a) : (b) )

int main (void)
{
     int a = 10;
     int b = 20;

     printf ("%i\n", MIN(a, b));
     return 0;
}
