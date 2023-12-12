#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: Pointer to pointer to head of list
 * @idx: index where the new node should be added starts at 0
 * @n: Value of new node
 *
 * Return: address of the new node, or NULL if it failed
 * null if not possible
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node_count = 0;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while ((node_count < idx - 1) && (temp != NULL))
	{
		temp = temp->next;
		node_count++;
	}
	if (node_count != idx - 1)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
