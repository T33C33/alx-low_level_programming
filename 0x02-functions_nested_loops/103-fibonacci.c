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
	int sum = 0;

	for (x = 1; x <= 4000000; x++)
	{
		if ((x % 2) == 0)
		{
			sum = sum + x;
		}
	}
	printf("%d\n", sum);
	return (0);
}
