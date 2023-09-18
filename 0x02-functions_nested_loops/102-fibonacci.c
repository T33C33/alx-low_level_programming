#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Description: prints the first 50 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	unsigned long long x = 1;
	unsigned long long y = 2;
	unsigned long long z;
	int i;
	
	printf("%llu, %llu", x, y);
	for (i = 3; i <= 50; i++)
	{
		z = x + y;
		printf(", %llu", z);
		x = y;
		y = z;
	}
	printf("\n");
	return 0;
}
