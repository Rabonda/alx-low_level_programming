#include <stdlib.h>
#include <stdio.h>
include "lists.h"

/**
 * delete_nodeint_at_index -  a function that deletes the node at index
 * of a listint_t linked list.
 *
 * @head: pointer to a head of a list.
 * @index: position of node to delete.
 *
 * Return: returns the node at index
 * of a listint_t linked list.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *current_location, *subs;

	if (!head || !*head)
		return (-1);
	current_location = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current_location);
		return (1);
	}
	x = 0;
	while (x < (index - 1))
	{
		current_location = current_location->next;
		if (current_location)
			return (-1);
		x++;
	}
	subs = current_location->next;
	current_location->next = subs->next;
	free(subs);
	return (1);
}
