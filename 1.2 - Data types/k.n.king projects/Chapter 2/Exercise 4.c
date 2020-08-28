/* 4. Write a program that asks the user to enter a dollars-and-cents amount,
 * then displays the amount with 5% tax added:
 */
#include <stdio.h>

int main (void)
{
     float amnt;
     printf("Enter an amount: ");
     scanf ("%f", &amnt);
     printf("With tax added: $%.2f\n", (amnt + amnt * 0.05f));

     return 0;
}