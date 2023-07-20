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
va_list l
unsigned int row;
int total = 0;

va_start(l, n);
row = 0;
while (row < n)
{
total = total + va_arg(l, int);
row += 1;
}
va_end(l);
return (total);
}
