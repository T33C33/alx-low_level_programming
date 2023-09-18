#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Description: prints the first 50 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	unsigned long int x = 1;
	unsigned long int y = 2;
	unsigned long int z;
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
