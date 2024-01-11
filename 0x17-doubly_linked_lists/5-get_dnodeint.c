#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - function that get node at nth index of double linked list
 * @head: pointer to head
 * @index: integer
 * Return: returns a node at the nth index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int indx = 0;

	for (; head;)
	{
		if (index == indx)
			return (head);
		head = head->next;
		indx = indx + 1;
	}
	return (NULL);
}
