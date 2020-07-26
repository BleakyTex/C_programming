// 9. Write a macro ABSOLUTE_VALUE that computes the absolute value of its argument.
#include <stdio.h>

#define  ABSOLUTE_VALUE(x)  ( ((x) >= 0) ? x : -(x) )

int main (void)
{
     int a;
     scanf("%i", &a);
     printf("ABS: %i\n", ABSOLUTE_VALUE(a + 10));

     return 0;
}