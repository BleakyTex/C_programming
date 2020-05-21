/*
6. Write a function called removeString() to remove a specified 
number of characters from a character string.
*/

#include <stdio.h>
#include <stdbool.h>

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

int main (void)
{
    void removeString (char source[], int start, int count);
    char  stra[] = "com: string compare test";

    removeString (stra, 23, 22);
    printf ("%s\n", stra);

    return 0;
}
