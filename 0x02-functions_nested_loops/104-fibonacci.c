#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Description: prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, 
 * followed by a new line.
 * Return: Always 0
 */
int main()
{
	int x = 1;
	int y = 2;
	int skip;
	int num;
	
	printf("%d, %d, ", x, y);
	for (num = 2; num < 98; ++num)
	{
		skip = x + y;
		printf("%d", skip);
		if (num < 97)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		x = y;
		y = skip;
	}
	return 0;
}
