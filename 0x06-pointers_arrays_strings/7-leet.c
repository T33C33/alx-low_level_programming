#include "main.h"

/**
 * leet - encodes a string into 1337 with single if,
 * 2 loops, 0 switch, 0 ternary operator
 * @str: formal parameter containing string to encode
 *
 * Description: Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * Return: pointer to char s
 */
char *leet(char *str)
{
	char alpha[] = "AaEeTtOoLl";
	char corres[] = "4433770011";

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = corres[j];
			}
		}
	}
	return (str);
}
