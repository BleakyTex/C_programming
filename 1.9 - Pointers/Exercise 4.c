/*
4. Write a function called removeEntry() to remove an entry from a linked list.
The sole argument to the procedure should be a pointer to the list.
Have the function remove the entry after the one pointed to by the argument.
*/

#include <stdio.h>

struct entry
{
     int          value;
     struct entry *next;
};

void removeEntry(struct entry *dElement)
{
     dElement->next = dElement->next->next;

     return;
}

int main (void)
{
     void removeEntry(struct entry *dElement);

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

     removeEntry(&n1);
     list_pointer = n0.next;

     printf("\nAfter:\n");
     while ( list_pointer != (struct entry *) 0 ) {
          printf ("%i\n", list_pointer->value);
          list_pointer = list_pointer->next;
     }

     return 0;
}
