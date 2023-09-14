#include "main.h"

/**
 * main - prints the alphabet, in lowercase
 *
 * Description: function that prints the alphabet, in lowercase
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
