#include "3-calc.h"

/**
*op_add - function that adds two variables.
*@a:the first number variable.
*@b:the second number variable.
*
*Return:returns the sum of two numbers.
*/

int op_add(int a, int b)
{
int add = a + b;

return (add);
}

/**
*op_sub - function that substracts two variables.
*@a:The first variable.
*@b:The second variable.
*
*Return: returns the difference of two numbers.
*/
int op_sub(int a, int b)
{
int subtract = a - b;

return (subtract);
}

/**
*op_mul - function that multiplies two variables.
*@a:The first variable.
*@b: The second variable.
*
*Return: returns that multiplication of a and b
*/
int op_mul(int a, int b)
{
int multiply = a * b;

return (multiply);
}

/**
*op_div - function that divides a and b.
*@a: The first variable.
*@b: The second variable.
*
*Return: returns the quotient of a and b.
*/
int op_div(int a, int b)
{
int divide = a / b;

return (divide);
}

/**
*op_mod - function that the divides two numbers and finds the reminder.
*@a: The first variable.
*@b: The second variable.
*
*Return: returns the remainder of the division of a by b.
*/
int op_mod(int a, int b)
{
int remainder = a % b;

return (remainder);
}
