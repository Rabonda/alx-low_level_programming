#include <stdio.h>
/**
*main - prints sum of even fibonacci
*
*Return: return 0 (code success)
*/
int main(void)
{
  unsigned long num_1 = 0, num_2 = 1, num_3 = 0, total = 0;
  
  while (num_3 <= 4000000)
  {
    num_3 = num_1 + num_2;
    num_1 = num_2;
    num_2 = num_3;

    if ((num_1 % 2) == 0)
      total += num_1;
  }
  printf("%ld\n", total);
  return (0);
}
