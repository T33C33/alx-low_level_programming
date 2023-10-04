#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: passed parameter (pointer to a char)
 *
 * Description: prints a string, followed by a new line, to stdout
 * Return: No return type hence, no return value;
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
