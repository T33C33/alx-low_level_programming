#include "main.h"
#include <stdio.h>

/**
 * main: compute sum of the multiples of some numbers
 *
 * Description: compute sum of the multiples of some numbers
 * Return: Always returns 0
 */
int main(void)
{
	int x = 0;
	long int three, five, sum;

	while (x < 1024)
	{
		if ((three % 3) == 0)
		{
			three = three + x;
		} else if ((five % 5) == 0)
		{
			five = five + x;
		}
		x++;
	}
	sum = three + five;
	printf("%ld\n", sum);
	return (0);
}
