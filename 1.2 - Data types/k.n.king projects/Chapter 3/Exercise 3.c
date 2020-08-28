/* 3. Write a program that breaks down an ISBN entered by the user.
 */
#include <stdio.h>

int main (void)
{
     int gs1, groupID, publCode, itemID, checkDigit;

     printf("Enter ISBN: ");
     scanf ("%d-%d-%d-%d-%d", &gs1, &groupID, &publCode, &itemID, &checkDigit);

     printf("\nGS1 prefix: %d\nGroup identifier: %d\n", gs1, groupID);
     printf("Publisher code: %d\nItem number: %d\n", publCode, itemID);
     printf("Check digit: %d\n", checkDigit);

     return 0;
}
