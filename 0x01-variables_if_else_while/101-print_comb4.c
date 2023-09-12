#include <stdio.h>

/**
 * main - prints combinations of 3 digits
 *
 * Description: prints all combinations of 3 digits
 * Return: Always 0
 */
int main(void)
{
	int x = 0;
	int y = 1;
	int z = 2;

	while (x <= 7)
	{
		while (y <= 8)
		{
			while (z <= 9)
			{
				if ((x < y) && (y < z))
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if ((x != 7) || (y != 8) || (z != 9))
					{
						putchar(',');
						putchar(' ' );
					}
				}
				z++;
			}
			y++;
		}
		x++;
		y = x + 1;
		z = y + 1;
	}
	putchar('\n');
	return (0);
}
