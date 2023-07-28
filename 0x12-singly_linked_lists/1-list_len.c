#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* list_len - a function that returns the number of elements
* in a linked list_t list.
* @h: A linked list.
*
* Return:Returns the number of elements
*/
size_t list_len(const list_t *h)
{
    size_t index;

    for (index = 0; h != NULL; index++)
        h = h->next;

    return (index);
}
