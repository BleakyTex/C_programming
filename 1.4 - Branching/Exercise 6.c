//  Number to text conversion

#include <stdio.h>

int main (void)
{
    int num, buffer, multiplier, zerocount = 0;

    printf ("Enter your number: ");
    scanf ("%i", &num);

    buffer = num;

    if (buffer != 0)		   // can't divide by zero
        while (buffer % 10 == 0) { // count trailing zeros
                buffer /= 10;
                zerocount ++;
        }

    do {
        multiplier = 1;
        buffer = num;
                               // count number of digits
        while (buffer > 9) {  // for each iteration
            buffer /= 10;
            multiplier *= 10;
        }

        num  -= buffer * multiplier;

        switch (buffer) {
        case 0:
            printf("zero ");
            break;
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
        }
    }
    while(num != 0);

    for ( ; zerocount != 0; zerocount--)
        printf("zero ");         // print trailing zeros

    printf("\n");

    return 0;
}
