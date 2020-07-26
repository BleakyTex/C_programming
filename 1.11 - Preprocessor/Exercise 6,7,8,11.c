/*
6. Write a macro IS_UPPER_CASE that gives a nonzero value if a character is an uppercase letter.
7. Write a macro IS_ALPHABETIC that gives a nonzero value if a character is an alphabetic character.
Have the macro use the IS_LOWER_CASE and the IS_UPPER_CASE macro.
8. Write a macro IS_DIGIT that gives a nonzero value if a character is a digit '0' through '9'.
Use this macro in the definition of another macro IS_SPECIAL, which gives a nonzero result if a
character is a special character; that is, not alphabetic and not a digit. Be certain to use the
IS_ALPHABETIC macro.
11. Test the system library functions that are equivalent to the macros you developed in the
preceding three exercises. The library functions are called isupper, isalpha, and isdigit.
*/
#include <stdio.h>
#include <ctype.h>

#define  IS_UPPER_CASE(x)  ( (((x) >= 'A') && ((x) <= 'Z')) ? 1 : 0 )
#define  IS_LOWER_CASE(x)  ( (((x) >= 'a') && ((x) <= 'z')) ? 1 : 0 )
#define  IS_ALPHABETIC(x)  ( (IS_UPPER_CASE(x) || IS_LOWER_CASE(x)) ? 1 : 0 )
#define  IS_DIGIT(x)       ( (((x) >= '0') && ((x) <= '9')) ? 1 : 0 )
#define  IS_SPECIAL(x)     ( (IS_ALPHABETIC(x) || IS_DIGIT(x)) ? 0 : 1 )

int main (void)
{
     char a;
     scanf("%c", &a);
     printf("Upper: %i\n", IS_UPPER_CASE(a));
     printf("Lower: %i\n", IS_LOWER_CASE(a));
     printf("Alpha: %i\n", IS_ALPHABETIC(a));
     printf("Digit: %i\n", IS_DIGIT(a));
     printf("Specl: %i\n", IS_SPECIAL(a));

     printf("\nTest Upper: %i\n", isupper(a));
     printf("Test Alpha: %i\n", isalpha(a));
     printf("Test Digit: %i\n", isdigit(a));

     return 0;
}
