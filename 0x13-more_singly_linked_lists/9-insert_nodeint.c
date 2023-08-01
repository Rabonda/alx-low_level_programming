#include "lists.h"
#include <stdlib.h>
/**
  * insert_nodeint_at_index - insert a node at indexa function
  * that inserts a new node at a given position.
  * @head: head of the list.
  * @index: insert node.
  * @n: value of the inserted node.
  * Return: inserts a new node at a given position.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *current_location, *new;

	current_location = *head;
	new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	if (index == 0)
	{
		new->next = current_location;
		*head = new;
		return (*head);
	}

	while (index > 1)
	{
		current_location = current_location->next;
		index--;
		if (!current_location)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = current_location->next;
	current_location->next = new;
	return (new);
}
