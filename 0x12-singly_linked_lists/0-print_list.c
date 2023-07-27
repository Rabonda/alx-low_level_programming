#include "lists.h"
/**
 * list_len - function that prints
 * all the elements of a list_t list.
 * @h - linked list.
 * Return:Returns the number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
