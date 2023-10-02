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
int checklength(char *s);

int is_palindrome(char *s)
{
	int length = checklength(s);

	return (palindrome(s, 0, length - 1));
}

/**
 * checklength - checks length of string
 * @s: input parameter
 *
 * Description: Recursively checks the length of string
 * better substitute for loops and iteration
 * Return: length of string
 */
int checklength(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + checklength(s + 1));
	}
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
