/*
3. The countWords() function from Programs 9.7 and 9.8 incorrectly
counts a word that contains an apostrophe as two separate words.
Modify this function to correctly handle this situation. Also,
extend the function to count a sequence of positive or negative
numbers, including any embedded commas and periods, as a single word.
*/

#include <stdio.h>
#include <stdbool.h>

//  Function to determine if a character is alphabetic
bool alphabetic (const char  c)
{
    if  ( (c >= 'a'  &&  c <= 'z') || (c >= 'A'  &&  c <= 'Z') ||
          (c >= '\"' &&  c <= '.') || (c >= '0'  &&  c <= '9') )
       return true;
    else
       return false;
}

// Function to count the number of words in a string
int  countWords (const char  string[])
{
    int   i, wordCount = 0;
    bool  lookingForWord = true, alphabetic (const char  c);

    for ( i = 0;  string[i] != '\0';  ++i )
        if ( alphabetic(string[i]) )
        {
            if ( lookingForWord )
            {
                ++wordCount;
                lookingForWord = false;
            }
        }
        else
            lookingForWord = true;

    return wordCount;
}

int main (void)
{
    const char  text[] = "And here we go... again. -3.2 3,4";
    int   countWords (const char  string[]);

    printf ("%s - words = %i\n", text, countWords (text));

    return 0;
}
// Initialize array elements to 0 with for loop

#include <stdio.h>

int main (void)
{
     int  values[10];
     int  i;

     for (i = 0;  i < 10;  i++) {
        values[i] = 0;
        printf ("values[%i] = %i\n", i, values[i]);
     }

     return 0;
}
