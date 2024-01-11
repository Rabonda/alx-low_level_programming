#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - return function that returns
 * the number of nodes
 * @h: pointer to head
 * Return: returns number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t indx = 0;

	for(;h;indx++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (indx);
}
