#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: new_ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr != NULL)
	{
		unsigned int min_size = (old_size < new_size) ? old_size : new_size;

		for (i = 0; i < min_size; i++)
		{
			((char *)new_ptr)[i] = ((char *)ptr)[i];
		}
		free(ptr);
	}
	return (new_ptr);
}
