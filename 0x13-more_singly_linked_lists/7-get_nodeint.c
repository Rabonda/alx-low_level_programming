#include "lists.h"
/**
  * get_nodeint_at_index - a function that returns the nth
  * node of a listint_t linked list.
  * @head: head of the list.
  * @index: which node to stop at.
  * Return: returns the nth
  * node of a listint_t linked list.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	if (!head)
		return;

	for (count = 0; count < index; count++;)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
