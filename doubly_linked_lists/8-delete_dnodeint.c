#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of the linked list
 *
 * @head: the list
 * @index: the element we want to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *cpy = NULL;
	unsigned int a;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	a = 0;
	while (current != NULL && a < index)
	{
		current = current->next;
		a++;
	}
	if (current == NULL)
		return (-1);
	cpy = current->prev;
	cpy->next = current->next;
	if (current->next != NULL)
		current->next->prev = cpy;
	free(current);
	return (1);
}
