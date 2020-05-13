/*
3. Write a function elapsed_time that takes as
its arguments two time structures and returns a
time structure that represents the elapsed time
(in hours, minutes, and seconds) between the two times.
*/

#include <stdio.h>

struct  time
{
    int  secs;
    int  mins;
    int  hrs;
};

int main (void)
{
    struct time elTime (struct time  time1, struct time  time2);

    struct time time1, time2, result;

    printf("Warning: if second time is less than first, it is assumed to be the next day.\n");
    printf("\nEnter first time (hh:mm:ss):  ");
    scanf ("%i:%i:%i", &time1.hrs, &time1.mins, &time1.secs);
    printf("Enter second time (hh:mm:ss): ");
    scanf ("%i:%i:%i", &time2.hrs, &time2.mins, &time2.secs);

    result = elTime(time1, time2);
    printf("\nElapsed time: %02i:%02i:%02i \n", result.hrs, result.mins, result.secs);

    return 0;
}

// Function to calculate the elapsed time

struct time elTime (struct time  time1, struct time  time2)
{
    struct time result;
    int totalSeconds1, totalSeconds2, n;
    static int secsInDay = 86400;

    totalSeconds1 = (time1.hrs * 3600) + (time1.mins * 60) + time1.secs;
    totalSeconds2 = (time2.hrs * 3600) + (time2.mins * 60) + time2.secs;

    if ( (totalSeconds2 - totalSeconds1) < 0 )
        n = secsInDay - totalSeconds2 + totalSeconds1;
    else if (totalSeconds1 == 0)
        n = totalSeconds2;
    else
        n = totalSeconds2 - totalSeconds1;

    result.hrs = n / 3600;
    n -= 3600 * (n / 3600); // exploit the remainder cutoff on integer division
    result.mins = n / 60;
    n -= 60 * (n / 60);
    result.secs = n;

    return result;
}
