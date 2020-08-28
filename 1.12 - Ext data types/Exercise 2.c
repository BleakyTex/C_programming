// 2. Write a function called monthName() that takes as its argument a value 
// of type enum month and returns a pointer to a character string containing 
// the name of the month.

#include <stdio.h>

enum  month  { January = 1, February, March, April, May, June,
               July, August, September, October, November, December };


char *monthName(enum month aMonth)
{
     char *months[] = {
          "January",
          "February",
          "March",
          "April",
          "May",
          "June",
          "July",
          "August",
          "September",
          "October",
          "November",
          "December",
          "Wrong month number"
     };

     if (aMonth < 1 && aMonth > 12)
          return(months[12]);
     else return(months[aMonth - 1]);
}

int main (void)
{
     enum  month  aMonth;

     printf ("Enter month number: ");
     scanf ("%u", &aMonth);
     printf(monthName(aMonth));
     
     return 0;
}
