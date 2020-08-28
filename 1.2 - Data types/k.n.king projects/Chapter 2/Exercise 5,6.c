/* 5. Write a program that asks the user to enter a value for x and then 
 * displays the value of thefollowing polynomial: 3x5 + 2x4 – 5x3 – x2 + 7x – 6.
 * 6. Modify the program of Project 5 so that the polynomial is evaluated using 
 * the following formula: ((((3x + 2)x – 5)x – 1)x + 7)x – 6.
 */
#include <stdio.h>

int main (void)
{
     double x;
     printf("Enter x: ");
     scanf ("%lf", &x);
     printf("Result: %g\n", (((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6));

     return 0;
}
