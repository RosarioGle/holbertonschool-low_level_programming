#include "lists.h"

/**
 * free_dlistint - frees the list
 *
 * @head: the beginning of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
