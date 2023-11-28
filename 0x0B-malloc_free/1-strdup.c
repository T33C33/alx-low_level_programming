#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: copy of string
 *
 * Return: NULL if str = NULL
 * pointer to the duplicated string on success
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	unsigned int i, length = 0;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	copy = malloc(sizeof(char) * (length + 1));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
