#include <unistd.h>
#include <stdio.h>
/**
 * main - prints a string of texts without printf or puts
 * Return: returns 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
