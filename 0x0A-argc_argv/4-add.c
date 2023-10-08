#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: Print the result, followed by a new line
 * print 0, if no number was passed
 * print Error for numbers containing non-digits and return 1
 * assume numbers and addition of the numbers stored in an int
 * Return: 0 otherwise 1 as per conditions met
 */
int main(int argc, char *argv[])
{
	int sum = 0, i = 1, j = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

