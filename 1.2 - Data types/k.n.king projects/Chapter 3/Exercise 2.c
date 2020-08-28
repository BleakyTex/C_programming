/* 2. Write a program that formats product information entered by the user.
 */
#include <stdio.h>

int main (void)
{
     int id, month, date, year;
     float price;

     printf("Enter item number: ");
     scanf ("%d", &id);
     printf("Enter unit price: ");
     scanf ("%f", &price);
     printf("Enter purchase date (mm/dd/yyyy): ");
     scanf ("%d/%d/%d", &month, &date, &year);

     printf("\nItem\tUnit\tPurchase\n    \tPrice\tDate\n");
     printf("%-4d\t$%4.2f\t%02d/%02d/%d\n", id, price, month, date, year);

     return 0;
}
