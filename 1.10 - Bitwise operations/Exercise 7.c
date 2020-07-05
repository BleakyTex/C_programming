/*
7. Write a function called bitpat_get() to extract a specified set of bits.
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

int bitpat_get(unsigned int source, int start, int n)
{
     unsigned int i, mask = 0;
     n = n % int_size();
     start = start % int_size();

     // convert n to number of 1-s, i.e. if n = 3, mask = 111
     if (n > 1)
          for (i = 0; i < n; i++)
               mask = mask * 2 + 1;
     else
          return(0);

     return ((source & (mask << start)) >> (start));
}

int main (void)
{
     int num = 0xe1f4;
     int i = 0;

     print_bin(num);

     i = bitpat_get(num, 3, 5);

     print_bin(i);

     return 0;
}
