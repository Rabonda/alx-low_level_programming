#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_listint_loop_pl - function that finds a loop in a linked list.
 *
 * @head: list to search.
 *
 * Return: returns address of node where loop starts
 */
listint_t *find_listint_loop_pl(listint_t *head)
{
	listint_t *p;
	listint_t *end;

	if (!head)
		return (NULL);

	end = head->next;
	while (end != NULL)
	{
		if (end == end->next)
			return (end);
		p = head;
		while (p != end)
		{
			if (p == end->next)
				return (end->next);
			p = p->next;
		}
		end = end->next;
	}
	return (NULL);
}

/**
 * print_listint_safe - function that prints a listint_t linked list.
 *
 * @head: list to print.
 *
 * Return: returns the number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t str_len = 0;
	int l;
	listint_t *l_node;

	l_node = find_listint_loop_pl((listint_t *) head);

	str_len = 0;
	l = 1;
	while ((head != l_node || l) && head != NULL)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == l_node)
			l = 0;
		head = head->next;
		str_len++;
	}

	if (l_node)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (str_len);
}
