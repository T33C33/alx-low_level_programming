#include "search_algos.h"

/**
 * binary_search_recursive - Searches for a value in a sorted array
 *                           of integers using binary search recursively.
 * @arr: A pointer to the first element of the array to search.
 * @left: The starting index of the [sub]array to search.
 * @right: The ending index of the [sub]array to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         else, the index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int binary_search_recursive(int *arr, size_t left, size_t right, int value)
{
	size_t mid;


	if (arr == NULL)
		return (-1);
	while (right >= left)
	{
		printf("Searching in array: ");
		for (mid = left; mid < right; mid++)
			printf("%d, ", arr[mid]);
		printf("%d\n", arr[mid]);

		mid = left + (right - left) / 2;
		if (arr[mid] == value)
			return (mid);
		if (arr[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array
 *                      of integers using exponential search.
 * @arr: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: Prints a value every time it is compared in the array.
 */
int exponential_search(int *arr, size_t size, int value)
{
	size_t i = 0, right;

	if (arr == NULL)
		return (-1);

	if (arr[0] != value)
	{
		for (i = 1; i < size && arr[i] <= value; i = i * 2)
			printf("Value checked arr[%ld] = [%d]\n", i, arr[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (binary_search_recursive(arr, i / 2, right, value));
}
