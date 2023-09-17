#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Description: prints every minute of the day of Jack Bauer
 * Return: Doesn't have a return type
 */
void jack_bauer(void)
{
	int a = 0;

	while (a < 24)
	{
		int b = 0;

		while (b < 60)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}
		a++;
	}
}
