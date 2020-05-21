/*
8. Using the findString(), removeString(), and insertString() functions
from preceding exercises, write a function called replaceString() that
that replaces s1 inside source with the character string s2.
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

// Function to remove a portion of a character string
void removeString (char source[], int start, int count)
{
    int i;

    if (count <= 0)
        printf("Error: Less than 1 characters to delete.\n");
    else {
        for (i = start; source[i] != '\0'; i++)
            source[i] = source[i + count];

        if (i < (count + start)) {
            printf("Warning: End of string reached, %i of %i \
characters were deleted.\n", (i - start), count);
            source[start] = '\0';
        }
    }

    return;
}

// Function to insert a string into another string
void insertString (char s1[], const char s2[], int start)
{
    int i;
    int length1, length2;
    const int maxLength = 24; // max string length
    int end;

    // Determine the length of both strings
    for (i = 0; s1[i] != '\0'; i++) {}
    length1 = i;
    for (i = 0; s2[i] != '\0'; i++) {}
    length2 = i;

    // Error handling routines
    end = length1 + length2;

    if (start > length1) {
        printf("Error: Starting position is further than initial \
string end.\n");
        return;
    }

    if ( (end - 1) > maxLength ) {
        printf("Warning: End of string was reached. Some text \
might be lost.\n");
        s1[maxLength + 1] = '\0';
    }

    // Copying routines
    for (i = end; i >= start; i--){
        if (i > maxLength)  // If out of string bounds... 
            continue; // ...do nothing
        else
            s1[i] = s1[i - length2];
    }

    for (i = 0; i < length2; i++) { // Don't copy the null character
        if ((i + start) > maxLength) {
            return;                 // Exit on string overflow
        }
        else
            s1[i + start] = s2[i];
    }

    return;
}

// Function to find and replace the string
void replaceString (char source[], const char s1[], const char s2[])
{
    void insertString (char s1[], const char s2[], int start);
    int findString (const char  s1[], const char  s2[]);
    void removeString (char source[], int start, int count);

    int i;
    int position, length;

    for (i = 0; s1[i] != '\0'; i++) {}
    length = i;

    position = findString (source, s1);

    if (position < 0) {
        printf("Error: Searched string not found.\n");
        return;
    }

    removeString(source, position, length);
    insertString(source, s2, position);

    return;
}

int main (void)
{
    void replaceString (char source[], const char s1[], const char s2[]);
    char  stra[25] = "com: compare string test";
    const char  strb[] = "compare";
    const char  strc[] = "12345";

    replaceString (stra, strb, strc);
    printf ("%s\n", stra);

    return 0;
}
