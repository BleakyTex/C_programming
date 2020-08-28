/* 1. Write a program that calculates how many digits a number contains
 */
#include <stdio.h>

int main (void)
{
     int num, result = 0;
     printf("Enter a number: ");
     scanf("%3d", &num);
     result = (num >= 0 && num < 10) ? 1 : (num >= 10 && num < 100) ? 2 :
               (num >= 100 && num < 1000) ? 3 : 0;
     printf("The number %d has %d digits", num, result);
     return 0;
}
