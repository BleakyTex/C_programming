/*
7. Write a function called insertString() to insert one
character string into another string.
*/

#include <stdio.h>
#include <stdbool.h>

// Function to insert a string into another string
void insertString (char s1[], const char s2[], int start)
{
    int i;
    int length1, length2;
    const int maxLength = 23; // max string length
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

int main (void)
{
    void insertString (char s1[], const char s2[], int start);
    char  stra[24] = "com: string test";
    const char  strb[] = " compare";

    insertString (stra, strb, 16);
    printf ("%s\n", stra);

    return 0;
}
