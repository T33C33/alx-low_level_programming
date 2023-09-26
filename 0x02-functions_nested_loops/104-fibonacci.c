#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Description: prints the first 98 Fibonacci numbers,
 * starting with 1 and 2,
 * followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	unsigned int i = 1, j = 2, sum, next;

	printf("%u, %u", i, j);

	for (next = 2; next < 98; next++)
	{
		sum = a + j;
		printf(", %u", sum);
		i = j;
		j = sum;
	}
	printf('\n');
	return (0);
}
