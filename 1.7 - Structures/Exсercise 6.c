/*
6. Replace the dateUpdate() function with the modified one that uses compound literals
as presented in the text. Run the program to verify its proper operation.
*/

#include <stdio.h>
#include <stdbool.h>

struct  date
{
    int  day;
    int  month;
    int  year;
};

struct time
{
    int sec;
    int min;
    int hrs;
};

struct dateAndTime
{
    struct date sdate;
    struct time stime;
};


// Function to get number of days in a month
int  numberOfDays  (struct date  d)
{
     int  days;
     bool isLeapYear (struct date  d);
     const int  daysPerMonth[12] =
       { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

     if ( isLeapYear (d)  &&  d.month == 2 )
         days = 29;
     else
         days = daysPerMonth[d.month - 1];

     return days;
}

// Function to determine if it's a leap year
bool  isLeapYear (struct date  d)
{
    bool  leapYearFlag;

    if ( (d.year % 4 == 0  &&  d.year % 100 != 0)  ||
                  d.year % 400 == 0 )
        leapYearFlag = true;   // It's a leap year
    else
        leapYearFlag = false;  // Not a leap year

    return leapYearFlag;
}


// Function to update date
struct date  dateUpdate (struct date  today)
{
    struct date  tomorrow;
    int  numberOfDays (struct date  d);

    if ( today.day != numberOfDays (today) )
        tomorrow = (struct date) {today.day + 1, today.month, today.year};

    else if ( today.month == 12 )     // end of year
        tomorrow = (struct date) {1, 1, today.year + 1};

    else                              // end of month
        tomorrow = (struct date) {1, today.month + 1, today.year};

    return tomorrow;
}


// Function to update time
struct time  timeUpdate (struct time  now)
{
    ++now.sec;

    if ( now.sec == 60 )  {     // next minute
        now.sec = 0;
        ++now.min;

        if ( now.min == 60 ) {  // next hour
            now.min = 0;
            ++now.hrs;

            if ( now.hrs == 24 ) // midnight
               now.hrs = 0;
        }
    }

    return now;
}


// Function to update date and time
struct dateAndTime clockKeeper (struct dateAndTime  now)
{
    now.sdate = dateUpdate(now.sdate);
    now.stime = timeUpdate(now.stime);

    return now;
}

int main (void)
{
    struct dateAndTime tim;

    printf("Enter date and time (dd.mm.yyyy hh:mm:ss)\n");
    scanf("%i.%i.%i %i:%i:%i", &tim.sdate.day, &tim.sdate.month, &tim.sdate.year,
                                &tim.stime.hrs, &tim.stime.min, &tim.stime.sec);

    tim = clockKeeper(tim);

    printf("\n%02i.%02i.%i %02i:%02i:%02i", tim.sdate.day, tim.sdate.month, tim.sdate.year,
                                tim.stime.hrs, tim.stime.min, tim.stime.sec);

    return 0;
}
