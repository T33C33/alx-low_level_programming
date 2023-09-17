#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: function argument
 *
 * Description: function that prints the last digit of a number
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int i =  n % 10;

	if (n < 0)
	{
		n = -n;
	}
	if (i < 0)
	{
		i = -i;
	}
	_putchar(i + '0');
	return (i);
}
