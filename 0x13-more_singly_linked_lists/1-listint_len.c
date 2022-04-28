#include "lists.h"

/**
 * listint_len - function that returns the
 * number of elements in a list
 *
 * @h: pointer to the head
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (no_nodes);
}
