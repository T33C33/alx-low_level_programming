#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * int_index - function that searches for an integer
 * @array: given array to search through
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: returns the index of the first element
 * for which the cmp function does not return 0
 * return -1 if no element matches
 * return -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((size > 0) && (array != NULL) && (cmp != NULL))
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
