#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: pointer to char on destination
 * @src: pointer to char on source
 * @n: n bytes from memory area
 *
 * Description: copies n bytes from memory area src
 * to memory area dest
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
