// Calculating average of 5 float values

#include <stdio.h>

int main (void)
{
     float values[5];
     float acc = 0, average;
     int i;

     printf("Fill in the array.\n");

     for (i = 0; i < 5; i++)
        scanf("%f", &values[i]);

     for (i = 0; i < 5; i++)
        acc += values[i];

     printf ("The average value is %3g", acc / 5);

     return 0;
}
