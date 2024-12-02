#include "lists.h"

/**
 * add_node - adds a new node at the beginning of the list
 *
 * @head: the beginning of the list
 * @str: the name of the new node
 *
 * Return: the size
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int a, len = 0;
	list_t *new;

	for (a = 0; str[a] != '\0'; a++)
		len++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = len;
	new->next =  *head;
	*head = new;
	return (new);
}
