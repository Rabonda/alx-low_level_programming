#include "lists.h"
/**
 * list_len - function that prints
 * all the elements of a list_t list.
 * @h - linked list.
 * Return:Returns the number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t index;

	index = 0;
	while (h != NULL)
	{
	    if (h->str == NULL)
	        printf("[0] (nil)\n");
	    else
	       printf("[%u] %s\n", h->len, h->str);
	    h = h->next;
	    index += 1;
	}
	return (index);
}
