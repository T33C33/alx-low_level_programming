#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array using
 *                        the Interpolation search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t left = 0, right = size - 1;

    if (array == NULL)
        return (-1);

    while (left <= right && value >= array[left] && value <= array[right])
    {
        size_t index = left + (((double)(right - left) / (array[right] - array[left])) * (value - array[left]));
    
        if (index < size)
            printf("Value checked array[%lu] = [%d]\n", index, array[index]);
        else
        {
            printf("Value checked array[%lu] is out of range\n", index);
            return (-1); /* Return -1 if the value is out of range */
        }

        if (array[index] == value)
            return (index);

        if (array[index] > value)
            right = index - 1;
        else
            left = index + 1;
    }

    return (-1);
}