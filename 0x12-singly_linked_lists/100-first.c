#include <stdio.h>

/**
* bmain - function that prints You're beat! and yet
* you must allow,\nI bore my house upon my back!\n
* before the main function is executed.
* Return: prints two statements.
*/

void __attribute__ ((constructor)) bmain()
{
    printf("You're beat! and yet, you must allow");
    printf(",\nI bore my house upon my back!\n");
}
