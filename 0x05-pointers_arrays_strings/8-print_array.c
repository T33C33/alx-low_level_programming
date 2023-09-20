#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to an integer
 * @n: number of elements of the array to be printed
 *
 * Description: prints n elements of an array of integers
 * numbers will be separated by comma, followed by a space
 * They will be displayed in same order as stored in array
 * Return: Absent return value
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
