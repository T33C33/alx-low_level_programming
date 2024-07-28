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
    size_t low = 0, high = size - 1, pos = 0;

    if (array == NULL)
        return (-1);

    while (low <= high && value >= array[low] && value <= array[high])
    {
        size_t i = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
    
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
    
        if (array[i] == value)
            return (i);
    
        if (array[i] < value)
            low = i + 1;
        else
            high = i - 1;
    }

    printf("Value checked array[%lu] is out of range\n", pos);

    return (-1);
}