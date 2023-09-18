#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Description: prints the first 50 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int x = 1;
	int y = 2;
	int z;
	int i;
	
	printf("%d, %d", x, y);
	for (int i = 3; i <= 50; i++)
	{
		z = x + y;
		printf(", %d", z);
		x = y;
		y = z;
	}
   	printf("\n");
       	return 0;
}
