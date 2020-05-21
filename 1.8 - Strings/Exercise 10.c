/*
10. Write a function called dictionarySort() that sorts a dictionary into alphabetical order.
*/

#include <stdio.h>
#include <stdbool.h>

struct  entry
{
    char   word[15];
    char   definition[50];
};

// Function to sort the dictionary
void  sort (struct entry  a[], int  entries, int direction)
{
    int  i, j, k;
    struct entry temp;
    int val1, val2;

    for ( i = 0;  i < entries - 1;  i++ ) {
        val1 = 0;
        for (k = 0; a[i].word[k] != '\0'; k++)
            val1 += a[i].word[k];

        for ( j = i + 1;  j < entries;  j++ ) {
            val2 = 0;
            for (k = 0; a[j].word[k] != '\0'; k++)
                val1 += a[j].word[k];

            if ((direction == 1 && (val1 > val2)) ||
                (direction == -1 && (val1 < val2))) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main (void)
{
    struct entry  dictionary[100] =
      { { "Aardvark", "a burrowing African mammal"        },
        { "Abyss",    "a bottomless pit"                  },
        { "Acumen",   "mentally sharp; keen"              },
        { "Addle",    "to become confused"                },
        { "Aerie",    "a high nest"                       },
        { "Affix",    "to append; attach"                 },
        { "Agar",     "a jelly made from seaweed"         },
        { "Ahoy",     "a nautical call of greeting"       },
        { "Aigrette", "an ornamental cluster of feathers" },
        { "Ajar",     "partially opened"                  } };

    char  word[10];
    int   entries = 10;
    int   i;
    void  sort (struct entry  a[], int  entries, int direction);

    sort(dictionary, entries, 1);

    for (i = 0; i < entries; i++)
        printf("%-11s|  %s\n", dictionary[i].word, dictionary[i].definition );

    return 0;
}
