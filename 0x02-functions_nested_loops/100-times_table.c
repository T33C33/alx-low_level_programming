#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: formal parameter
 *
 * Description: prints the n times table, starting with 0
 * Return: No return type, hence no return value
 */
void print_times_table(int n)
{
	int x, y;

	if ((n >= 0) && (n <= 15))
	{
		for (x = 0; x <= n; x++)
		{
			for  (y = 0; y <= n; y++)
			{
				int sum = x * y;

				if ((y != 0) && (sum < 10))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(sum + '0');
				} else if ((sum >= 10) && (sum < 100))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((sum / 10) + '0');
					_putchar((sum % 10) + '0');
				} else if (sum >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((sum / 100) + '0');
					_putchar(((sum / 10) % 10) + '0');
					_putchar((sum % 10) + '0');
				} else if (y == 0)
				{
					_putchar(sum + '0');
				}
			}
			_putchar('\n');
		}
	}
}
