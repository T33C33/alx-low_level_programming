#include "main.h"
#include <stdio.h>

/**
 * main - compute sum of the multiples of some numbers
 *
 * Description: compute sum of the multiples of some numbers
 * Return: Always returns 0
 */
int main(void)
{
	int x = 1;
	int sum = 0;

	for (x = 1; x < 1024; x++)
	{
		if (((x % 3) == 0) || ((x % 5) == 0))
		{
			sum = sum + x;
		}
	}
	printf("%d\n", sum);
	return (0);
}
