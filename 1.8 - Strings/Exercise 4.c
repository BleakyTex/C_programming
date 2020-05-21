/*
4. Write a function called substring() to extract a portion of a character string.
*/

#include <stdio.h>
#include <stdbool.h>

// Function to extract a portion of a character string
void subString (const char  source[], int start, int count, char  result[])
{
    int i;

    if (count <= 0)
        printf("Error: Less than 1 characters to copy.\n");
    else if (count > 80)
        printf("Error: Maximum copy length exceeded.\n");
    else {
        for (i = 0; i <= count - 1; i++) { // because array indices start from 0
            if (source[start + i] == '\0') {
                printf("Warning: End of string reached, %i of %i characters \
were copied.\n", i + 1, count);
                break;
            }
            else
                result[i] = source[start + i];
        }

        result[i] = '\0'; // terminate the string with null character
    }

    return;
}

int main (void)
{
    void subString (const char  source[], int start, int count, char  result[]);
    const char  stra[] = "com: string compare test";
    char out[81] = {'\0'};

    subString (stra, 12, 70, out);
    printf ("%s\n", out);

    return 0;
}
