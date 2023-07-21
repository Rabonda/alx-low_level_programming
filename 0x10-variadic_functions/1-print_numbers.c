#include "variadic_functions.h"

/**
*print_numbers -a function that prints numbers.
*followed by a new line.
*@separator: string variable to be printed.
*@n: number of integer.
*
*VOID: prints numbers.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list list;
unsigned int index;

va_start(list, n);

for (index = 0; index < n; index++)
{
printf("%d", va_arg(list, int));

if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(list);

}
