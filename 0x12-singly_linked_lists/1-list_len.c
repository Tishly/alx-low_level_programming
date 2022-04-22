#include "lists.h"

/**
 * list_len - function that returns the number of
 * elements in a linked list.
 * @h: pointer
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nbr_element = 0;
	const list_t counter = h;

	while (counter != NULL)
	{
		nbr_element++;
		counter = counter->next;
	}

	return (nbr_element);
}
