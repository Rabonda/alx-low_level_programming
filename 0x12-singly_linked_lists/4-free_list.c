#include <stdlib.h>
#include "lists.h"

/**
* free_list - Function that frees a list_t.
* @head: The pointer.
* Return: frees a list_t
*/
void free_list(list_t *head)
{
    list_t *temporary_location;

    temporary_location = head;
    while (temporary_location != NULL)
    {
        head = head->next;
        free(temporary_location->str);
        free(temporary_location);
    }
}
