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
int total = 0;
va_list l;
unsigned int index;

va_start(total, n);

index = 0;
while ( index < n)
{
total += va_arg(l, int);
index += 1;
}

va_end(l);

return (total);
}
