#include <stdio.h>

void printsfirst(void) __attribute__((constructor));
/**
 * printsfirst - prints before the main function is executed
 */
void printsfirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
