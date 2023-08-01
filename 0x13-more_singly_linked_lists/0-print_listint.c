#include <stdio.h>
#include "lists.h"
/**
  * print_listint -  a function that prints all
  * the elements of a listint_t list.
  * @h: list to print
  * Return: returns the number of nodes in the list.
  */
size_t print_listint(const listint_t *h)
{
	size_t index;

	index = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		index++;
	}
	return (index);
}
