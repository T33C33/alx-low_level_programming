#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: String 2
 *
 * Return: Pointer to a newly allocated space in memory
 * with s1 then s2 after
 * NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	unsigned int len1 = 0, len2 = 0, i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	new = malloc(sizeof(char) * (len1 + len2 + 1));
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		new[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		new[len1 + i] = s2[i];
	}
	new[len1 + len2] = '\0';

	return (new);
}
