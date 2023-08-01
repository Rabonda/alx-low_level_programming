#include "lists.h"
/**
  * listint_len - a function that returns the number of elements
  * in a linked listint_t list.
  * @h: list to print.
  * Return: returns number of nodes in the list.
  */
size_t listint_len(const listint_t *h)
{
	size_t index;

	if (!h)
		return (0);

	index = 0;
	while (h)
	{
		h = h->next;
		index++;
	}
	return (index);
}
