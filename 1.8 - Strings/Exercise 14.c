/*
14. Write a function called intToStr() that converts an integer value into a character string.
*/

#include <stdio.h>
#include <stdbool.h>

// Function to convert a string to an integer
void  intToStr (int  number, char result[])
{
    int i = 0;
    int length = 0;
    int temp[11] = { 0 }; // because int can't hold more that 10 numbers
    bool isNegative = false;

    if (number < 0) {
        isNegative = true;
        i++;

        number = -number;
    }
    
    // get the number into buffer array and count number of digits i
    do {
        temp [i] = number % 10;
        number /= 10;
        i++;
    }
    while (number != 0);

    result [i] = '\0'; // write null character at the end of the string
    i--;               // move pointer before the null character
    length = i;
    if (isNegative) {    
        length++;      // compensate the offset created by minus character
        result[0] = '-'; // and add the minus character to the beginning
    }
    
// since number in array is written backwards, we have to go from end to start
    for ( ; i >= 0; i--) {
        if (isNegative && i == 0)
            return;
        
        result[length - i] = temp[i] + '0';
    }

    return;
}

int main (void)
{
    void  uppercase (char  string[]);

    char stra[12];
    static int num = -2147483646;
    intToStr(num, stra);

    printf ("%s\n", stra);

    return 0;
}
