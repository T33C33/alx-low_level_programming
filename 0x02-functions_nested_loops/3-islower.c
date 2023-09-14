#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: local parameter
 *
 * Description: a function that checks for lowercase character
 * Return: 0 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
