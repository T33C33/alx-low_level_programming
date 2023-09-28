#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Description: prints the numbers, from 0 to 9
 * prints a new line
 * using _putchar twice in code
 * Return: N/A
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
