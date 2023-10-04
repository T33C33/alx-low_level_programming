#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first formal parameter
 * @s2: second formal parameter for comparison
 *
 * Description: function should work exactly like strcmp
 * Return: pointer to string
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 != '\0') && (*s2 != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
