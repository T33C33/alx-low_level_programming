#include "main.h"

/**
 * is_palindrome - checks for a palindrome
 * @s: formal parameter pointer to a char
 * @i: start index
 * @j: stop index
 *
 * Description: checks if a string is a palindrome
 * Return: 1 if palindrome, 0 if not
 */

int palindrome(char *s, int i, int j);

int is_palindrome(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (palindrome(s, 0, length - 1));
}

/**
 * palindrome - checks if string is palindrome
 * @s: formal parameter
 * @i: first string array index
 * @j: second string array index
 *
 * Return: 1 if palindrome, 0 if otherwise
 */
int palindrome(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}
	if (s[i] != s[j])
	{
		return (0);
	}
	return (palindrome(s, (i + 1), (j - 1)));
}
