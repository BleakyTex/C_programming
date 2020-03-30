// Rating counter with "infinite" number of responses

#include <stdio.h>

int main (void)
{
    int  ratingCounters[11], i, response;

    for ( i = 0;  i <= 10;  ++i )
        ratingCounters[i] = 0;

    while(1) {
        response = 0;  /* for some reason the program accepts
                          characters '+', '-', '*', '/'
                          and response retains its previous value
                       */

        fflush(stdin); /* clear the keyboard buffer, so
                          scanf() works properly if a
                          character is entered instead of number
                       */

        system("cls"); // clear the console
        printf ("Enter your response: ");
        scanf ("%i", &response);

        if (response == 999)  // if 999 is entered
            break;            // exit the loop and display results
        else if (response >= 1 && response <= 10 )
            ++ratingCounters[response];
        else {
            printf ("Bad response! Press any key to try again...");
            getch();          // wait for any key press
        }
    }

    printf ("\n\nRating Number of Responses\n");
    printf ("------ -------------------\n");

    for ( i = 1;  i <= 10;  ++i )
        printf ("%4i%14i\n", i, ratingCounters[i]);

    return 0;
}
