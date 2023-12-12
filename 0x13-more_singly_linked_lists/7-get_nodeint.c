#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: Pointer to head of list
 * @index: index of the node, starting at 0
 *
 * Return: NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_count = 0;

	while (head != NULL)
	{
		if (node_count == index)
			return (head);
		node_count++;
		head = head->next;
	}
	return (NULL);
}
