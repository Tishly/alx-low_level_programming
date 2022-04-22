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
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
