#include <stdio.h>

/**
 * main -  prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: program should print a number,
 * followed by a new line
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
}
