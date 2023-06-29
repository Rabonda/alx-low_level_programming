#include "main.h"

/**
 * reverse_array -  a function that reverses the content of an array
 * @a: The array to be reversed.
* @n: the number of elements of the array
* void: reverses the content of an array
 */
void reverse_array(int *a, int n)
{
	int a_index, nth, temp;

	nth = n - 1;
	a_index = nth;
	while (a_index >= n / 2)
	{
		temp = a[nth - a_index];
		a[nth - a_index] = a[a_index];
		a[a_index] = temp;

		a_index -= 1;
	}
}
