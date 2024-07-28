ginclude "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 *
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for in the skip list.
 *
 * Return: Pointer to the first node where value is located, or NULL if value
 * is not present in list or if list is NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *next_jump;

	if (list == NULL)
		return (NULL);

	for (current = next_jump = list;
			next_jump->next != NULL && next_jump->n < value;)
	{
		current = next_jump;
		if (next_jump->express != NULL)
		{
			next_jump = next_jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					next_jump->index, next_jump->n);
		}
		else
		{
			while (next_jump->next != NULL)
				next_jump = next_jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			current->index, next_jump->index);

	for (; current->index < next_jump->index
			&& current->n < value; current = current->next)
		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
	printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);

	return (current->n == value ? current : NULL);
}
