#include <stdio.h>

/**
 * main - prints combinations of 3 digits
 *
 * Description: prints all combinations of 3 digits
 * Return: Always 0
 */
int main(void)
{
	int x = 0, y, z;

	while (x <= 9)
	{
		y = x + 1;
		while (y <= 9)
		{
			z = y + 1;
			while (z <= 9)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (x != 7 || y != 8 || z != 9)
				{
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
