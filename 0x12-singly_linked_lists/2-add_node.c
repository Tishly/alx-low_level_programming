#include "lists.h"

/**
 * add_node - function that ads a node at the
 * beginnning of the list.
 * @head: pointer
 * @str: source
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int new_len;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (new_len = 0; str[new_len]; new_len++)
		;

	new->len = new_len;
	new->next = (*head);

	(*head) = new;

	return (new);
}
