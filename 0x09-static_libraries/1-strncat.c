#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: appended string
 * @n: byte(s) from src
 *
 * Description: _strncat will use at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int i = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
