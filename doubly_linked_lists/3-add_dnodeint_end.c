#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the list
 *
 * @head: the beginning of the list
 * @n: the node to add
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *cpy;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = *head;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		cpy = *head;
		while (cpy->next != NULL)
			cpy = cpy->next;
		cpy->next = new;
		new->prev = cpy;
		new->next = NULL;
	}
	return (new);
}
