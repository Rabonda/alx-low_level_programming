#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - A function that returns the length number of nodes
 * @h: pointer to head
 * Return: rturns number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t indx = 0;

	for (; h;)
	{
		h = h->next;
		indx++;
	}
	return (indx);
}
