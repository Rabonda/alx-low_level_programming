#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - function that insert node at nth index of double linked list
 * @h: pointer to head
 * @idx: integer
 * @n: integer
 * Return: returns address of node inserted at the nth index or null if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_ptr, *t, *s;
	unsigned int i = 0;
	unsigned int number_nodes = 0;

	t = *h;
	while (t)
	{
		number_nodes += 1;
		t = t->next;
	}
	new_ptr = malloc(sizeof(dlistint_t));
	if (new_ptr == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == number_nodes)
		return (add_dnodeint_end(h, n));
	new_ptr->n = n;
	t = *h;
	for (; t;)
	{
		if (i == idx - 1)
		{
			s = t->next;
			t->next = new_ptr;
			new_ptr->prev = t;
			new_ptr->next = s;
			s->prev = new_ptr;
			return (new_ptr);
		}
		t = t->next;
		i++;
	}
	return (NULL);
}
