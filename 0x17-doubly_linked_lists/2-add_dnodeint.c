#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - function that add node at begining of double linked list
 * @head: pointer to head
 * @n: integer
 * Return: return number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_ptr, *t;

	new_ptr = malloc(sizeof(dlistint_t));
	if (new_ptr == NULL)
		return (NULL);

	new_ptr->n = n;
	new_ptr->prev = NULL;
	t = *head;
	if (*head == NULL)
		new_ptr->next = NULL;
	else
	{
		new_ptr->next = t;
		t->prev = new_ptr;
	}
	*head = new_ptr;
	return (new_ptr);
}
