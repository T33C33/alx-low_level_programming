#include "main.h"

/**
 * rev_string - reverses a string
 * @s: formal parametetr (pointer to a char)
 *
 * Description: a function that reverses a string
 * Return: No return type, hence no return value
 */
void rev_string(char *s)
{
	int i = 0, length = 0, sto;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length / 2; i++)
	{
		sto = s[i];
		s[i] = s[length - 1 - i];
		s[length - i - 1] = sto;
	}
}
