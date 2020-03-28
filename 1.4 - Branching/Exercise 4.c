//  "Logging" calculator

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    bool  run = true;
    float num, acc = 0;
    char oper;

    printf ("Begin Calculations\n");

    do {
            scanf ("%f %c", &num, &oper);

            switch (oper) {

            case 'S': case 's':
                acc = num;
            break;

            case '+':
                acc += num;
            break;

            case '-':
                acc -= num;
            break;

            case '*':
                acc *= num;
            break;

            case '/':
                if (num == 0)
                    printf("Division by zero.\n");
                else
                    acc /= num;
            break;

            case 'E': case 'e':
                run = false;
            break;

            default:
                printf("Invalid expression.\n");
            break;
            }

            printf("= %g\n", acc);
        }
        while(run);

        printf("End of Calculations.\n");

        return 0;
}
