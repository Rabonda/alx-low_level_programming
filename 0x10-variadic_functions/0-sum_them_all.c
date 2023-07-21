#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* sum_them_all - a function that returns
* the sum of all its parameters.
* @n: number of parameters.
*
* Return: returns the sum of all its parameters.
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int index;
va_list list;
int total = 0;

va_start(list, n);

index = 0;
while (index < n)
{
total += va_arg(list, int);
index++;
}

va_end(list);

return (total);
}
