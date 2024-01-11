#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - print double linked list
 * @h: pointer to hed
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t indx = 0;

	for (;h;h = h->next)
	{
		printf("%d\n", h->n);
		indx++;
	}
	return (indx);
}
