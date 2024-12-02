#include "lists.h"

/**
 * list_len - return the number of elements in a linked list
 *
 * @h: the list
 *
 * Return: the number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
