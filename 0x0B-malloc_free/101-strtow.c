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
while (str[row] != ' ' && i < str_len)
row++;
word++;
}
}
if (word == 0)
return (0);
return (word);
}
/**
 * strtow - splits a string into words
 * @str: input string to split
 * Return: pointer to new string
 */
char **strtow(char *str)
{
char **newstr;
int i = 0, j = 0, str_len = 0, words;

if (str == NULL || str[0] == '\0')
return (NULL);
while (*(str + str_len) != '\0')
str_len++;
words = word_count(str, str_len);
if (!words)
return (NULL);
newstr = malloc((words + 1) * sizeof(char *));
mallocmem(newstr, str, str_len);
while (i < str_len)
{
if (str[i] != ' ')
{
i = strncat_mod(newstr[j], str, i, str_len);
j++, i--;
}
i++;
}
newstr[words + 1] = NULL;
return (newstr);
}
