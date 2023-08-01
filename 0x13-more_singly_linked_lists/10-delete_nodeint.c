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
	unsigned int count;
	listint_t *node, *pre;

	if (!*head)
	{
		return (-1);
	}

	pre = NULL;
	node = *head;

	if (index == NULL)
	{
		(*head) = (*head)->next;
		free(node);
		return (1);
	}
	for (count = 0; node; count++)
	{
		if (count == index)
		{
			pre->next = node->next;
			free(node);
			return (1);
		}
		pre = node;
		node = node->next;
	}

	return (-1);
}

