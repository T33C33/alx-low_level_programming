#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: Pointer to pointer to head of list
 *
 * Return: the head node’s data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node_data;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = (*head)->next;
	node_data = temp->n;
	free(temp);
	return (node_data);
}
