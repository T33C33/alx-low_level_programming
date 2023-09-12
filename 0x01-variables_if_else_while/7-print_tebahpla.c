#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Description: prints the lowercase alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char c = 'z';

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
