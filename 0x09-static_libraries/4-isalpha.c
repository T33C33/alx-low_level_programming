#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: local parameter
 *
 * Description: a function that checks for alphabetic character
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 65 + 32 && c <= 90 + 32))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
