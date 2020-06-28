/*
2. Write a function called insertEntry() to insert a new entry into a linked list.
Have the procedure take as arguments a pointer to the list entry to be inserted
(of type struct entry as defined in this chapter), and a pointer to an element
in the list after which the new entry is to be inserted.
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

     struct entry n1, n2, n3, n4;
     struct entry *list_pointer = &n1;

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

     insertEntry(&n4, &n1);
     list_pointer = &n1;

     printf("\nAfter:\n");
     while ( list_pointer != (struct entry *) 0 ) {
          printf ("%i\n", list_pointer->value);
          list_pointer = list_pointer->next;
     }
}
