#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - function that sum of all data integer of nodes of double linked list
 * @head: pointer to head
 * Return: return sum of all data integers or 0 if empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);
	for (; head != NULL;)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
