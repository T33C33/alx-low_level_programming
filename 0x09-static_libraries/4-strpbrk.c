#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: passed string
 * @accept: set of string to search for
 *
 * Description: function that searches a string for any of a set of bytes
 * Return: pointer to the byte in s matching accept
 * NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
