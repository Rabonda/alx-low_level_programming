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
	unsigned int i;
	listint_t *current, *subsequent;

	if (!head || !*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	subsequent = current->next;
	current->next = subsequent->next;
	free(subsequent);
	return (1);

}

