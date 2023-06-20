#include <unistd.h>
/**
 * _putchar - writes the character (c) to stdout
 *
 * Return: 0 (code success)
 * Error: -1 (code unsuccessful)
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
