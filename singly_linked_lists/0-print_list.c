#include "lists.h"

/**
 * print_list - print all elements of the list
 *
 * @h: the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}
	return (size);
}
