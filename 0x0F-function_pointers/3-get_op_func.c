#include "3-calc.h"
#include <stdlib.h>

/**
*get_op_func - pointer function that selects the correct
*function to perform the operation asked by the user.
*@s: operator passed as argument
*
*Return: A pointer to the function
*/
int (*get_op_func(char *s))(int, int)
{
int index = 0;

op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

while (ops[index].op != NULL && *(ops[index].op) != *s)
index++;

return (ops[index].f);
}
