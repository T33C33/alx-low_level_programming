#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: Pointer to the name string
 * @age: Foramal parameter for age
 * @owner: Pointer to the owner string
 * Return: Pointer to new dog_t; NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogmem;

	if ((name == NULL) || (owner == NULL))
		return (NULL);

	dogmem = malloc(sizeof(dog_t));
	if (dogmem == NULL)
		return (NULL);

	dogmem->name = malloc(strlen(name) + 1);
	if (dogmem->name == NULL)
	{
		free(dogmem);
		return (NULL);
	}
	strcpy(dogmem->name, name);

	dogmem->owner = malloc(strlen(owner) + 1);
	if (dogmem->owner == NULL)
	{
		free(dogmem->name);
		free(dogmem);
		return (NULL);
	}
	strcpy(dogmem->owner, owner);

	dogmem->age = age;
	return (dogmem);
}
