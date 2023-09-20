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
	int i = 0, n, half, len = 0, length;

	while (str[len] != '\0')
	{
		len++;
	}
	length = (len - 1);
	half = (length / 2);
	if ((length % 2) == 0)
	{
		for (i = half + '0'; i <= length; i++)
		{
			_putchar(str[i]);
		}
	}
	else if ((length % 2) != 0)
	{
		for (n = (len - 1) / 2; n < length; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
