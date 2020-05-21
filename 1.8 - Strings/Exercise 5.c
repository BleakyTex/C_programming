/*
5. Write a function called findString() to determine if one character
string exists inside another string. The first argument to the function
should be the character string that is to be searched and the second
argument is the string you are interested in finding. If the function
finds the specified string, have it return the location in the source
string where the string was found. If the function does not find the
string, have it return -1.
*/

#include <stdio.h>
#include <stdbool.h>

// Function to determine if one string exists in another
int findString (const char  s1[], const char  s2[])
{
    int  i, j;
    bool areEqual = false;

    for (i = 0; s1[i] != '\0'; i++){
        if (s1[i] == s2[0]){
            areEqual = true;

            for (j = 1; s2[j] != '\0'; j++)
                if (s1[i + j] != s2[j]){
                    areEqual = false;
                    break;
                }
        }

        if (areEqual)
            return i;
    }

    return -1;
}


int main (void)
{
     int findString (const char  s1[], const char  s2[]);
     const char  stra[] = "com: string compare test";
     const char  strb[] = "comp";

     printf ("%i\n", findString (stra, strb));

     return 0;
}
