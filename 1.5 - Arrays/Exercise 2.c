// Initialize array elements to 0 with for loop

#include <stdio.h>

int main (void)
{
     int  values[10];
     int  i;

     for (i = 0;  i < 10;  i++) {
        values[i] = 0;
        printf ("values[%i] = %i\n", i, values[i]);
     }

     return 0;
}
