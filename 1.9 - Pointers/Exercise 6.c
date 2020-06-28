/*
6. Develop insertEntry() and removeEntry() functions for a doubly linked list that are
similar in function to those developed in previous exercises for a singly linked list.
*/

#include <stdio.h>

struct entry
{
     int          value;
     struct entry *prev;
     struct entry *next;
};

void insertEntry(struct entry *newElement, struct entry *prevElement)
{
     newElement->next = prevElement->next;
     newElement->prev = prevElement;
     prevElement->next->prev = newElement;
     prevElement->next = newElement;

     return;
}

void removeEntry(struct entry *dElement)
{
     if (dElement->next == (struct entry *) 0 )
          dElement->prev->next = 0;
     else
          dElement->next->prev = dElement->prev;

     if (dElement->prev == (struct entry *) 0 )
          return;
     else
          dElement->prev->next = dElement->next;

     return;
}

int main (void)
{
     void insertEntry(struct entry *newElement, struct entry *prevElement);
     void removeEntry(struct entry *dElement);

     struct entry n0, n1, n2, n3, n4;
     struct entry *list_pointer = &n1;

     n0.next  = &n1;

     n1.value = 10;
     n1.prev  = 0;
     n1.next  = &n2;

     n2.value = 20;
     n2.prev  = &n1;
     n2.next  = &n3;

     n3.value = 30;
     n3.prev  = &n2;
     n3.next  = 0;

     n4.value = 40;

     printf("Before:\n");
     while ( list_pointer != (struct entry *) 0 ) {
          printf ("%i\n", list_pointer->value);
          list_pointer = list_pointer->next;
     }

     insertEntry(&n4, &n0);
     list_pointer = n0.next;

     printf("\nInsert:\n");
     while ( list_pointer != (struct entry *) 0 ) {
          printf ("%i\n", list_pointer->value);
          list_pointer = list_pointer->next;
     }

     removeEntry(&n3);
     list_pointer = &n4;

     printf("\nRemove:\n");
     while ( list_pointer != (struct entry *) 0 ) {
          printf ("%i\n", list_pointer->value);
          list_pointer = list_pointer->next;
     }

     return 0;
}
