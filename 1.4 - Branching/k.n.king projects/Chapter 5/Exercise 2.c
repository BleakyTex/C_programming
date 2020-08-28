/* 2. Write a program that asks the user for a 24-hour time,
 *    then displays the time in 12-hour form.
 */
#include <stdio.h>

int main (void)
{
     int hr24, hr12, min;

     printf("Enter a 24-hour time: ");
     scanf("%2d:%2d", &hr24, &min);

     hr12 = (hr24 == 0) ? 12 : (hr24 < 13) ? hr24 : (hr24 - 12);
     printf("12-hour time: %d:%d %s", hr12, min, (hr24 < 12) ? "AM" : "PM");

     return 0;
}
