#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: formal parameter
 * @size: formal parameter 2
 *
 * Description: _calloc function allocates memory
 * for an array of nmemb elements of size bytes each
 * returns a pointer to the allocated memory
 * memory is set to zero
 * Return: NULL If nmemb or size is 0 of fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
