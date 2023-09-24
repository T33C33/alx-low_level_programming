#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first formal parameter
 * @srcr: second formal parameter to append
 *
 * Description: function appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *concat = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
	       	src++;
	}
	*dest = '\0';
	return (concat);
}
