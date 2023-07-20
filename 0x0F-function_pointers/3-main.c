#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - function that prints the result of operations.
* @argc: The number of arguments.
* @argv: An array of pointers to the arguments.
*
* Return: the result of operations.
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
int first_number, second_number;
char *op;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

first_number = atoi(argv[1]);
op = argv[2];
second_number = atoi(argv[3]);

if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((*op == '/' && second_number == 0) || (*op == '%' && second_number == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(op)(first_number, second_number));
return (0);
}
