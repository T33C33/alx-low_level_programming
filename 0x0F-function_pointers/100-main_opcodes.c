#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: argument vectors
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int store_num, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	store_num = atoi(argv[1]);
	if (store_num < 0)
	{
		printf("Error\n");
		return (2);
	}
	unsigned char *ptr = (unsigned char *)main;

	for (i = 0; i < store_num; i++)
	{
		printf("%02x", *(ptr + i));
		if (i < store_num - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
