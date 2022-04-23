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
	list_t *new = 0;
	unsigned int new_len = 0;

	new = malloc(sizeof(list_t));

	while (str[new_len])
	{
		new_len++;
	}

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = new_len;
	new->next = (*head);

	(*head) = new;

	return (new);
}
