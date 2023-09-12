#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * @lc: char variable
 *
 * Description: program that prints the alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	int lc = 'a';

	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}
	putchar('\n');
	return (0);
}
