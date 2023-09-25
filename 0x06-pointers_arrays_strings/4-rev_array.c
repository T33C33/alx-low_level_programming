#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: formal parameter pointer to int
 * @n: number of elements of the array
 *
 * Return: No return type, hence no return value
 */
void reverse_array(int *a, int n)
{
	int temp, i = 0, j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
