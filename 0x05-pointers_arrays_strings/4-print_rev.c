#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: formal parameter(pointer to a char)
 *
 * Description: prints a string, in reverse, followed by a new line
 * Return: No return type hence, no return value
 */
void print_rev(char *s)
{
	int i = 0, j, length;

	while (s[i] != '\0')
	{
		i++;
	}
	length = i;
	for (j = length - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
