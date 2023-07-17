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
 * new_dog - function that instantiates a dawg
 * @name: the dawgy name
 * @age: the dawgy age
 * @owner: the dawgy owner
 *
 * Return: returns the pointer to new dawg.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = malloc(sizeof(dog_t));

	if (!my_dog)
		return (NULL);
	my_dog->name = _strdup(name);
	if (name && !my_dog->name)
		return (free(my_dog), NULL);
	my_dog->owner = _strdup(owner);
	if (owner && !my_dog->owner)
		return (free(my_dog->name), free(my_dog), NULL);
	my_dog->age = age;
	return (my_dog);
}
