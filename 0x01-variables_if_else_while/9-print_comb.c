#include <stdio.h>

/**
 * main - prints possible combinations of single-digit numbers
 *
 * Description: prints possible combinations of single-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
