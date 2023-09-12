#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program will assign a random number to the variable n
 *
 * Description: assigns  a random number to a variable each time it is executed.
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
