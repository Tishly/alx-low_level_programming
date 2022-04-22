#include "list.h"

/**
 * print_list - prints all the elements of a list
 * @list_t: struct
 * @h: pointer
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%s\n [%u]\n", h->len, h->str);
		}
		h = h->next
		counter++;
	}
	return (counter);
}

