#include "dog.h"


/**
*_strlen - function that returns length of a string.
*@str: string variable to be counted.
*Return: returns length of a string.
*/
int _strlen(char *str)
{
  int len;

  for (len = 0; str; len++)
    continue;

  return (len);
}


/**
*_strcopy - function that copies string pointed by src
*into dest variable.
*@dest:buffer storing.
*@src: buffer storing string.
*Return:returns copied string.
*/
char *_strcopy(char *dest, char *src)
{
  int index;

  index = 0;
  while (src[index])
  {
    dest[index] = src[index];
    index++;
  }
  dest[index] = '\0';
  return (dest);
}

/**
*new_dog - creates a new dog
*@name: name of new dog
*@age: age of new dog
*@owner: owner of new dog
*Return: returns NULL in case
*of failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *doggo;

  if (name == NULL || age < 0 || owner == NULL)
    return (NULL);

  doggo = malloc(sizeof(dog_t));
  if (doggo == NULL)
    return (NULL);

  doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
  if (doggo->name == NULL)
  {
    free(doggo);
    return (NULL);
  }
  doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
  if (doggo->owner == NULL)
  {
    free(doggo->name);
    free(doggo);
    return (NULL);
  }

  doggo->name = _strcopy(doggo->name, name);
  doggo->age = age;
  doggo->owner = _strcopy(doggo->owner, owner);

  return (doggo);
}
