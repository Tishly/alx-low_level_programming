#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints the last
 * element of a singly linked list.
 * @h: pointer to the struct
 *
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *new = h;
	size_t counter = 0;

	while (new != NULL)
	{
		printf("%i\n", new->n);
		new = new->next;
		counter++;
	}
	return (counter);
}
