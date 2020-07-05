/*
4. Using the result obtained in exercise 3, modify the rotate()
function so that it no longer makes any assumptions about the
size of an int.
*/
#include <stdio.h>

int main (void)
{
    unsigned int  w1 = 0xabcdef00u, w2 = 0xffff1122u;
    unsigned int  rotate (unsigned int  value, int  n);

    printf ("%x\n", rotate (w1, 8));
    printf ("%x\n", rotate (w1, -16));
    printf ("%x\n", rotate (w1, 0));

    return 0;
}

// Determine the size of an int
int int_size(void)
{
     int count = 0, i = ~0;
     while (i) {
          i <<= 1;
          count++;
     }
     return count;
}

// Function to rotate an unsigned int left or right
unsigned int  rotate (unsigned int  value, int  n)
{
     int int_size(void);

     unsigned int  length, result, bits;

     length = int_size();

    // scale down the shift count to a defined range

     if  ( n > 0 )
          n = n % length;
     else
          n = -(-n % length);

     if  ( n == 0 )
          result = value;
     else if ( n > 0 ) {    // left rotate
          bits = value >> (length - n);
          result = value << n  |  bits;
     }
     else  {               // right rotate
          n = -n;
          bits = value << (length - n);
          result = value >> n  |  bits;
     }

     return result;
}
