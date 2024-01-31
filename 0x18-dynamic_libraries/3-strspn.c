#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: passed string
 * @accept: new string with characters
 *
 * Description: gets the length of a prefix substring
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int same, i;

	while (*s)
	{
		same = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				same = 1;
				break;
			}
		}
		if (!same)
		{
			return (num);
		}
		num++;
		s++;
	}
	return (same);
}
