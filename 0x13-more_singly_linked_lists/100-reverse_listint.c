#include "lists.h"
#include <stdlib.h>

/**
 * reverse_recur - function that reverses a listint_t linked list.
 *
 * @first: node to reverse
 * @second: node after @first variable
 *
 * Return: reverses a listint_t linked list.
 */
listint_t *reverse_recur(listint_t *first, listint_t *second)
{
	listint_t *p;
	listint_t *previous = NULL;

	p = first;
	while (p->next != second)
	{
		previous = p;
		p = p->next;
	}

	if (previous)
		previous->next = first;
	second = first->next;
	first->next = p->next;
	if (first != p && second != first)
		second = reverse_recur(second, first);
	p->next = second;
	return (p);
}

/**
 * reverse_listint - function that reverses a listint list.
 *
 * @head: list to be reversed.
 *
 * Return:  reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	if (!head|| !*head)
		return (NULL);

	*head = reverse_recur(*head, NULL);
	return (*head);
}
