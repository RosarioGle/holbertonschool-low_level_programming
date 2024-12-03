#include "lists.h"

/**
 * free_list - free the list
 *
 * @head: the beginning of the list
 */

void free_list(list_t *head)
{
	list_t *cpy;

	while (head)
	{
		cpy = head->next;
		free(head->str);
		free(head);
		head = cpy;
	}
}
