#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - function that duplicates a string
 * @str: variable to be duplicated
 *
 * Return: returns the pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int string_length = 0;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (; *str++; string_length++)
		continue;

	dup = malloc(sizeof(char) * (string_length + 1));
	if (!dup)
		return (NULL);
	for (string_length++; string_length--;)
		dup[string_length] = *--str;
	return (dup);
}

/**
 * new_dog - instantiates a dawg
 * @name: the dawgy name
 * @age: the dawgy age
 * @owner: the dawgy owner
 *
 * Return: pointer to new dawg.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (!d)
		return (NULL);
	d->name = _strdup(name);
	if (name && !d->name)
		return (free(d), NULL);
	d->owner = _strdup(owner);
	if (owner && !d->owner)
		return (free(d->name), free(d), NULL);
	d->age = age;
	return (d);
}
