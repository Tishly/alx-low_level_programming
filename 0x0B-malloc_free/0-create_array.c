#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @*s: pointer to return on failure
 * @c: variable to initialize
 * @size: variable for size of array
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	char *s = malloc(size * sizeof(char));
	unsigned int i = 0;

	if (size == 0 || s == 0)
	{
		return ('\0');
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
	free(s);
}
