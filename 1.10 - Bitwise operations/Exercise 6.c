/*
6. Write a function called bitpat_search() that looks for the occurrence
of a specified pattern of bits inside an unsigned int. Make certain that
the function makes no assumptions about the size of an int.
*/
#include <stdio.h>

// Function to print int32 in binary format
void print_bin(int n)
{
     char buffer [33];
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

int bitpat_search(unsigned int source, unsigned int pattern, int n)
{
     unsigned int i, length, mask = 0;
     length = int_size();
     n = n % length;

     if (n > 2)
          mask = 2 * n + 1; // convert n to number of 1-s, i.e. if n=3, mask = 111
     else
          mask = n;

     pattern &= mask;       // apply mask to keep only bits of interest in pattern

     for (i = 0; i <= (length - n); i++) {
          if ((source & (mask << i)) == (pattern << i))
               return (i);
     }

     return (-1);
}

int main (void)
{
     int num = 0xe1f4;
     int pattern = 0x5;
     int n = 3;

     print_bin(num);
     print_bin(pattern);

     printf("%i\n", bitpat_search(num, pattern, n));

     return 0;
}
