/*
11. Write a function called arraySum() that takes two arguments: an integer array and the number of elements in the array. Have the function return as its result the sum of the elements in the array.
*/

#include <stdio.h>

// function to find the sum of all elements in array

int arraySum (int array[], int elemNum)
{
    int i, sum = 0;

    for (i = 0; i < elemNum; i++)
        sum += array[i];

    return sum;
}

int main (void)
{
    int array[10];
    int i;

    for (i = 0; i < 10; i++)
        array[i] = 2*i;

    printf ("Sum of elements = %i\n", arraySum(array, 10));

    return 0;
}
