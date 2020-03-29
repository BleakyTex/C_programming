// Rating counter with "infinite" number of responses

#include <stdio.h>

int main (void)
{
     int  ratingCounters[11], i, response;

     for ( i = 1;  i <= 10;  ++i )
          ratingCounters[i] = 0;

     while(1) {
        printf ("Enter your response: ");
        scanf ("%i", &response);

        if (response == 999)  // if 999 is entered
            break;            // exit the loop and display results
        else if (response < 1 || response > 10 ) {
            printf ("Bad response! Press any key to try again...");
            getch();          // wait for any key press
            system("cls");    // clear the console
        }
        else {
            ++ratingCounters[response];
            system("cls");
        }
     }

     printf ("\n\nRating Number of Responses\n");
     printf ("------ -------------------\n");

     for ( i = 1;  i <= 10;  ++i )
          printf ("%4i%14i\n", i, ratingCounters[i]);

     return 0;
}
