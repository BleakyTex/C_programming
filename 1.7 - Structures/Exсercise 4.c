/*
4. Develop a program that displays the day of the week
   on which a particular date falls.
*/

#include <stdio.h>

struct  date
{
    int  day;
    int  month;
    int  year;
};

int main (void)
{
    static char days [7][3] = {{'M','o','n'},
                               {'T','u','e'},
                               {'W','e','d'},
                               {'T','h','u'},
                               {'F','r','i'},
                               {'S','a','t'},
                               {'S','u','n'}};

    long int currentDay (struct date  dateIn);

    struct date  date1;
    int i;

    printf("Enter date (dd.mm.yyyy): ");
    scanf ("%i.%i.%i", &date1.day, &date1.month, &date1.year);

    i = currentDay(date1) - 1; // because array index starts from 0
    printf("\n%c%c%c\n", days[i][0], days[i][1], days[i][2]);

    return 0;
}

// Function to calculate the day of the week

long int currentDay (struct date  dateIn)
{
    int f, g;
    long int n, result;

    if (dateIn.month <= 2)
        f = dateIn.year - 1;
    else
        f = dateIn.year;

    if (dateIn.month <= 2)
        g = dateIn.month + 13;
    else
        g = dateIn.month + 1;

    n = (1461 * f / 4) + (153 * g / 5) + dateIn.day;
    result = (n - 621049) % 7;

    return result;
}
