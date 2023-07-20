#include <stdio.h>
#include <stdlib.h>

/**
*main -  a program that prints the opcodes of its own main function.
*@argc: number of arguments passed.
*@argv: array of arguments.
*
*Return: on success, 1 or 2 in case of failure
*/

int main(int argc, char *argv[])
{

int i, b;
int (*address)(int, char **) = main;
unsigned char opcode;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

b = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}

i = 0;
while (i < b)
{
opcode = *(unsigned char *)address;
printf("%.2x", opcode);

if (i == b - 1)
continue;
printf(" ");
address++;

i++;
}
printf("\n");
return (0);
}
