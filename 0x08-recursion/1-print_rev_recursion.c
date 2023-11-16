#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: formal parameter pointer to char
 *
 * Description: function that prints string in reverse
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
