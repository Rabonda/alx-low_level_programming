#include "lists.h"
#include <stdlib.h>
/**
  * free_listint - a function that frees a listint_t list.
  * @head: argument.
  * void: frees a listint_t list.
  */
void free_listint(listint_t *head)
{
	if (!head)
	{
		return;
	}

	free_listint(head->next);
	free(head);

}
