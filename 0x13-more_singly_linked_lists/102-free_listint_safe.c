#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: A pointer to pointer to head of list
 *
 * Return: size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *transverse, *next;

	if ((h == NULL) || (*h == NULL))
		return (0);
	transverse = *h;
	while (transverse != NULL)
	{
		next = transverse->next;
		free(transverse);
		node_count++;
		transverse = next;
		if (transverse == *h)
		{
			*h = NULL;
			return (node_count);
		}
	}
	*h = NULL;
	return (node_count);
}
