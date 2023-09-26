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
	unsigned long long i = 1, j = 2, sum;
	unsigned int next;

	printf("%llu, %llu", i, j);
	for (next = 2; next < 98; next++)
	{
		sum = i + j;
		printf(", %llu", sum);
		i = j;
		j = sum;
	}
	printf("\n");
	return (0);
}
