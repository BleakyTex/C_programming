/*
9. Rewrite the readLine() function from Chapter 9 so
that it uses a character pointer rather than an array.
*/

#include <stdio.h>

int main (void)
{
    int   i;
    char  line[81];
    void  readLine (char  *buffer);

    readLine (line);
    printf ("%s\n\n", line);

    return 0;
}

// Function to read a line of text from the terminal

void  readLine (char  *buffer)
{
    char  character;

    do
    {
        character = getchar ();
        *buffer = character;
        ++buffer;
    }
    while ( character != '\n' );

    *--buffer = '\0';
}
