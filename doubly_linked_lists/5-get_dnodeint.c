#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of the linked list
 *
 * @head: the beginning of the list
 * @index: the element we want to find
 *
 * Return: the nth node of the linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
