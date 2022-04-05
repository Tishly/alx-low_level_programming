#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *_strdup - function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string given as a parameter
 * Return: NULL
 */

char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *z;

	if (str == NULL)
	{
		return ('\0');
	}

	for (; str[size] != '\0'; size++)
		;

	z = malloc(size * sizeof(*str) + 1);

	if (z == NULL)
	{
		return ('\0');
	}
	else
	{
		for (; i < size; i++)
		{
			z[i] = str[i];
		}
	}
	return (z);
	free(z);
}
