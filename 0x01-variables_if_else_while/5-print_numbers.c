#include <stdio.h>

/**
 * main - prints base 10 single digit numbers
 *
 * Description: prints all single digit numbers
 * Return: Always 0
 */
int main(void)
{
	char i = '0';

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
