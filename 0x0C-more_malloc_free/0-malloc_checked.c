#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: passed parameter
 *
 * Description: allocates memory using malloc
 * if malloc fails,
 * function should cause normal process termination
 * with a status value of 98
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return ptr;
}
