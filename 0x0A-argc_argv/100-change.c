#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argv: argument vector
 * @argc: argument count
 *
 * Description: Usage: ./change cents
 * where cents is the amount of cents you need to give back
 * print Error if the number of arguments
 * passed to your program is not exactly 1
 * you should use atoi to parse the parameter
 * passed to your program
 * print 0 if the number passed as the argument is negative
 * unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 * Return: o if permissible
 */
int main(int argc, char *argv[])
{
	int cents, nCoins = 0, i;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			nCoins++;
		}
	}
	printf("%d\n", nCoins);
	return (0);
}
