#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: parameter 1 (pointer to integer)
 * @b: parameter 2 (pointer to integer)
 *
 * Description: This function will swap the values of two integers
 * Return: No return type, hence no return value
 */
void swap_int(int *a, int *b)
{
	int new;

	new = *a;
	*a = *b;
	*b = new;
}
