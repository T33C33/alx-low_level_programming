#include <stdlib.h>
#include "main.h"

/**
 * *create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: specific char initialization for array c
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(sizeof(char) * size);

	if ((size == 0) || (array == NULL))
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
