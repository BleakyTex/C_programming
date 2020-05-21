/*
11. Extend the strToInt() function so that if the first character of the
string is a minus sign, the value that follows is taken as a negative number.
*/

#include <stdio.h>
#include <stdbool.h>

// Function to convert a string to an integer
int  strToInt (const char  string[])
{
    int  i, intValue, result = 0;
    bool isNegative = false;

    for  ( i = 0; (string[i] >= '0' && string[i] <= '9') || string[i] == '-'; i++ )
    {
        if (string[i] == '-') {
            isNegative = true;
            continue; // so '-' code isn't treated as number
        }

        intValue = string[i] - '0';
        result = result * 10 + intValue;
    }

    if (isNegative)
        result = -result;

    return result;
}

int main (void)
{
    int  strToInt (const char  string[]);

    printf ("%i\n", strToInt("-245"));
    printf ("%i\n", strToInt("100") + 25);
    printf ("%i\n", strToInt("13x5"));

    return 0;
}
