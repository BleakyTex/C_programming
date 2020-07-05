/*
8. Write a function called bitpat_set() to set a specified set of bits to a particular value.
*/
#include <stdio.h>

// Function to print int32 in binary format
void print_bin(int n)
{
     char buffer [33];
     int i = 0;
     itoa (n, buffer, 2);
     printf ("%s\n", buffer);

     printf("\n");
}

int int_size(void)
{
     int count = 0, i = ~0;
     while (i) {
          i <<= 1;
          count++;
     }
     return count;
}

void bitpat_set(unsigned int *source, unsigned int pattern, int start, int n)
{
     unsigned int i, mask = 0;
     n = n % int_size();
     start = start % int_size();

     // convert n to number of 1-s, i.e. if n=3, mask = 111
     if (n > 1)
          for (i = 0; i < n; i++)
               mask = mask * 2 + 1;
     else
          return;

     pattern &= mask;
     *source &= ~(mask << start);

     pattern <<= start;
     *source |= pattern;

     return;
}

int main (void)
{
     unsigned int num = 0xe1f4;
     unsigned int pattern = 0x55u;

     print_bin(num);
     print_bin(pattern);

     bitpat_set(&num, pattern, 5, 7);

     printf("%i\n", num);

     return 0;
}
