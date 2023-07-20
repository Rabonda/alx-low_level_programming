#include "function_pointers.h"

/**
*print_name - a function that prints a name.
*@name: variable to be printed.
*@f: function which print name
*/

void print_name(char *name, void (*f)(char *))
{
if (name != NULL)
f(name);
else if (f != NULL)
f(name);
return;
}
