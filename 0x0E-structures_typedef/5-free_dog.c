#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free the dogs
 * @d: pointer to the struct
 *
 * Return: None.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
