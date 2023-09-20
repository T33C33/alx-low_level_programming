#include "main.h"

/**
 * *_strcpy - copies string pointed to by src to buffer
 * including the terminating null byte (\0)
 * @dest: 1st pointer to char
 * @src: 2nd pointer to char
 *
 * Description: function that copies string from a pointer variable into another
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, length = 0;

	while (src[length] != '\0')
	{
		length++;
	}
	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
