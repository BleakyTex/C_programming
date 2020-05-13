/*
2. Write a program that permits the user to
type in two dates and then calculates the number
of elapsed days between the two dates.
*/

#include <stdio.h>
#include <stdlib.h> // for abs() function

struct  date
{
    int  day;
    int  month;
    int  year;
};

int main (void)
{
    long int n (struct date  dateIn);

    struct date  date1, date2;
    long int numberOfDays;

    printf("Enter first date (dd.mm.yyyy):  ");
    scanf ("%i.%i.%i", &date1.day, &date1.month, &date1.year);
    printf("Enter second date (dd.mm.yyyy): ");
    scanf ("%i.%i.%i", &date2.day, &date2.month, &date2.year);
    numberOfDays = abs(n(date1) - n(date2));

    printf("\nNumber of elapsed days: %li", numberOfDays);

    return 0;
}

// Function to calculate the n parameter

long int n (struct date  dateIn)
{
    int f, g;
    long int n;

    if (dateIn.month <= 2)
        f = dateIn.year - 1;
    else
        f = dateIn.year;

    if (dateIn.month <= 2)
        g = dateIn.month + 13;
    else
        g = dateIn.month + 1;

    n = (1461 * f / 4) + (153 * g / 5) + dateIn.day;

    return n;
}
