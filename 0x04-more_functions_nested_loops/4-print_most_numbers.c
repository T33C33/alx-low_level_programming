#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *
 * Description:  a function that prints the numbers, from 0 to 9
 * followed by a new line.
 * Do not print 2 and 4
 * only use _putchar twice in your code
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			i++;
		}
		_putchar(i);
	}
	_putchar('\n');
}
