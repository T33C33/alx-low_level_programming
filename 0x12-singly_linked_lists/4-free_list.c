#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	list_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold->str);
		free(hold);
	}
}
