#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: formal parameter (pointer to a char)
 *
 * Description: prints half of a string, followed by a new line
 * prints the second half of the string
 * prints last n characters for odd number
 * Return: Absent
 */
void puts_half(char *str)
{
	int i = 0, n, half, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
/**	half = (len + 1) / 2;
	for (i = half; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('n');
}*/
	half = (len / 2);
	if ((len % 2) == 0)
	{
		for (i = half; i <= len; i++)
		{
			_putchar(str[i]);
		}
	}
	else if ((len % 2) != 0)
	{
		for (n = (len - 1) / 2; n < len; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
