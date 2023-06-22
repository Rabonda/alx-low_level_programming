#include <stdio.h>
/**
*main - prints out first 98
*
*Return: return 0 (code success)
*/
int main(void)
{
const unsigned long BILLION = 10000000000;
int count;
unsigned long num_1 = 0, num_2 = 1, num_3;
unsigned long num_1_h1, num_1_h2, num_2_h1, num_2_h2;
unsigned long h_1, h_2;

for (count = 0; count < 92; count++)
{
num_3 = num_1 + num_2;
num_1 = num_2;
num_2 = num_3;
printf("%lu, ", num_3);
}
num_1_h1 = num_1 / BILLION;
num_2_h1 = num_2 / BILLION;
num_1_h2 = num_1 % BILLION;
num_2_h2 = num_2 % BILLION;
for (count = 93; count < 99; count++)
{
h_1 = num_1_h1 + num_2_h1;
h_2 = num_1_h2 + num_2_h2;
if ((num_1_h2 + num_2_h2) > (BILLION - 1))
{
h_1 += 1;
h_2 = h_2 % BILLION;
}
printf("%lu%lu", h_1, h_2);
if (count != 98)
printf(", ");

num_1_h1 = num_2_h1;
num_1_h2 = num_2_h2;
num_2_h1 = h_1;
num_2_h2 = h_2;
}
printf("\n");
return (0);
}
