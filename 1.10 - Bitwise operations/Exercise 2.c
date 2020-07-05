/*
2. Write a program that determines whether your particular
computer performs an arithmetic or a logical right shift.
*/
#include <stdio.h>
#include <limits.h>

void print_bin(int n)
{
     char buffer [33];
     itoa (n,buffer,2);
     printf ("%s\n",buffer);

     printf("\n");
}

int main (void)
{
     void print_bin(int n);

     int  length, w1 = -3; // Create a negative int

     length = CHAR_BIT * sizeof (int); // Determine int size

     if (w1 >> length)
          printf("System performs arithmetic right shift.\n");
     else
          printf("System performs logical right shift.\n");

     return 0;
}
