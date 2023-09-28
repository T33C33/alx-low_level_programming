#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 *
 * Description: a function that draws a straight line in the terminal
 * only use _putchar function to print
 *  line should end with a \n
 *  If n is 0 or less, the function should only print \n
 *  Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
			_putchar('-');
	}
	_putchar('\n');
}
