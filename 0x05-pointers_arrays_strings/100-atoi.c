#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: pointer to a char (formal parameter)
 *
 * Description: number can be preceded by an infinite number of characters
 * take into account all the - and + signs before the number
 * Return: returns 0 if no numbers exist in the string
 */
int _atoi(char *s)
{
	int start = 0, num = 0, i = 0, final = 0, multi = 1;

	while (s[i] != '\0')
	{
		if ((s[i] >= '0') && s[i] <= '9')
		{
			start = 1;
			num = s[i] - '0';
			final = final * 10 + num;
		}
		else
		{
			if (start)
			{
				break;
			}
			else if (s[i] == '-')
			{
				multi = -1;
				start = 1;
			}
			else if (s[i] == '+')
			{
				start = 1;
			}
			else if (s[i] != ' ' && !start)
			{
				break;
			}
		}
		i++;
	}
	return (multi * final);
}
