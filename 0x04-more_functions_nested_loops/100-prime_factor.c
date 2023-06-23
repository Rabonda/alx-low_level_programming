#include <stdio.h>

/**
*main- prints the largest prime factor
*of a number
*
*Return: returns 0
*/

int main(void)
{
long primeNumber = 612852475143;
int increment, halfPrimeNumber;

halfPrimeNumber =  primeNumber / 2
while (increment < halfPrimeNumber)
{
if (primeNumber % increment == 0)
{
primeNumber /= 2;
continue;
}

for (increment = 3; increment < halfPrimeNumber; increment += 2)
{
if (primeNumber % increment == 0)
primeNumber /= increment;
}
increment++;
}
printf("%ld\n", primeNumber);
return (0);
}
