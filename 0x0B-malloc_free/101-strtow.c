#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * strncat_mod - Function that concatenates string with another string.
 * @dest: destination string variable.
 * @src: source string variable.
 * @i: index of a string variable.
 * @str_len: string length.
 * Return: next index.
 */
int strncat_mod(char *dest, char *src, int i, int str_len)
{
int count = 0;

while (src[i] != ' ' && i < str_len)
{
dest[count] = src[i];
i++, count++;
}
return (i);
}
/**
 * mallocmem - function that allocates memory and sets NULL at string.
 * @newstr: new string variable
 * @str: string variable
 * @str_len: string length
 * Return: void that allocates memory and sets NULL at string.
 */
void mallocmem(char **newstr, char *str, int str_len)
{
int row, count = 0, length = 1;

for (row = 0; row < str_len; row++)
{
if (str[row] != ' ')
{
while (str[row] != ' ' && row < str_len)
row++, length++;
newstr[count] = malloc(sizeof(char) * length);
newstr[count][length] = '\0';
count++, length = 1;
}
}
}
/**
 * word_count - unction that counts words in a string
 * @str: string variable
 * @str_len: string length
 * Return: 0 code success
 */
int word_count(char *str, int str_len)
{
int row = 0, word = 0;

for (row = 0; row < str_len; row++)
{
if (str[row] != ' ')
{
while (str[row] != ' ' && row < str_len)
row++;
word++;
}
}
if (word == 0)
return (0);
return (word);
}
/**
 * strtow - function that splits a string
 * @str: input string
 * Return: splits a string into words
 */
char **strtow(char *str)
{
char **newstring;
int row = 0, x = 0, string_length = 0, words;

if (str == NULL || str[0] == '\0')
return (NULL);
while (*(str + string_length) != '\0')
string_length++;
words = word_count(str, string_length);
if (!words)
return (NULL);
newstring = malloc((words + 1) * sizeof(char *));
mallocmem(newstring, str, string_length);
while (row < string_length)
{
if (str[row] != ' ')
{
row = strncat_mod(newstring[x], str, row, string_length);
x++, row--;
}
row++;
}
newstring[words + 1] = NULL;
return (newstring);
}
