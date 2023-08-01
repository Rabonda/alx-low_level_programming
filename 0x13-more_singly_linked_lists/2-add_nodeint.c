#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint -  a function that adds a new node
  * at the beginning of a listint_t list.
  * @head: current location in the list.
  * @n: integer to add to the list.
  * Return:returns  the pointer to the
  * current position in list.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
