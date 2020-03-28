// Reverse number of any sign

#include <stdio.h>

int main (void)
{
    int num;

    printf ("Enter your number: ");
    scanf ("%i", &num);

    if (num < 0) {
        num = -num;
        printf("-");
    }

    do {
        printf("%i", num % 10);
        num /= 10;
    }
    while (num != 0);

    return 0;
}
