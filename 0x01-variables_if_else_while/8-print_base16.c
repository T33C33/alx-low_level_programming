#include <stdio.h>

/**
 * main - prints base 16 numbers in lowercase
 *
 * Description: prints all the numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	char c = '0';
	char hex = 'A';

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
