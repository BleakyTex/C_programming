/*
5. Write a function called bit_test() that takes two arguments: an unsigned
int and a bit number n. Have the function return 1 bit number n if it is on
inside the word, and 0 if it is off. Also write a corresponding function
bit_set() that takes two arguments: an unsigned int and a bit number n.
Have the function return the result of turning bit n on inside the integer.
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

// Function to check if n-th bit is set in given uint32
unsigned int bit_test(unsigned int number, unsigned int n)
{
     n = abs(n) % 32; // so n doesn't exceed the int size

     if ((1 << n) & number)
          return (1);
     else
          return (0);
}

// Function to set the n-th bit in given uint32
unsigned int bit_set(unsigned int number, unsigned int n)
{
     number |= 1 << n;
     return number;
}

int main (void)
{
     unsigned int bit_test(unsigned int number, unsigned int n);
     unsigned int bit_set(unsigned int number, unsigned int n);

     int i = 5;
     int n = 1;

     print_bin(i);
     printf("%i\n", bit_test(i, n));

     i = bit_set(i, n);
     print_bin(i);

     return 0;
}
