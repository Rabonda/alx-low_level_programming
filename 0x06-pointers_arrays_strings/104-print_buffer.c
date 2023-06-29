#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 *                the byte position, then showing the hex content,
 *                then displaying printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */

void print_buffer(char *b, int size)
{
	int byte_hex, index;

	for (byte_hex = 0; byte_hex < size; byte_hex += 10)
	{
		printf("%08x: ", byte_hex);

		for (index = 0; index < 10; index++)
		{
			if ((index + byte_hex) >= size)
				printf("  ");

			else
				printf("%02x", *(b + index + byte_hex));

			if ((index % 2) != 0 && index != 0)
				printf(" ");
		}

		for (index = 0; index < 10; index++)
		{
			if ((index + byte_hex) >= size)
				break;

			else if (*(b + index + byte_hex) >= 31 &&
				 *(b + index + byte_hex) <= 126)
				printf("%c", *(b + index + byte_hex));

			else
				printf(".");
		}

		if (byte_hex >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
