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
	int byte_hex, byte_index;

	for (byte_hex = 0; byte_hex < size; byte_hex += 10)
	{
		printf("%08x: ", byte_hex);

		for (byte_index = 0; byte_index <= 9; byte_index++)
		{
			if ((byte_index + byte_hex) >= size)
				printf("  ");

			else
				printf("%02x", *(b + byte_index + byte_hex));

			if ((byte_index % 2) != 0 && byte_index != 0)
				printf(" ");
		}

		for (byte_index = 0; byte_index <= 9; byte_index++)
		{
			if ((byte_index + byte_hex) >= size)
				break;

			else if (*(b + byte_index + byte_hex) >= 31 &&
				 *(b + byte_index + byte_hex) <= 126)
				printf("%c", *(b + byte_index + byte_hex));

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
