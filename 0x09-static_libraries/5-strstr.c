#include "main.h"
#include <stddef.h>

/**
 * *_strstr - finds the first occurrence of the substring needle
 * @needle: search for string
 * @haystack: passed string
 *
 * Description: finds the first occurrence of the substring needle
 * in the string haystack
 * the terminating null bytes (\0) are not compared
 * Return: pointer to the beginning of the located substring
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack)
	{
		char *track = haystack;
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (*haystack == needle[i])
			{
				if (needle[i + 1] == '\0')
				{
					return (track);
				}
				haystack++;
			}
			else
			{
				break;
			}
		}
		haystack = track + 1;
	}
	return (NULL);
}
