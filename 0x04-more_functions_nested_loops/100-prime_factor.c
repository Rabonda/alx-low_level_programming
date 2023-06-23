#include <stdio.h>

/**
* main- finds and prints the largest prime factor
* of the number 612852475143
*
*Return: returns largest prime factor
*/

int main(void)
{
long primeNumber = 612852475143;
int increment;
while (increment < primeNumber / 2)
{
if (primeNumber % increment == 0)
{
primeNumber = primeNumber / 2;
continue;
}

for (increment = 3; increment < primeNumber / 2; increment += 2)
{
if (primeNumber % increment == 0)
primeNumber = primeNumber / increment;
}
increment = increment + 1;
}
printf("%ld\n", primeNumber);
return (0);
}
