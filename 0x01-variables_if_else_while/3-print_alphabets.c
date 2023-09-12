#include <stdio.h>

/**
 * main - prints [a..z], [A..Z]
 *
 * Description: prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	for (c = 97; c <= 122; c++)
	{
		putchar (c);
	}
	for (C = 65; C <= 90; C++)
	{
		putchar (C);
	}
	putchar('\n');
	return (0);
}
