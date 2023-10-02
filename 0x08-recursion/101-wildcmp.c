#include "main.h"

int checkstr(char *s1, char *s2);
int cmpstr(char *s1, char *s2);

/**
 * wildcmp - Compares two strings
 * @s1: first string pointer to char
 * @s2: second string pointer to char
 *
 * Description: This function checks if string s2
 * contains only *
 * Return: 1 if the strings are identical, 0 if otherwise
 * then passes it to next function to perform comparison
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) == '\0')
	{
		return (1);
	}
	return checkstr(s1, s2);
}

/**
 * checkstr - compares 2 strings
 * not containing only the single string * and EOL
 * @s1: first string pointer to char
 * @s2: second string pointer to char
 *
 * Return: 1 if the strings are identical, returns 0 if otherwise
 */
int checkstr(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		return (cmpstr(s1, s2 + 1));
		if (*s1 == '\0' && *s2 == '\0')
		{
			return (1);
		}
		if (*s1 == *s2)
		{
			return (checkstr(s1 + 1, s2 + 1));
		}
		if (*s1 != *s2)
		{
			return (0);
		}
	}
	return (0);
}

/**
 * cmpstr - checks if 2 identical strings are *
 * @s1: first string 
 * @s2: second string with *
 *
 * Return: 1 if the strings are identical, 0 if otherwise
 */
int cmpstr(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		return (checkstr(s1, s2));
	}
	return (checkstr(s1, s2) || checkstr(s1 + 1, s2));
}
