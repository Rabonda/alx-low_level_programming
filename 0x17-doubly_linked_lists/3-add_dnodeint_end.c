#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - Function that add node at end of double linked list
 * @head: pointer to head
 * @n: integer
 * Return: Return number address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_ptr, *t;

	new_ptr = malloc(sizeof(dlistint_t));
	if (new_ptr == NULL)
		return (NULL);
	new_ptr->n = n;
	new_ptr->next = NULL;
	t = *head;
	if (*head == NULL)
	{
		new_ptr->prev = NULL;
		*head = new_ptr;
		return (new_ptr);
	}
	while (t->next)
		t = t->next;
	new_ptr->prev = t;
	t->next = new_ptr;

	return (new_ptr);
}
