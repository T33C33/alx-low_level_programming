#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: Pointer to struct dog
 * @name: variable name to init
 * @age: variable age to init
 * @owner: variable owner to init
 *
 * Description: Nothing to see here:)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
