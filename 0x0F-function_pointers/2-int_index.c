#include "function_pointers.h"

/**
*int_index - a function that searches for an integer.
*@array: Array variable.
*@size: array length
*@cmp: function that compare values
*
*Return: returns an integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (array == NULL || cmp == NULL)
return (-1);

while (i < size)
{
if (cmp(array[i]) != 0)
return (i);
i++;
}

return (-1);

}
