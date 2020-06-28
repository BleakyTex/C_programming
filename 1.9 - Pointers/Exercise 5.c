/*
5. Define the appropriate structure definition for a doubly linked list entry
and then write a small program that implements a small doubly linked list and
prints out the elements of the list.
*/

#include <stdio.h>

struct entry
{
     int          value;
     struct entry *prev;
     struct entry *next;
};

int main (void)
{
     struct entry n1, n2, n3;
     struct entry *list_pointer = &n1;

     n1.value = 10;
     n1.prev  = 0;
     n1.next  = &n2;

     n2.value = 20;
     n2.prev  = &n1;
     n2.next  = &n3;

     n3.value = 30;
     n3.prev  = &n2;
     n3.next  = 0;

     printf("Forward:\n");
     while ( list_pointer != (struct entry *) 0 ) {
          printf ("%i\n", list_pointer->value);
          list_pointer = list_pointer->next;
     }

     printf("\nBackwards:\n");
     list_pointer = &n3;
     while ( list_pointer != (struct entry *) 0 ) {
          printf ("%i\n", list_pointer->value);
          list_pointer = list_pointer->prev;
     }

     return 0;
}
