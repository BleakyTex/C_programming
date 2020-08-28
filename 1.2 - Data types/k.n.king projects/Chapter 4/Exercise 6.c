/* 6. Write a program to compute the check digit for European Article Number (EAN).
 */
#include <stdio.h>

int main (void)
{
     int d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12;
     int sumEven, sumOdd, result;

     printf("Enter EAN: ");
     scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);

     sumEven = d2 + d4 + d6 + d8 + d10 + d12;
     sumOdd  = d1 + d3 + d5 + d7 + d9 + d11;
     result  = 9 - (sumEven * 3 + sumOdd - 1) % 10;

     printf("Check digit: %d", result);

     return 0;
}