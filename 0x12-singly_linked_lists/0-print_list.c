#include "lists.h"
#include <stdio.h>

/**
* print_list - A function that prints all the elements
* of a list_t list.
* @h: pointer of list.
* Return: Returns the number of nodes.
*/
size_t print_list(const list_t *h)
{
    size_t index;

    index = 0;
    while (h != NULL)
    {
        if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
            printf("[%d] %s\n", h->len, h->str);
        }
        h = h->next;
        index++;
    }
    return (index);
}
