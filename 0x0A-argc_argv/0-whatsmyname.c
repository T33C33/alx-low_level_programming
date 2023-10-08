#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: program will print the new name when renamed
 * without having to compile it again
 * You should not remove the path before the name of the program
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
