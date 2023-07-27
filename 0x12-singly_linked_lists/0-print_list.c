#include "lists.h"

/**
*print_list - function that prints all
*the elements of a list.
*@h: list parameter.
*
*Return: returns the number of nodes.
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
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
index += 1;
}
return (index);
}
