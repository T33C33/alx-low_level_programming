#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms
 *
 * Description: prints the sum of the even-valued terms
 * Return: Always returs 0
 */
int main(void)
{
	int x = 1;
	int y = 2;
	int z;
	int sum = 0;

	while (x <= 4000000)
	{
		if ((x % 2) == 0)
		{
			sum = sum + x;
		}
		z = x + y;
		x = y;
		y = z;
	}
	printf("%d\n", sum);
	return (0);
}
