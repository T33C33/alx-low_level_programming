#include "lists.h"

/**
 * sum_dlistint - Returns the sum of data (n) of linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The sum of all the data (n) of the linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
