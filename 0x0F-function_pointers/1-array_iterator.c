#include "function_pointers.h"

/**
*array_iterator - a function that executes a function given
*as a parameter on each element of an array.
*@array: targeted array.
*@size: size of array.
*@action: function to be called.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL)
return;
else if (action == NULL)
return;

while (size-- >= 1)
{
action(*array);
array++;
}
}
