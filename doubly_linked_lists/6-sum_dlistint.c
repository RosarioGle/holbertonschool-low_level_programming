#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of the linked list
 *
 * @head: the beginning of the list
 *
 * Return: the sum of all the data (n) of the linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (head != NULL)
	{
		while (head)
		{
			result += head->n;
			head = head->next;
		}
		return (result);
	}
	return (0);
}
