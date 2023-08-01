#include "lists.h"
/**
  * reverse_listint - a function that reverses a listint_t linked list.
  * @head: describe argument.
  * Return: reverses a listint_t linked list.
  */
listint_t *reverse_listint(listint_t **head)
{
	#include "lists.h"
/**
  * reverse_listint - a function that reverses a listint_t linked list.
  * @head: describe argument.
  * Return: reverses a listint_t linked list.
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *t, *p;

	if (!head || !*head)
		return (NULL);

	if (!*head->next)
		return (*head);

	t = *head;
	p = NULL;
	while (1)
	{
		if (p == NULL)
		{
			p = *head;
			t = t->next;
			p->next = NULL;
			*head = p;
		}
		else
		{
			p = t;
			t = t->next;
			p->next = *head;
			if (t == NULL)
			{
				t = p;
				break;
			}
			*head = p;
		}
	}
	*head = t;

	return (*head);

}
