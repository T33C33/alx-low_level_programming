#include <stdio.h>

/**
 * main - prints all  combinations of two digits
 *
 * Description: prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int x = 0;
	int y = 1;

	while (x <= 8)
	{
		while (y <= 9)
		{
			if (x < y)
			{
				putchar(x + '0');
				putchar (y + '0');
				if ((x != 8) || (y != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;
		y = x + 1;
	}
	putchar('\n');
	return (0);
}
