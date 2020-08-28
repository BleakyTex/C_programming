/* 2,3. Write a program that computes the volume of a sphere with user defined
 * radius, using the formula v = 4/3ïr^3 Write the fraction 4/3 as 4.0f/3.0f.
 */
#include <stdio.h>

int main (void)
{
     float r;
     printf("Enter radius: ");
     scanf ("%f", &r);
     printf("Sphere volume = %.2f\n", (4.0f / 3.0f) * 3.14159f * r * r * r );

     return 0;
}
