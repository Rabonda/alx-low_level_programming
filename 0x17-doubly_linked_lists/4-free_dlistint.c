#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - void function that free nodes of double linked list
 * @head: pointer to head
 * Return: void function
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t, *a;

	t = head;
	for (; t;)
	{
		a = t->next;
		free(t);
		t = a;
	}
}
