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
int count;
while (count < primeNumber / 2)
{
if (primeNumber % count == 0)
{
primeNumber /= 2;
continue;
}

for (count = 3; inc < primeNumber / 2; count += 2)
{
if (primeNumber % count == 0)
primeNumber /= count;

}
count++;
}
printf("%ld\n", primeNumber);
return (0);
}
