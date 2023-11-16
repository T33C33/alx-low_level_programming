#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: formal parameter pointer to char
 *
 * Description: function that returns the length of a string
 * Return: Length of string if *s != EOS
 * return 0 if not
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}

