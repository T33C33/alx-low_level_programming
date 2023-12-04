#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (((*d).name == NULL) || ((*d).owner == NULL))
		{
			printf("Name: %s\nAge: %f\nOwner: %s\n",
					(d->name != NULL) ? d->name : "(nil)",
					(d->name != NULL) ? d->age : 0.0,
					(d->owner != NULL) ? d->owner : "(nil)");
		}
		else
		{
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
		}
	}
}
