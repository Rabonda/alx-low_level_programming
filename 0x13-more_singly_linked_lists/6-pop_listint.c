#include "lists.h"
#include <stdlib.h>
/**
  * pop_listint - a function that deletes the head node of a listint_t linked
  * list, and returns the head node’s data (n).
  * @head: head of the list.
  * Return: the head node of a listint_t linked
  * list, and returns the head node’s data (n).
  */
int pop_listint(listint_t **head)
{
	int index;
	listint_t *current_location, *temporary;

	if (!head || !*head)
	{
		return (0);
	}
	else
	{
	    index = 0;
	}

	temporary = current_location = *head;
	index = current_location->n;
	*head = current_location->next;
	free(temporary);

	return (index);
}
