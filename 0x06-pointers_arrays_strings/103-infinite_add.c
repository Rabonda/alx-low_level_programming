#include "main.h"

/**
 * add_strings - a function that adds the numbers stored in two strings.
 * @n1: first number to be added.
 * @n2: second number to be added.
 * @r: store the result.
 * @r_index: The index.
 *
 * Return: store the sum
 */
char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int number, divide_10 = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		number = (*n1 - '0') + (*n2 - '0');
		number += divide_10;
		*(r + r_index) = (number % 10) + '0';
		divide_10 = number / 10;
	}

	for (; *n1; n1--, r_index--)
	{
		number = (*n1 - '0') + divide_10;
		*(r + r_index) = (number % 10) + '0';
		divide_10 = number / 10;
	}

	for (; *n2; n2--, r_index--)
	{
		number = (*n2 - '0') + divide_10;
		*(r + r_index) = (number % 10) + '0';
		divide_10 = number / 10;
	}

	if (divide_10 && r_index >= 0)
	{
		*(r + r_index) = (divide_10 % 10) + '0';
		return (r + r_index);
	}

	else if (divide_10 && r_index < 0)
		return (0);

	return (r + r_index + 1);
}
/**
 * infinite_add - a function that adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: to store the result.
 * @size_r: the array size.
 *
 * Return: store the sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num_index, len_num_1 = 0, len_num_2 = 0;

	for (num_index = 0; *(n1 + num_index); num_index++)
		len_num_1++;

	for (num_index = 0; *(n2 + num_index); num_index++)
		len_num_2++;

	if (size_r <= len_num_1 + 1 || size_r <= len_num_2 + 1)
		return (0);

	n1 += len_num_1 - 1;
	n2 += len_num_2 - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
