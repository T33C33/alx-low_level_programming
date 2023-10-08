#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: print the result of the multiplication and \n
 * assume the 2 nos and result of the multiplication stored in int
 * print Error if program does not receive two arguments
 * Return: 1 if error occurs, 0 if not.
 */
int main(int argc, char *argv[])
{
	int one, two, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	one = atoi(argv[1]);
	two = atoi(argv[2]);
	result = one * two;
	printf("%d\n", result);
	return (0);
}
