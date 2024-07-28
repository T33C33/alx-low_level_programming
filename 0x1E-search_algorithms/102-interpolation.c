#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array using
 *                        the Interpolation search algorithm
 * @arr: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 */
int interpolation_search(int *arr, size_t size, int value)
{
    size_t left, right;

    if (arr == NULL)
        return (-1);

    for (left = 0, right = size - 1; right >= left;)
    {
        size_t pos = left + (((double)(right - left) / (arr[right] - arr[left])) * (value - arr[left]));
        if (pos < size)
            printf("Value checked arr[%ld] = [%d]\n", pos, arr[pos]);
        else
        {
            printf("Value checked arr[%ld] is out of range\n", pos);
            break;
        }

        if (arr[pos] == value)
            return (pos);
        if (arr[pos] > value)
            right = pos - 1;
        else
            left = pos + 1;
    }

    return (-1);
}