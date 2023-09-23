#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to char (formal parameter)
 *
 * Description: number can be preceded by an infinite number of characters
 * taking into account + and - signs
 * not allowed to use long
 * Return: 0 if no numbers exist
 */
int _atoi(char *s)
{
	int i = 0;
	int final = 0;
	int min_add = 1;
	
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			min_add *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			final = final * 10 + (s[i] - '0');
		}
		else if (final > 0)
		{
			break;
		}
		i++;
	}
	return final * min_add;
}
