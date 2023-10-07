#include <stdio.h>
#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: passed string
 * @c: occurrence of the character c
 *
 * Destination: this function that locates a character in a string
 * Return: 1st occurrence of the character c, NULL if miss'n
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
