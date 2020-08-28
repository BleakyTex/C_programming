/* 1. Write a program that accepts a date from the user in the form
 *    mm/dd/yyyy and then displays it in the form yyyymmdd.
 */
#include <stdio.h>

int main (void)
{
     int month, date, year;

     printf("Enter a date (mm/dd/yyyy): ");
     scanf ("%d/%d/%d", &month, &date, &year);
     printf("%d%02d%02d\n", year, month, date);

     return 0;
}
