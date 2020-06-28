/*
3.The function developed in exercise 2 only inserts an element after an existing element
in the list, thereby preventing you from inserting a new entry at the front of the list.
How can you use this same function and yet overcome this problem?
*/

#include <stdio.h>

struct entry
{
     int          value;
     struct entry *next;
};

void insertEntry(struct entry *newElement, struct entry *prevElement)
{
     newElement->next = prevElement->next;
     prevElement->next = newElement;

     return;
}

int main (void)
{
     void insertEntry(struct entry *newElement, struct entry *prevElement);

     struct entry n0, n1, n2, n3, n4;
     struct entry *list_pointer = &n1;

     n0.next = &n1;

     n1.value = 10;
     n1.next  = &n2;

     n2.value = 20;
     n2.next  = &n3;

     n3.value = 30;
     n3.next  = 0;

     n4.value = 40;
     n4.next  = 0;

     printf("Before:\n");
     while ( list_pointer != (struct entry *) 0 ) {
          printf ("%i\n", list_pointer->value);
          list_pointer = list_pointer->next;
     }

     insertEntry(&n4, &n0);
     list_pointer = n0.next;

     printf("\nAfter:\n");
     while ( list_pointer != (struct entry *) 0 ) {
          printf ("%i\n", list_pointer->value);
          list_pointer = list_pointer->next;
     }

     return 0;
}
