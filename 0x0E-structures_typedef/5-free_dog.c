#include "dog.h"

/**
*free_dog - function that Frees dog
*@d: dog to be freed
*return: void Frees dog
*/
void free_dog(dog_t *d)
{
if (d == NULL)
  return;

free(d->name);
free(d->owner);
free(d);
}
