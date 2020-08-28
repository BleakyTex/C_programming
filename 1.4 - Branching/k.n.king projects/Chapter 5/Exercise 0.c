/* 0. Write a single expression whose value is either -1, 0, or +1, depending
 *    on whether i is less than, equal to or greater than j , respectively.
 */
#include <stdio.h>

int main (void)
{
     int i = 3, j = 3, result = 0;
     result = result - (i < j) + (i > j);
     printf("%d", result);
     return 0;
}
