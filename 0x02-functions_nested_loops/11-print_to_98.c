#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: formal parameter
 *
 * Description: prints all natural numbers from n to 98
 * Return: absent return type hence value
 */
void print_to_98(int n)
{
	int x = n;

	if (x <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			if (x != 98)
			{
				printf("%d, ", x);
			}
			else if (x == 98)
			{
				printf("%d\n", x);
			}
		}
	}
	else if (x > 98)
	{
		for (x = n; x >= 98; x--)
		{
			if (x != 98)
			{
				printf("%d, ", x);
			}
			else if (x == 98)
			{
				printf("%d\n", x);
			}
		}
	}
}
