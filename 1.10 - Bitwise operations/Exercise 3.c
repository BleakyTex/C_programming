/*
3. Given that the expression ~0 produces an integer that 
contains all 1s, write a function called int_size() that 
returns the number of bits contained in an int on your 
particular machine.
*/
#include <stdio.h>

int int_size(void)
{
     int count = 0, i = ~0;
     while (i) {
          i <<= 1;
          count++;
     }
     return count;
}

int main (void)
{
     int int_size(void);

     printf("%i\n", int_size());

     return 0;
}
