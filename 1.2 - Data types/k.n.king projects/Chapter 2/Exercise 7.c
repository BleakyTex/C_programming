/* 7. Write a program that asks the user to enter a U.S. dollar amount and then shows
 * how to pay that amount using the smallest number of $20, $10, $5, and $1 bills.
 */
#include <stdio.h>

int main (void)
{
     int amnt, num20, num10, num5;

     printf("Enter a dollar amount: ");
     scanf ("%i", &amnt);
     num20 = amnt / 20;
     amnt -= num20 * 20;
     num10 = amnt / 10;
     amnt -= num10 * 10;
     num5 = amnt / 5;
     amnt -= num5 * 5;

     printf("$20 bills: %i\n", num20);
     printf("$10 bills: %i\n", num10);
     printf(" $5 bills: %i\n", num5);
     printf(" $1 bills: %i\n", amnt);

     return 0;
}
