/*
13. Write a function called uppercase() that converts all
lowercase characters in a string into their uppercase equivalents.
*/

#include <stdio.h>
#include <stdbool.h>

// Function to convert a string to an integer
void  uppercase (char  string[])
{
    int i;

    for ( i = 0; string[i] != '\0'; i++ )
        if (string[i] >= 'a' && string[i] <= 'z')
            string[i] = string[i] - 'a' + 'A';

    return;
}

int main (void)
{
    void  uppercase (char  string[]);

    char stra[] = "nTaG";
    uppercase(stra);

    printf ("%s\n", stra);

    return 0;
}
