#include "dog.h"
/**
 * init_dog - initialize struct
 * @d: pointer to addres to initialize
 * @name: name
 * @age: dogs age
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
