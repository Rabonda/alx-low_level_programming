#include <stdio.h>

/**
 * main - the program prints a[2] = 98, followed by a new line.
 * @a: array variable
 * @p: pointer variable
 * @n: The number of array.
 * Return: 0 (code success)
 */
int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;

  *(p + 5) = 98;
  printf("a[2] = %d\n", a[2]);
  printf("\n")
  return (0);
}
