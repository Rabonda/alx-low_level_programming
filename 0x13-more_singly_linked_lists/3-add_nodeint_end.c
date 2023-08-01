#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - a function that adds a new node
  * at the end of a listint_t list.
  * @head: current location in the list.
  * @n: integer to add to the list.
  * Return: returns the pointer
  * to current position in list.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current_location;

	new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (*head);
	}

	current_location = *head;
	while (current_location->next)
	{
		current_location = current_location->next;
	}

	current_location->next = new;
	return (*head);
}
