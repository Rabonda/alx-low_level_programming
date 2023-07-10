#include "main.h"
/**
*_isupper - function that checks for uppercase character.
*@c: char variable
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);/** its upper case*/
else
return (0);/**its lower case or any other character*/
}
