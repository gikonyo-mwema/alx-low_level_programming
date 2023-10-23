#include "dog.h"
/**
 * new_dog - create a new struct
 * @name: new dogs name
 * @age: new dogs age
 * @owner: owner
 *
 * Return: pointer to new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int j;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (j = 0; name[j]; j++)
		new_dog->name[j] = name[j];
	new_dog->name[j] = '\0';
	new_dog->age = age;
	for (j = 0; owner[j]; j++)
		new_dog->owner[j] = owner[j];
	new_dog->owner[j] = '\0';
	return (new_dog);
}
