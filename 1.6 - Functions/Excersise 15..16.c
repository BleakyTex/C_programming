/*
15. Modify Program 7.15 so that the user is asked again to type in the value of the base if an invalid base is entered. The modified program should continue to ask for the value of the base until a valid response is given.
16. Modify Program 7.15 so that the user can convert any number of integers. Make provision for the program to terminate when a zero is typed in as the value of the number to be converted.
*/

// Program to convert a positive integer to another base

#include <stdio.h>

int       convertedNumber[64];
long int  numberToConvert;
int       base;
int       digit = 0;

void  getNumberAndBase (void)
{
    printf ("Number to be converted? ");
    scanf ("%li", &numberToConvert);

    printf ("Base? ");
    scanf ("%i", &base);

    if  ( base < 2  ||  base > 16 ) {
        printf ("Bad base - must be between 2 and 16\n");

        getch();
        system("cls");
        getNumberAndBase ();
    }
}

void  convertNumber (void)
{
    do {

         convertedNumber[digit] = numberToConvert % base;
         ++digit;
         numberToConvert /= base;
    }
    while  ( numberToConvert != 0 );
}

void  displayConvertedNumber (void)
{
    const char  baseDigits[16] =
           { '0', '1', '2', '3', '4', '5', '6', '7',
             '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    int   nextDigit;

    printf ("Converted number = ");

    for (--digit;  digit >= 0; --digit ) {
        nextDigit = convertedNumber[digit];
        printf ("%c", baseDigits[nextDigit]);
    }

    printf ("\n\n");
}

int main (void)
{
    void  getNumberAndBase (void), convertNumber (void),
          displayConvertedNumber (void);

    while (1) {
        getNumberAndBase ();
        if (numberToConvert == 0)
            break;

        convertNumber ();
        displayConvertedNumber ();

        getch();
        system("cls");
    }

    return 0;
}
