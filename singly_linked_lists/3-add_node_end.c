#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 *
 * @head: the beginning of the list
 * @str: the string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int a, len = 0;
	list_t *cpy;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (a = 0; str[a] != '\0'; a++)
	{
		len++;
	}
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		cpy = *head;
		while (cpy->next != NULL)
		{
			cpy = cpy->next;
		}
		cpy->next = new;
	}

	return (new);
}
