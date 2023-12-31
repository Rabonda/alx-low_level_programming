#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _isdigit - Function that checks if character is digit
 * @c: the character to be checked
 *
 * Return: if character is digit (1 - digit or 0 - not digit)
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - function that returns the length of a string
 * @s: the length of the string to be checked
 *
 * Return: returns the length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s++; i++)
		continue;

	return (i);
}

/**
 * big_multiply - Function that multiply two string number.
 * @s1: the first string number.
 * @s2: the second string number.
 *
 * Return: returns the multiply two string number.
 */
char *big_multiply(char *s1, char *s2)
{
	char *letter;
	int letter_1, letter_2, w, y, z, x;

	letter_1 = _strlen(s1);
	letter_2 = _strlen(s2);
	letter = malloc(w = x = letter_1 + letter_2);
	if (!letter)
		printf("Error\n"), exit(98);
	while (w--)
		letter[w] = 0;

	for (letter_1--; letter_1 >= 0; letter_1--)
	{
		if (!_isdigit(s1[letter_1]))
		{
			free(letter);
			printf("Error\n"), exit(98);
		}
		w = s1[letter_1] - '0';
		z = 0;

		for (letter_2 = _strlen(s2) - 1; letter_2 >= 0; letter_2--)
		{
			if (!_isdigit(s2[letter_2]))
			{
				free(letter);
				printf("Error\n"), exit(98);
			}
			y = s2[letter_2] - '0';

			z += letter[letter_1 + letter_2 + 1] + (w * y);
			letter[letter_1 + letter_2 + 1] = z % 10;

			z /= 10;
		}
		if (z)
			letter[letter_1 + letter_2 + 1] += z;
	}
	return (letter);
}


/**
 * main - function that multiply two strings
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: returns the multiply of two strings.
 */
int main(int argc, char **argv)
{
	char *arr;
	int w, y, x;

	if (argc != 3)
		printf("Error\n"), exit(98);

	x = _strlen(argv[1]) + _strlen(argv[2]);
	arr = big_multiply(argv[1], argv[2]);
	w = 0;
	for (y = 0; y < x; y += 1)
	{
		if (arr[y])
			w = 1;
		if (w)
			_putchar(arr[y] + '0');
	}
	if (!w)
		_putchar('0');
	_putchar('\n');
	free(arr);
	return (0);
}
