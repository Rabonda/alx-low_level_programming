#include "lists.h"

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
	unsigned int count = 0;
	listint_t *current_location = NULL, temporary = *head;

	if (!*head)
	{
		return (-1);
	}

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(node);
		return (1);
	}

	while (count < index - 1)
	{
		if (!temporary || temporary->next)
		{
			return (-1);
		}
		temporary = temporary->next;
		count++;
	}

	current_location = temporary->next;
	temporary->next = current_location->next;
	free(current_location);

	return (1);
}
