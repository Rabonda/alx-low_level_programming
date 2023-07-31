#include "lists.h"
#include <string.h>

/**
* add_node_end - Function that adds a new node at
* the end of a list_t list.
* @head: points to the head struct.
* @str: string to add as node.
*
* Return: pointer to new element of list.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_list_node, *temporary_location;
unsigned int str_len;

new_list_node = malloc(sizeof(list_t));
if (!new_list_node)
return (NULL);

for (str_len = 0; str[str_len]; str_len++)
continue;

new_list_node->len = str_len;
new_list_node->str = strdup(str);
if (!*head)
{
new_list_node->next = *head;
*head = new_list_node;
}
else
{
new_list_node->next = NULL;
temporary_location = *head;
while (temporary_location->next)
temporary_location = temporary_location->next;
temporary_location->next = new_list_node;
}
return (new_list_node);
}
