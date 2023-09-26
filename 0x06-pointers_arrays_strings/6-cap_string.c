#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * sep_func - separator function with all possible separators
 * @str: formal parameter pointer to a char
 * @c: formal parameter to predefined function
 *
 * Description: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }"
 * Return: pointer to char cap
 */
int sep_func(char c)
{
	char sep[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; sep[i] != '\0'; i++)
	{
		if (c == sep[i])
		{
			return (1);
		}
	}
	return (0);
}
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || sep_func(str[i - 1]))
			{
				str[i] -= 32;
			}
		}
	}
	return (str);
}
