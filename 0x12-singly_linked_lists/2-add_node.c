#include "lists.h"
#include <string.h>

/**
* add_node - A function thatthat adds a new node at
* the beginning of a list_t list.
* @head: points to the head struct.
* @str: pointer to string.
*
* Return: pointer to new head of list.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *temporary_location;
int str_len;

temporary_location = malloc(sizeof(list_t));
if (!temporary_location)
return (NULL);

for (str_len = 0; str[str_len]; str_len++)
continue;

temporary_location->len = str_len;
temporary_location->str = strdup(str);
temporary_location->next = *head;
*head = temporary_location;
return (temporary_location);
}
