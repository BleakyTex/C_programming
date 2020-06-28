/*
7. Write a pointer version of the sort() function from “Working with Functions.”
Be certain that pointers are exclusively used by the function, including index
variables in the loops.
*/

#include <stdio.h>

void  sort (int  *i, int  n)
{
    int  *j, *end, temp;
    end = i + n;
    j = i;

    for ( ;  i < end - 1;  ++i )
        for ( j = i + 1;  j < end;  ++j )
            if ( (*i) > (*j) ) {
                temp = *i;
                *i = *j;
                *j = temp;
            }
}

int main (void)
{
    int  i;
    int  array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                       44, -3, -9, 12, 17, 22, 6, 11 };
    void  sort (int  *i, int  n);

    printf ("The array before the sort:\n");

    for ( i = 0;  i < 16;  ++i )
        printf ("%i ", array[i]);

    sort (array, 16);

    printf ("\n\nThe array after the sort:\n");

    for ( i = 0;  i < 16;  ++i )
        printf ("%i ", array[i]);

    printf ("\n");

    return 0;
}
