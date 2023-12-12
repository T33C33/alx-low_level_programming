#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: Pointer to pointer to head of list
 * @index: index of node to be deleted starting at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node_count = 0;
	listint_t *temp, *previous_node;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	previous_node = *head;
	temp = (*head)->next;
	while (temp != NULL)
	{
		if (node_count == index)
		{
			previous_node->next = temp->next;
			free(temp);
			return (1);
		}
		previous_node = temp;
		temp = temp->next;
		node_count++;
	}
	return (-1);
}
