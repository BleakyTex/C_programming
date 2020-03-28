//  Fancy number to text conversion

#include <stdio.h>

int main (void)
{
    int num, buffer, subtractor, multiplier;

    while(1) {
    printf ("Enter your number: ");
    scanf ("%i", &num);

    if (num < 0) {
        printf ("minus ");
        num = -num;
    }

    buffer = num;

    do {
        multiplier = 1;
        buffer = num;
                               // count number of digits
        while (buffer > 9) {   // for each iteration
            buffer /= 10;
            multiplier *= 10;
        }

        subtractor = buffer * multiplier;
        num  -= subtractor;

        if (subtractor >= 100 || subtractor < 10)
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

        else
            switch (subtractor) {
                case 20:
                    printf("twenty ");
                    break;
                case 30:
                    printf("thirty ");
                    break;
                case 40:
                    printf("forty ");
                    break;
                case 50:
                    printf("fifty ");
                    break;
                case 60:
                    printf("sixty ");
                    break;
                case 70:
                    printf("seventy ");
                    break;
                case 80:
                    printf("eighty ");
                    break;
                case 90:
                    printf("ninety ");
                    break;
                case 10:
                    switch (num) {

                        case 0:
                            printf("ten ");
                            break;
                        case 1:
                            printf("eleven ");
                            num = 0;
                            break;
                        case 2:
                            printf("twelve ");
                            num = 0;
                            break;
                        case 3:
                            printf("thirteen ");
                            num = 0;
                            break;
                        case 4:
                            printf("fourteen ");
                            num = 0;
                            break;
                        case 5:
                            printf("fifteen ");
                            num = 0;
                            break;
                        case 6:
                            printf("sixteen ");
                            num = 0;
                            break;
                        case 7:
                            printf("seventeen ");
                            num = 0;
                            break;
                        case 8:
                            printf("eighteen ");
                            num = 0;
                            break;
                        case 9:
                            printf("nineteen ");
                            num = 0;
                            break;
                    }
        }

        switch (multiplier) {
            case 1000:
                if (buffer != 1)
                    printf("thousands ");
                else
                    printf("thousand ");
                break;
            case 100:
                if (buffer != 1)
                    printf("hundreds ");
                else
                    printf("hundred ");
                break;
        }

    }
    while(num != 0);

    printf("\n\nPress any key to start again...");
    getch();        // wait for any key press
    system("cls");  // clear the console
	//two latter functions work only in Windows
    }

    return 0;
}
