#include "lists.h"

/**
 * dlistint_len - returns the number of elements in the linked list
 *
 * @h: the list
 *
 * Return: the number of elements int the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
