#include "main.h"
/**
*_isupper - function that checks for uppercase character.
*@c: char variable
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
  return (1);
else
  return (0);
}
