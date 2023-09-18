#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Description: prints the first 50 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	long int x = 1;
	long int y = 2;
	long int z;
	int i;

	for (i = 1; i <= 50; i++)
	{
		if (x != 20365011074)
		{
			printf("%ld, ", x);
		}
		else
		{
			printf("%ld\n", x);
		}
		z = x + y;
		x = y;
		y = z;
	}
	return (0);
}
