#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: Pointer to head of list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *previous;
	const listint_t *transverse = head;

	while (transverse)
	{
		node_count++;
		printf("[%p] %d\n", (void *)transverse, transverse->n);
		previous = transverse;
		transverse = transverse->next;
		if (previous <= transverse)
		{
			printf("-> [%p] %d\n", (void *)transverse, transverse->n);
			exit(98);
		}
	}
	return (node_count);
}
